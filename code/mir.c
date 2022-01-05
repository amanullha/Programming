# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <sys/shm.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <unistd.h>
# include <sys/wait.h>
# include <errno.h>
# define MAX_SEQUENCE 10
typedef struct{
    long fib_sequence[MAX_SEQUENCE];
    int sequence_size;
} shared_data;
int main()
{
  int pid,fibo_0,fibo_1,length,hold,i;
  fibo_0 = 0;
  fibo_1 = 1;

  printf("Enter the length of fibonacchi(greater than 0 and less than 10): ");
  do {
    scanf("%d",&length);
  }
  while(length < 0 || length >= 10);

  int segment_id;
  size_t segment_size = sizeof(shared_data);
  segment_id = shmget(IPC_PRIVATE, segment_size, S_IRUSR | S_IWUSR);
  shared_data *shared_memory = shmat(segment_id, NULL, 0);
  shared_memory->sequence_size = length;
  pid = fork();

  if (pid < 0) {
    fprintf(stderr, "Fork Failed\n");
    return 1;
  }

  else if (pid == 0)  {
    printf("Child is producing the Fibonacci Sequence...\n");
    shared_memory->fib_sequence[0] = fibo_0;
    shared_memory->fib_sequence[1] = fibo_1;
    for (i=2; i<shared_memory->sequence_size; i++)
    {
      hold = fibo_0+fibo_1;
      shared_memory->fib_sequence[i] = hold;
      fibo_0=fibo_1;
      fibo_1=hold;
    }
    printf("Child ends\n");
  }

  else {
    wait(NULL);
    for(i=0; i<shared_memory->sequence_size; i++) {
      printf("%ld ", shared_memory->fib_sequence[i]);
    }
    printf("\n");
    printf("Parent ends\n");
  }

  shmctl(segment_id, IPC_RMID, NULL);
  return 0;
}

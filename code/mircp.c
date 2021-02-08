# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <sys/shm.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <unistd.h>
# include <sys/wait.h>
# include <errno.h>
# define ll long long int
# define MAX_SEQUENCE 100

typedef struct
{
    ll fib_sequence[MAX_SEQUENCE];
    ll sequence_size;
} shared_data;

int main()
{
    ll pid,length,hold,i;

    printf("Enter the length of the array ");
    do
    {
        scanf("%lld",&length);
    }
    while(length < 0 || length >= 100);

    ll segment_id;
    size_t segment_size = sizeof(shared_data);
    segment_id = shmget(IPC_PRIVATE, segment_size, S_IRUSR | S_IWUSR);
    shared_data *shared_memory = shmat(segment_id, NULL, 0);
    shared_memory->sequence_size = length;
    pid = fork();

    if (pid < 0)
    {
        fprintf(stderr, "Fork Failed\n");
        return 1;
    }

    else if (pid == 0)
    {
        printf("\nChild is producing the Bubble sort...\n");
        printf("\n\nEnter the elements of the array \n");

        int chobe=length,ok=0;
        while(chobe--)
        {
            ll x;
            scanf("%lld",&x);
            shared_memory->fib_sequence[ok++] = x;

        }


        ll c,d,swap;

        for (c = 0 ; c <shared_memory->sequence_size - 1; c++)
        {
            for (d = 0 ; d < shared_memory->sequence_size - c - 1; d++)
            {
                if (shared_memory->fib_sequence[d] > shared_memory->fib_sequence[d+1]) /* For decreasing order use '<' instead of '>' */
                {
                    swap       = shared_memory->fib_sequence[d];
                    shared_memory->fib_sequence[d]   = shared_memory->fib_sequence[d+1];
                    shared_memory->fib_sequence[d+1] = swap;
                }
            }
        }
        printf("\n");

        for (i=0; i<shared_memory->sequence_size; i++)
        {

            ll px=shared_memory->fib_sequence[i];
            printf("%lld   ",px);

        }

        printf("\n\nChild ends\n");
    }

    else
    {
        wait(NULL);
        for(i=0; i<shared_memory->sequence_size; i++)
        {
            printf("%lld ", shared_memory->fib_sequence[i]);
        }

        printf("\n\nParent ends\n");
    }

    shmctl(segment_id, IPC_RMID, NULL);
    return 0;
}

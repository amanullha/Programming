#include <stdio.h>
#include <conio.h>
int main()
{
   while (!kbhit())
      printf("You haven't pressed a key.\n");

   return 0;
}


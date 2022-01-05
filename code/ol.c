#include<stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(0));

    int number;
    int guess;

    while(1)
    {
        printf("\nEnter your estimate: ");

        number = rand()%10+1;

        if(scanf("%d",&guess))
        {

            if (guess < number)
                printf("\nYour Guessed number is less than the secret number\n");

            else if (guess > number)
                printf("\nYour Guessed number is greater than the secret number\n");

            else
                printf("\nYour guessed is Currect!\n");
        }
        else
        {
            printf("\nYour guessed is not an Integer\n");
            return 0;
        }
    }


    return 0;

}



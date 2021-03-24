#include<bits/stdc++.h>
using namespace std;


#include <stdio.h>

#define SIZE 10 // Matrix size

int main()
{
    int A[SIZE][SIZE];
    int row, col, sum1 = 0, sum2= 0;

    int SIZE1,SIZE2;



    /* Take Matrix size from user */
    printf("Enter elements size of row and col: ");
    scanf("%d%d",&SIZE1,&SIZE2);

    //Enter Matrix elements
    printf("Enter elements of Matrix\n\n");
    for(row=0; row<SIZE1; row++)
    {
        for(col=0; col<SIZE2; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }


    /* Calculate sum of elements of each row of matrix */
    for(row=0; row<SIZE1; row++)
    {
        int sum = 0;
        for(col=0; col<SIZE2; col++)
        {
            sum += A[row][col];
        }
        sum1=max(sum1,sum);
    }
    // Maximum sum of the row
    printf("Sum of elements of rows = %d\n",sum1);



    /* Find sum of elements of each columns of matrix */
    for(col=0; col<SIZE2; col++)
    {
        int sum=0;
        for(row=0; row<SIZE1; row++)
        {
            sum+=A[row][col];
        }
        sum2=max(sum2,sum);
    }

    // Maximum sum of the column
    printf("Sum of elements of Column = %d\n", sum2);



    //int minval=min(sum1,sum2);
    printf("Minimum between RowMax and ColMax is : %d",min(sum1,sum2));


    return 0;
}

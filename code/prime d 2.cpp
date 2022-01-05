#include <bits/stdc++.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
using namespace std;

int checkPrime(long long int n)
{
    long long int i;
    for(i=2; i<n; i++)
        if(n%i==0)
            return 0;
    return 1;
}
int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long int m,n,i;
    scanf("%lld%lld",&n,&m);
    long long int c=0;
    if((m-n)<=1000000 && n>=1 && m>=n && n<=1000000000 && m<=1000000000)
    {
        if(n>2)
        {

            if(n%2==0)
                n++;
            for(i=n; i<=m; i=i+2)
            {
                if(checkPrime(i)==1)
                {
                    if(checkPrime(i+2)==1)
                    {
                        c++;
                    }
                }
            }


        }

        else
        {


            n=3;
            for(i=n; i<=m; i=i+2)
            {
                if(checkPrime(i)==1)
                {
                    if(checkPrime(i+2)==1)
                    {
                        c++;
                    }
                }
            }



        }

        printf("%lld",c);


    }


    else
        printf("0");
    return 0;
}

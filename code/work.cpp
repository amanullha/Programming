#include<bits/stdc++.h>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>
using namespace std;

int slope(int m,int b,int x)
{
    return m*x+b;
}

int main()
{
    srand (time(NULL));

    int mm=10;
    int bb=5;
    vector<int>x1,y1;

    for(int i=0; i<10; i++)
    {
        int x=rand()%10;
        int y=rand()%10;
        x1.push_back(x);
        y1.push_back(y);
    }

    int i=0;
    int ans_distance=10000,ans_m,ans_b;
    for(int m=1; m<=mm; m++)
    {
        for(int b=-5; b<bb; b++)
        {
            int distance=0;
            for(int i=0; i<10; i++)
            {
                distance+=abs(y1[i]- slope(m,b,x1[i]));
            }

            if(distance<ans_distance)
            {
                ans_distance=distance;
                ans_m=m;
                ans_b=b;
            }
        }
    }


    cout<<"Minimum distance : "<<ans_distance<<endl<<"m : "<<ans_m<<endl<<"b : "<<ans_b<<endl;

    return 0;
}

/*

Test solution

Minimum distance : 34
m : 1
b : -4

*/


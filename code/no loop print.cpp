///How will you print numbers from 1 to 100 without using loop?
/// 1. for(int i=1;i<=100;i++)cout<<i<<" ";
/// 2. while(t<=100)cout<<t<<" ",t++;

#include<iostream>
using namespace std;
int main()
{
    static int t=1;

    cout<<t<<" ";
    t++;
    if(t<=100)main();

    return 0;
}




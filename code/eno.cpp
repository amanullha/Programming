#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long int n=10023200221;

    long long int r=0;

    long long int t=n;

    while(t)
    {

        long long int d=t%10;
        t/=10;
        r=(r*10)+d;
    }

    cout<<r<<endl;


    return 0;
}

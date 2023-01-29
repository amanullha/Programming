#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;




int main()
{


    int n=5;


    int d=n-1;

    for(int i=1;i<=d;i++)
    {
        cout<<' ';

        int s=i;
        int sp=d-i;
        while(sp--)cout<<" ";

        while(s--)cout<<'*';

        cout<<endl;

    }

    for(int i=0; i<n+n; i++)cout<<'*';
    cout<<endl;
    for(int i=0; i<n+n; i++)cout<<'*';
    cout<<endl;


    d=n-1;

    for(int i=0;i<d;i++)
    {
        cout<<' ';

        int s=i;
        int sp=d-i;
        while(s--)cout<<' ';
        while(sp--)cout<<"*";



        cout<<endl;
    }

    return 0;
}

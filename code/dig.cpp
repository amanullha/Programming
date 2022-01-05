#include<bits/stdc++.h>
using namespace std;
int x[1000];
int f[100];

int d(int n)
{
    int sum=0;
    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }

    return sum;
}
int main()
{
    int n;
    cin>>n;

    int mx=INT_MIN,c=0,k=1;
    for(int i=1; i<=n; i++)
    {
        int x=d(i);
        cout<<i<<"   "<<x<<endl;
        f[x]++;
        if(f[x]>mx)
        {
            mx=f[x];
            c=0;

        }
        else if(mx==f[x])c++;
        //else if(mx==f[x]&&k!=0)c--;




    }

    cout<<"c  "<<c+1<<endl;

    return 0;
}

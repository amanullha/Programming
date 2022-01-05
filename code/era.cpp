#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int mx=0;

    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        if(x>i)mx=max(mx,x-i);
    }

    cout<<mx<<endl;
}


int main()
{

    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}

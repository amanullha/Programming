#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int c;
    cin>>c;
    while(c--)
    {
        ll n,i,t;
        cin>>n>>i>>t;

        ll x=(t+1)/i;
        x--;

        ll ans=x*(n-2);;
        ans+=x-1;
        cout<<ans<<endl;
    }

}

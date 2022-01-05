#include <bits/stdc++.h>
#define ll long long
using namespace std;
int  tc=1;

void solve()
{


    ll n,p;
    cin>>n>>p;
    unordered_map<ll,ll>un;
    for(ll i=1; i<=n; i++)
    {
        for(ll j=i; j<=n; j++)
        {
            ll g=__gcd(i,j);
            //  cout<<g<<endl;
            un[g]++;
        }
    }

    bool f=0;
    ll ans=INT_MIN;
    for(auto x:un)
    {
       // cout<<x.first<<"  "<<x.second<<endl;
        if(x.second==p)f=1;
        if(x.second==p)
        {
           ans=max(ans,x.first);
        }
    }
    cout<<"Case "<<tc++<<": ";
    if(f)cout<<ans<<endl;
    else cout<<"-1"<<endl;

}

int main()
{
    ll t ;
    cin>>t;
    while(t--)solve();
    return 0;
}

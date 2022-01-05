#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int tc=1;
void solve()
{
    cout<<"Case "<<tc++<<":\n";

    ll n;
    cin>>n;
    vector<ll>age,pore,mid;
    for(ll i=1; i*i<=n; i++)
    {
        if(n%i==0 && n/i==i)
        {
            mid.push_back(i);
            continue;
        }
        if(n%i==0 && n/i!=i)
        {
        age.push_back(i);
        pore.push_back(n/i);
        }
    }
    reverse(pore.begin(),pore.end());
    for(ll x:age)cout<<x<<" ";
    for(ll x:mid)cout<<x<<" ";
    for(ll x:pore)cout<<x<<" ";
    cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}

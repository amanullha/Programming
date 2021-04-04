#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int tc=1;
void solve()
{
    cout<<"Case "<<tc++<<": ";

    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(ll &x:v)cin>>x;
    sort(v.begin(),v.end());
    for(ll i=1; i<v.size(); i++)v[i]+=v[i-1];

   ll sum=v[v.size()-1];
   ll kt=v.size()-k;
   while(1)
   {
  // cout<<" kt "<<kt<<endl;
    if(kt<=0)break;
    sum+=v[kt];
    kt=kt-k+1;

   }

    cout<<sum<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}

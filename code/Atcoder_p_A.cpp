#include <bits/stdc++.h>  
using namespace std;
typedef long long ll;
ll MOD = 998244353;
ll M = 10000007;
#define ff                       first
#define ss                        second
#define pb                        push_back
#define VI                        vector<long long>
#define pr                        pair<long long,long long>
#define all(x)                    (x).begin(), (x).end()
#define endl                      "\n"
#define dbg(x)                    cout<<#x<<" = "<<x<<endl
#define INF 2e18
#define fio()                     ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x)                    (x).begin(), (x).end()
#define sz(x)                     ((ll)(x).size())
 

void solve()
{
    ll n,a,b;
    cin>>n>>a>>b;

    ll x=1*a;
    ll y=1+b;
if(x==n || y==n)
{
    cout<<"YES"<<endl;
    return;
}

    if(n%x==0|| n%y==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{

#ifndef  ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
#endif

    fio();
    ll t;
    cin >> t;
    for(int it=1;it<=t;it++) {
    //cout << "Case" << it << ": ";
        solve();
    }
    return 0;
}#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        vector<ll>v= {0,2,3,2,3,2,4,2,3,2,3,2,5};
        vector<ll>vv(13,0);

        for(int i=1; i<=12; i++)
        {
            v[i]+=v[i-1];
        }


        ll n;
        cin>>n;
        ll tn=0;
        tn=n/12;
        ll tnn=0;
        tnn=n%12;
        ll ans=0;
        if(tn)ans=tn*v[12];
        if(tnn)ans+=v[tnn];
        cout<<ans<<endl;


    }



}



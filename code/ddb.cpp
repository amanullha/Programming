#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD = 998244353;
ll M = 10000007;
#define ff first
#define ss second
#define pb push_back
#define VI vector<long long>
#define pr pair<int, int>
#define all(x) (x).begin(), (x).end()
#define endl "\n"
#define dbg(x) cout << #x << " = " << x << endl
#define INF 2e18
#define fio()                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

ll power(ll x, ll y)
{
    ll res = 1;

    if (x == 0)
        return 0;

    while (y > 0)
    {

        if (y & 1)
            res = (res * x);

        y = y >> 1;
        x = (x * x);
    }
    return res;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);

    unordered_map<int,bool>un;

    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        un[v[i]]=true;
       
    }
      for (ll i = 0; i < n-1; i++)
    {
        int x=v[i]^v[i+1];
        if(un.find(x)==un.end())
        {
            cout<<"NO"<<endl;
            return ;
        }
       
    }
cout<<"YES"<<endl;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    fio();
    ll t;
    cin >> t;
    for (int it = 1; it <= t; it++)
    {
        //cout << "Case" << it << ": ";
        solve();
    }
    return 0;
}
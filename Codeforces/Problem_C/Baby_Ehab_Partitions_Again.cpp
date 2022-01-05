#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD = 998244353;
ll M = 10000007;
#define ff first
#define ss second
#define pb push_back
#define VI vector<long long>
#define pr pair<long long, long long>
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

vector<vector<ll>> t;

bool dfs(vector<ll> &nums, ll rem, ll pos)
{

    if (rem == 0)
        return 1;
    if (pos >= nums.size() || rem < 0)
        return false;
    ll &x = t[pos][rem];
    if (x != -1)
        return x;

  
   bool nia = dfs(nums, rem - nums[pos], pos + 1);
   bool nah_nia = dfs(nums, rem, pos + 1);

    return x = nia || nah_nia;
}

void solve()
{

    ll n;
    cin >> n;
    vector<ll> v(n);
    ll sum = 0;
    for (ll &x : v)
        cin >> x, sum += x;

    if (sum & 1)
    {
        cout << "0" << endl;
        return;
    }

    
    t.clear();
    t.resize(n + 1, vector<ll>(sum/2 + 1, -1));

    if (!dfs(v, sum/2, 0))
    {
        cout << "0" << endl;
        return;
    }

    for (ll i = 0; i < n; i++)
    {
        if (v[i] & 1)
        {
            cout << "1" << endl;
            cout << i + 1 << endl;
            return;
        }
    }

    while (1)
    {
        for (ll i = 0; i < n; i++)
            v[i] /= 2;

        for (ll i = 0; i < n; i++)
        {
            if (v[i] & 1)
            {
                cout << "1" << endl;
                cout << i + 1 << endl;
                return;
            }
        }
    }
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    fio();
    ll t;
    //cin >> t;
    t=1;
    for (ll it = 1; it <= t; it++)
    {
        //cout << "Case" << it << ": ";
        solve();
    }
    return 0;
}
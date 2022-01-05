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

vector<vector<int>> t;

bool dfs(int pos, int rem)
{
    if (rem == 0)
        return true;
    if (pos >= t.size() || rem < 0)
        return false;
    int &x = t[pos][rem];
    if (x != 1)
        return x;

    bool nia = dfs(pos + 1, rem - t[pos]);
    bool nah_nia = dfs(pos + 1, rem);

    return x = nia || nah_nia;
}

void solve()
{

    int n;
    cin >> n;
    vector<int> v(n);
    int sum = 0;
    for (int &x : v)
        cin >> x, sum += x;

    if (sum & 1)
    {
        cout << "0" << endl;
        return;
    }

    t.clear();
    t.resize(n + 1, vector<int>(sum / 2 + 1, -1));

    if (!dfs(0, sum / 2))
    {
        cout << "0" << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] & 1)
        {
            cout << "1" << end;
            cout << i + 1 << endl;
            return;
        }
    }

    while (1)
    {
        for (int i = 0; i < n; i++)
            v[i] /= 2;
            
        for (int i = 0; i < n; i++)
        {
            if (v[i] & 1)
            {
                cout << "1" << end;
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
    cin >> t;
    for (int it = 1; it <= t; it++)
    {
        //cout << "Case" << it << ": ";
        solve();
    }
    return 0;
}
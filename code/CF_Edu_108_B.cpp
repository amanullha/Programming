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


void solve()
{
    int r, c, k;
    cin >> r >> c >> k;
    int p[r + 2][c + 2];
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            p[i][j] = 0;
        }
    }

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (i == 1 && j == 1)
            {
                p[i][j] = 0;
                continue;
            }

            if (i == 1)
            {
                p[i][j] = p[i][j - 1] + i;
            }
            else if (j == 1)
            {
                p[i][j] = p[i - 1][j] + j;
            }
            else
                p[i][j] = min(p[i][j - 1] + i, p[i - 1][j] + j);
        }
    }

    if (p[r][c] == k)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
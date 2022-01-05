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
    int n;
    cin >> n;

    vector<int> v[n];

    for (int i = 0; i < n; i++)
    {

        int xx = 5;
        while (xx--)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    if (n == 1)
    {
        cout << "1" << endl;
        return;
    }

    int ans = 0;

    for (int i = 1; i < n; i++)
    {
        int i_superior = 0;
        for (int k = 0; k < 5; k++)
        {
            if (v[i][k] < v[ans][k])
                i_superior++;
        }
        if (i_superior >= 3)
        {
            ans = i;
        }
    }
    //cout << ans << endl;

    for (int i = 0; i < n; i++)
    {
        if (ans == i)
            continue;

        int i_superior = 0;
        for (int k = 0; k < 5; k++)
        {
            if (v[i][k] < v[ans][k])
                i_superior++;
        }
        if (i_superior >= 3)
        {
            cout << "-1" << endl;
            return;
        }
    }

    cout << ans + 1 << endl;
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

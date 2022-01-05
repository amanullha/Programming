#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define VI vector<long long>
#define endl "\n"
#define fio()                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve()
{

    ll n, m;
    cin >> n >> m;
    vector<ll, ll> v[n][m];
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> p[i][j];
        }
    }

    if (n == 2)
    {
        VI v, vv;
        for (ll i = 0; i < m; i++)
            v.pb(p[0][i]);
        for (ll i = 0; i < m; i++)
            vv.pb(p[1][i]);
        for (ll i = 0; i < m; i++)
            cout << v[i] << " ";
        cout << endl;
        for (ll i = 0; i < m; i++)
            cout << vv[i] << " ";
    }

    vector<ll, ll> ans[n][m];
    VI t;
    for (ll i = 0; i < m; i++)
        t.pb(p[0][i]);
    sort(all(t));
    int d = 0;
    for (ll i = 0; i < m; i++)
        ans[0][i] = t[d++];

    





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
    while (t--)
        solve();

    return 0;
}

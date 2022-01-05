#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll infiniry = 1000000009;
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

ll x, xx, y, yy;
ll n1, n2;

ll mx[] = {0, 0, +1};
ll my[] = {-1, +1, 0};
ll ar[1002][1002];

bool valid(ll i, ll j)
{
    if (i >= xx && i <= x && j >= yy && j <= y && n1 != i && n2 != j)
        return true;
    else
        return false;
}

ll cal(ll n1, ll n2, ll s1, ll s2, ll e1, ll e2, ll ar[][1002])
{
    if (s1 == e1 && s2 == e2)
        return ar[e1][e2];
}

void solve()
{

    ll s1, s2;
    cin >> s1 >> s2;
    ll e1, e2;
    cin >> e1 >> e2;

    if (e1 < s1 || s2 > e2)
    {
        swap(e1, s1);
        swap(e2, s2);
    }

    cin >> n1 >> n2;

    x = max(e1, s1), y = max(e2, s2);
    xx = min(e1, s1), yy = min(e2, s2);

    for (ll i = xx; i <= x; i++)
    {
        for (ll j = yy; j <= y; j++)
        {
            ar[i][j] = INFINITY;
        }
    }

    ar[s1][s2] = 0;
    for (ll i = s1; i <= e1; i++)
    {
        for (ll j = s2; j <= e2; j++)
        {
            for (int k = 0; i < 3; i++)
            {
                int p, q;
                p = i + mx[k];
                q = j + mx[k];

                if (valid(p, q))
                {
                    ar[p][q] = min(ar[p][q], ar[i][j] + 1);
                }
            }
        }
    }

    cout << ar[e1][e2] << endl;
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
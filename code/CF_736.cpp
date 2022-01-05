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
    ll n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    ll ca = 0;
    ll cb = 0;
    for (char x : a)
    {
        if (x == '1')
            ca++;
    }
    for (char x : b)
    {
        if (x == '1')
            cb++;
    }

    if (ca == 0 && cb == 0)
    {
        cout << "0" << endl;
        return;
    }
    if (ca == 0 && cb != 0)
    {
        cout << cb << endl;
        return;
    }
    if (cb == 0)
    {
        cout << "0" << endl;
        return;
    }

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i] == '0')
            continue;
        if (a[i] == '0')
        {
            ans += 1;
            continue;
        }
        if (i - 1 >= 0 and a[i] == '1')
        {
            ans += 1;
            a[i] = '2';
            continue;
        }
        if (i + 1 < n and a[i] == '1')
        {
            ans += 1;
            a[i] = '2';
            continue;
        }
        cout << ans << endl;
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
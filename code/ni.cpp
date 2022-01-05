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
    ll a, b;
    cin >> a >> b;

    if (a == b || (a == 0 && b == 0))
    {
        cout << "0 0" << endl;
        return;
    }
    if (a == 0 || b == 0)
    {
        cout << max(a, b) << " 0" << endl;
        return;
    }
    if ((max(a, b) - min(a, b)) == 1)
    {
        cout << "1 0" << endl;
        return;
    }

    if ((a & 1) && (b & 1))
    {
        cout << (max(a, b) - min(a, b)) << " " << min(a, b) << endl;
        return;
    }
    if (!(a & 1) && !(b & 1))
    {
        cout << "0 0" << endl;
        return;
    }

    if (a % b == 0 || b % a == 0)
    {
        cout << "0 0" << endl;
        return;
    }

    ll dif = max(a, b) - min(a, b) + 500;

    ll x = a, y = b;
    ll c = 0;
    ll mx = INT_MIN;
    ll p = 0;
    while (dif-- && a >= 0 && x >= 0)
    {

        ll aa = __gcd(a++, b++);
        ll bb = __gcd(x--, y--);

        if (mx < aa)
        {
            mx = aa;
            p = c;
        }
        if (mx < bb)
        {
            mx = bb;
            p = c;
        }
        c++;
    }
    cout << mx << " " << p << endl;

    /*
    if ((max(a, b) - min(a, b)) >= (min(a, b)))
    {
        cout << (max(a, b) - min(a, b)) << " " << min(a, b) << endl;
    }*/
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
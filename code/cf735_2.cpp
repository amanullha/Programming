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
    if (n & 1)
        n++;
    if (n <= 6)
    {
        cout << 15 << endl;
        return;
    }
    if (n <= 8)
    {
        cout << 20 << endl;
        return;
    }
    if (n <= 10)
    {
        cout << 25 << endl;
        return;
    }
    if (n % 6 == 0)
    {
        cout << (n / 6) * 15 << endl;
        return;
    }
    if (n % 8 == 0)
    {
        cout << (n / 8) * 20 << endl;
        return;
    }
    if (n % 10 == 0)
    {
        cout << (n / 10) * 25 << endl;
        return;
    }

    ll d = n * 2.5;
    if (n & 1)
        d++;
    //cout << d << " ";
    ll ten = 0, eight = 0, six = 0;
    if (d >= 25)
    {
        ten = d / 25;
        d = d % 25;
    }
    if (d >= 20)
    {
        eight = d / 20;
        d = d % 20;
    }

    if (d && 25 + d <= 30)
    {
        ten--;
        six = 2;
    }
    else if (d && 25 + d > 30)
    {
        six = 1;
    }

    // cout << "n : " << n << " ten : " << ten << " eight : " << eight << " six " << six << endl;
    cout
        << ten * 25 + eight * 20 + six * 15 << endl;
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
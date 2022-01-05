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

bool isp[210];

void prime()
{
    isp[1] = true;
    for (int i = 2; i < 200; i++)
    {
        bool f = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                f = 0;
                break;
            }
        }
        if (f)
            isp[i] = false;
        else
            isp[i] = true;
    }
}

void solve()
{

    ll n;
    string s;
    cin >> n >> s;

    prime();

    for (int i = 0; i < n; i++)
    {
        int x = s[i] - '0';
        if (isp[x])
        {
            cout << 1 << endl;
            cout << s[i] << endl;
            return;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            char x = s[i];
            char y = s[j];
            string ss = "";
            ss += x;
            ss += y;
            int p = stoi(ss);
            if (isp[p])
            {
                cout << 2 << endl;
                cout << p << endl;
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
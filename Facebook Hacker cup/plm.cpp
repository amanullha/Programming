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
    string s1, s2;

    cin >> n >> s1 >> s2;

    int c = 0;
    // cout << s1 << endl
    //      << s2 << endl;

    for (int i = 0; i < n;)
    {
        if ((s1[i] == '0' && s2[i] == '1') || (s1[i] == '1' && s2[i] == '0'))
        {
            c += 2;
            i++;
            continue;
        }
        if (s1[i] == '0' && s2[i] == '0')
        {
            if (i + 1 < n && (s1[i + 1] == '1' && s2[+1] == '1'))
            {
                c += 2;
                i += 2;
                continue;
            }
            else
            {
                c++;
                i++;
                continue;
            }
        }

        if (s1[i] == '1' && s2[i] == '1')
        {
            if (i + 1 < n && (s1[i + 1] == '0' && s2[+1] == '0'))
            {
                c += 2;
                i += 2;
                continue;
            }
            else
            {
                i++;
                continue;
            }
        }
    }
    cout << c << endl;
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
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
    string s, t;
    cin >> s >> t;

    //   bool left = 1, right = 1;
    int i = 0, j = 0;
    for (i = 0; i < (int)t.size(); i++)
    {
        if (i != 0)
            continue;
        char x = t[i];

        for (j = 0; j < (int)s.size(); j++)
        {
            char y = s[j];
            int js = j, it = i;
            if (x == y)
            {

                int xx = 0;
                while (s[js] == t[it])
                {
                    xx++;
                    if (xx == t.size())
                    {
                        cout << "YES" << endl;
                        return;
                    }
                    js++, it++;
                }

                js -= 2;

                while (s[js] == t[it])
                {
                    xx++;
                    if (xx == t.size())
                    {
                        cout << "YES" << endl;
                        return;
                    }
                    js--, it++;
                }

                if (xx == t.size())
                {
                    cout << "YES" << endl;
                    return;
                }
            }
        }
    }
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

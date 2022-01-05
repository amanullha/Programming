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
    string s;
    cin >> s;

     int c = 0;
    for (char x : s)
        if (x = '?')
            c++;
    if (n == 1 && s[0] == '?')
    {
        cout << "B" << endl;
        return;
    }
    if (c == 0)
    {
        cout << s << endl;
        return;
    }

    if (c == n)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i & 1)
                cout << "B";
            else
                cout << "R";
        }
        cout << endl;
        return;
    }


    int st = 0;
    while (st < n)
    {
        if (s[st] == '?')
        {
            if (st - 1 >= 0)
            {
                if (s[st - 1] == 'B')
                    s[st] = 'R';
                else if (s[st - 1] == 'R')
                    s[st] = 'B';
            }
        }
        st++;
    }

    st = n - 1;
    while (st >= 0)
    {
        if (s[st] == '?')
        {
            if (st + 1 < n)
            {
                if (s[st + 1] == 'B')
                    s[st] = 'R';
                else if (s[st + 1] == 'R')
                    s[st] = 'B';
            }
        }
        st--;
    }

    cout << s << endl;
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

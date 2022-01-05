
#include <bits/stdc++.h>
#define M 1000000007
using namespace std;
typedef long long ll;
ll MOD = 998244353;

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

int tt = 1;

int find(string s, int n)
{
    long long c = 0;

    int i = 0;

    char start;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'X')
        {
            start = 'X';
            break;
        }
        if (s[i] == 'O')
        {
            start = 'O';
            break;
        }
    }

    while (i < n)
    {
        if (start == 'X' && s[i] == 'O')
        {
            start = 'O';
            c++;
            if (c > M)
                c %= M;
        }
        else if (start == 'O' && s[i] == 'X')
        {
            start = 'X';
            c++;
            if (c > M)
                c %= M;
        }
        i++;
    }
    // cout<<"Case #"<<tt++<<": ";
    return c % M;
}

void solve()
{

    string str;
    int n;
    cin >> n >> str;
    long long total = 0;
    for (int len = 1; len <= n; len++)
    {
        for (int i = 0; i <= n - len; i++)
        {
            int j = i + len - 1;
            string tm = "";
            for (int k = i; k <= j; k++)
            {
                tm += str[k];
            }
            total += find(tm, tm.size());
            if (total > M)
                total %= M;
        }
    }
    cout << "Case #" << tt++ << ": ";
    cout << total << endl;
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
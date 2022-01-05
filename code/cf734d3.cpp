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

    string s;
    cin >> s;

    unordered_map<char, int> un;

    for (char x : s)
    {
        un[x]++;
    }

    int c = 0;

    for (auto x : un)
    {
        int v = x.second;
        if (v == 1)
            c++;
        else
            c += 2;
    }

    cout << c / 2 << endl;
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

/*
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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    vector<int> idx(n + 5);
    for (int i = 0; i <= n; i++)
        idx[i] = 0;
    for (int &x : v)
        cin >> x;

    int c = n / k;
    vector<unordered_map<int, int>> vv(k);

    for (int j = 0; j < n; j++)
    {
        int x = v[j];
        for (int i = 0; i < k; i++)
        {
            if (vv[i].size() < c && vv[i].find(x) != vv[i].end())
            {
                vv[i][x] = j;
            }
        }
    }

    for (int i = 1; i <= k; i++)
    {
        for (int j = 0; j < vv[i].size(); j++)
        {
            idx[vv[i][j].second] = i;
        }
    }


    for (int i = 0; i < n; i++)
        cout << idx[i] << " ";
    cout << endl;
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
}*/
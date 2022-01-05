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
    vector<int> v(n);
    for (int &x : v)
        cin >> x;



    // First case
    if (v[n - 1] == 0)
    {
        for (int i = 1; i <= n + 1; i++)
            cout << i << " ";
        cout << endl;
        return;
    }



    // Second case
    if (v[0] != 0)
    {

        cout << n + 1 << " ";
        for (int i = 1; i <= n; i++)
            cout << i << " ";
        cout << endl;
        return;
    }




    int x = -1;

    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] == 0 && v[i + 1] == 1)
        {
            x = i + 1;
            break;
        }
    }


    if (x == -1)
    {
        cout << "-1" << endl;
        return;
    }


    for (int i = 1; i <= x; i++)
        cout << i << " ";

    cout << n + 1 << " ";
    
    for (int i = x + 1; i <= n; i++)
        cout << i << " ";
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
}
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

void Sort(vector<int> &arr)
{
    int n = arr.size();
    vector<int> v = arr;
    sort(all(v));
    int c = 0;
    //   for(int x: v)cout<<x<<" ";
    // cout<<endl;
    // for(int x: arr)cout<<x<<" ";
    //  cout<<endl;
    int ans = 0;
    for (ll i = 1; arr != v; i++)
    {

        for (ll i = 1; i < n; i++)
        {
            if (arr[i + 1] < arr[i])
                break;
        }
        ans++;
        if (i % 2)
        {
            for (ll i = 1; i <= n - 2; i += 2)
                if (arr[i] > arr[i + 1])
                    swap(arr[i], arr[i + 1]);
        }
        else
        {
            for (ll i = 2; i <= n - 1; i += 2)
                if (arr[i] > arr[i + 1])
                    swap(arr[i], arr[i + 1]);
        }
    }
    cout << ans << endl;
}

void solve()
{

    int n;
    cin >> n;
    vector<int> v(n + 1);
    v[0] = -1;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    Sort(v);
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
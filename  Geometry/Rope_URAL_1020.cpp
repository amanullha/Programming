#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD = 998244353;
ll M = 10000007;
#define ff first
#define ss second
#define pb push_back
#define VI vector<long long>
#define pr pair<double, double>
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
//#define PI 3.141592653589793238
double const  PI=acos(-1.0);

double distance(double x, double y)
{
    return sqrt(x * x + y * y);
}

void solve()
{

    int n;
    double r;
    cin >> n >> r;

    vector<pr> v(n + 1);
    double x, y;
    for (int i = 0; i < n; i++)
    {

        cin >> x >> y;
        v[i] = {x, y};
        if(i==0)
        v[n] = {x, y};
    }
   

    double rope = 2.0 * r * PI;
    for (int i = 0; i <n; i++)
    {
        rope += distance(v[i].ff - v[i + 1].ff, v[i].ss - v[i + 1].ss);
    }

    cout << fixed << setprecision(2);
    cout << rope << endl;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    solve();
    return 0;
}
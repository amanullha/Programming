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
#define fio()                             \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
        cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

int main()
{

#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
#endif

        int a, b, c, d;
        cin>>a>>b>>c>>d;

                double up = a * a + b * b - c * c - d * d;
                double down = 2 * (a * b - c * d);

                if (down == 0.0)
                {
                        //Use cosinuse rule, and if you get division by zero... so sutuation is impossible
                        cout << "Impossible." << endl;
                        return 0;
                }

                double CosC = up / down;

                double CD = sqrt(a * a + b * b - 2 * a * b * CosC) * 1000;
                printf("Distance is %.0lf km.\n", CD);
                //cout<<"Distance is "<<round(CD)<<" km."<<endl;
        
        return 0;
}
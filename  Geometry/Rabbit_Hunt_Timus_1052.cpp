#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD = 998244353;
ll M = 10000007;
#define ff first
#define ss second
#define pb push_back
#define VI vector<long long>
#define pr pair<int, int>
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
    vector<pr> v(n);
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v[i] = {x, y};
    }
int maxslope=INT_MIN;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            double y = v[j].ss - v[i].ss;
            double x = v[j].ff - v[i].ff;

            double slop1 = y / x;

            int start = 2;
            for (int k = j + 1; k < n; k++)
            {
                double yy = v[k].ss - v[i].ss;
                double xx = v[k].ff - v[i].ff;

                double slop2 = yy / xx;

                if(slop1==slop2)start++;
            }
            maxslope=max(maxslope,start);
        }
    }
    cout<<maxslope<<endl;

    /*
    int n;
    cin>>n;
vector<pr>v(n);
for(int i=0;i<n;i++)
{
    int x,y;
    cin>>x>>y;
    v[i]={x,y};
}
//slope will be (y2 – y1) / (x2 – x1)
unordered_map<double,int>un;
int m=INT_MIN;
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        pr x={v[i+1].ss-v[i].ss,v[i+1].ff-v[i].ff};
        int g=__gcd(x.ff,x.ss);
        pr y={x.ff/g,x.ss/g};
        double p=(double)(y.ff/y.ss);
     //   cout<<" x " <<y.ff<<" y "<<y.ss<< "  p "<<p<<endl;
        un[p]++;
        m=max(m,un[p]);

    }
}
for(auto x:un)
{
    cout<<x.ff<<"   "<<x.ss<<endl;
}

cout<<m<<endl;
*/
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
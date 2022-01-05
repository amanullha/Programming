#include <bits/stdc++.h>  
using namespace std;
typedef long long ll;
ll MOD = 998244353;
ll M = 10000007;
#define ff                       first
#define ss                        second
#define pb                        push_back
#define VI                        vector<long long>
#define pr                        pair<long long,long long>
#define all(x)                    (x).begin(), (x).end()
#define endl                      "\n"
#define dbg(x)                    cout<<#x<<" = "<<x<<endl
#define INF 2e18
#define fio()                     ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x)                    (x).begin(), (x).end()
#define sz(x)                     ((ll)(x).size())
 

void solve()
{

int n;
cin>>n;
vector<int>v(n);
for(int &x:v)cin>>x;

bool f=0;

for(int i=0;i<n-1;i++)
{
    int age=0,pore=0;
    for(int j=0;j<=i;j++)age^=v[j];

    bool ff=0;
    for(int j=i+1;j<n;j++)
    {
        pore^=v[j];
        if(age==pore)
        {
            pore=0;
            ff=1;
        }
    }
    if(pore==0 && ff)
    {
        cout<<"YES"<<endl;
        return ;
    }
}

cout<<"NO"<<endl;


}

int main()
{

#ifndef  ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
#endif

    fio();
    ll t;
    cin >> t;
    for(int it=1;it<=t;it++) {
    //cout << "Case" << it << ": ";
        solve();
    }
    return 0;
}
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
    cout<<"\n\np\n\n";
    int c,r;
    cin>>r>>c;
    vector<string>a;
    for(int i=0;i<r;i++)
    {
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        a.pb(s);
    }

    cin>>r>>c;
    vector<string>b;
    for(int i=0;i<r;i++)
    {
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        b.pb(s);
    }

    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<a[0].size();j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    cout<<endl<<endl;
     for(int i=0;i<b.size();i++)
    {
        for(int j=0;j<b[0].size();j++)
        {
            cout<<b[i][j];
        }
        cout<<endl;
    }
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
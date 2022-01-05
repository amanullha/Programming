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
    int n, m, k;
    cin >> n >>m>> k;
    //cout<<" n : "<<n<<"  m :"<<m<<"  k : "<<k<<endl;
    vector<int> g(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> g[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
   /* cout<<endl;
    for(int x:b)cout<<x<<" ";
    cout<<endl;

    sort(all(g));
    cout<<endl;
    for(int x:g)cout<<x<<" ";
    cout<<endl;
    cout<<endl;
    for(int x:b)cout<<x<<" ";
    cout<<endl;*/
    int q;
    cin >> q;
    while (q--)
    {
        int l,r;
        cin>>l>>r;
        l--,r--;
        vector<int>t=b;
        //cout<<endl<<"before\n";
      //  for(int x:t)cout<<x<<" ";
      //  cout<<endl;
        sort(t.begin()+l,t.begin()+r+1);

       // cout<<endl;
      ////  for(int x:t)cout<<x<<" ";
      //  cout<<endl;
        
     //   cout<<" l "<<l<<" r "<<r<<endl;
        int dis=r-l+1;
        int lval=t[l];

        int idx=0;
      //  cout<<"dis "<<dis<<"  lval "<<lval<<" src "<<k-lval<<endl;
        idx=lower_bound(all(g),k-lval)-g.begin();
       //  cout<<"idx "<<idx<<endl;
        if((n-idx)>=dis)
        cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }
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
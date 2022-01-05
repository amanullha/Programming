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

ll a,b;
cin>>a>>b;
//cout<<endl<<a<<" : "<<b<<endl;

if(b==1)
{
   // cout<<a<<" "<<a+a<<" "<<a+a+a<<endl;
    cout<<"NO"<<endl;
    return ;
}
cout<<"YES"<<endl;
if(a==1 && b==2)
{
    b=b*b;
}
if(a==1)
{
    cout<<a<<" "<<b-1<<" "<<b<<endl;
    return ;
}
if(b==2)
{
    cout<<a<<" "<<(a*a*b)-a<<" "<<a*a*b<<endl;
    return ;
}


cout<<a<<" "<<(a*b)-a<<" "<<(a*b)<<endl;

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
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
    int a,b;
    cin>>a>>b;
    int r1=min(a,b);
    int c1=max(a,b);

    char m1[r1][c1];
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cin>>m1[i][j];
        }
    }
    cin>>a>>b;
    int r2=min(a,b);
    int c2=max(a,b);

    char m2[r2][c2];
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cin>>m2[i][j];
        }
    }

    cout<<"\nMatrix A:"<<endl;
     for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cout<<m1[i][j]<<" ";
        }cout<<endl;
    }
    cout<<"\nMatrix B:"<<endl;
     for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<m2[i][j]<<" ";
        }cout<<endl;
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
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

string s;
cin>>s;

unordered_map<char,int>un;
for(char x:s)un[x]++;

int g=un[s[0]];

for(auto x:un)g=__gcd(g,x.ss);

if(g<=1)
{
    cout<<"IMPOSSIBLE"<<endl;
    return ;
}

for(int i=0;i<g;i++)
{
    for(auto x:un)
    {
        for(int d=0;d<x.ss/g;d++)cout<<x.ff;
    }
}




}

int main()
{

#ifndef  ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
#endif

  solve();

    return 0;
}
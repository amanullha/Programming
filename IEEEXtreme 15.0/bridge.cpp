#include <bits/stdc++.h>  
using namespace std;
typedef long long ll;
ll MOD = 998244353;
ll M = 100005;
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
 
vector<int>g1[100005],g2[100005];
int n1,n2;
int visited[100005], dist[100005];

int dfs1(int s)
{
	memset(visited, 0, sizeof(visited));
	memset(dist, 0, sizeof(dist));

	queue<int>q;
	q.push(s);
	dist[s] = 0;
	visited[s] = 1;

	while (!q.empty())
	{
		int u = q.front();
		q.pop();


		for (int i = 0; i < (int) g1[u].size(); i++)
		{
			int v = g1[u][i];
          

			if (!visited[v])
			{
				visited[v] = 1;
               
				dist[v] = dist[u] + 1;
                
				q.push(v);

				
			}
		}

	}
    int mx=INT_MIN;

   // cout<<" from u "<<s<<endl;
   // for(int i=1;i<n1;i++)
   // {
   //     cout<<i<<" -> "<<dist[i]<<endl;
   // }
    for(int i=1;i<=n1;i++)
    {
       mx=max(mx,dist[i]);
    }

return mx;
}
int dfs2(int s)
{
	memset(visited, 0, sizeof(visited));
	memset(dist, 0, sizeof(dist));

	queue<int>q;
	q.push(s);
	dist[s] = 0;
	visited[s] = 1;

	while (!q.empty())
	{
		int u = q.front();
		q.pop();


		for (int i = 0; i < (int) g2[u].size(); i++)
		{
			int v = g2[u][i];
          

			if (!visited[v])
			{
				visited[v] = 1;
               
				dist[v] = dist[u] + 1;
                
				q.push(v);

				
			}
		}

	}
    //  cout<<" from u "<<s<<endl;
   // for(int i=1;i<n2;i++)
   // {
    //    cout<<i<<" -> "<<dist[i]<<endl;
   // }

    int mx=INT_MIN;
    for(int i=1;i<=n2;i++)
    {
       mx=max(mx,dist[i]);
    }

return mx;
}


void solve()
{


cin>>n1;

for(int i=0;i<n1+2;i++)g1[i].clear();

for(int i=0;i<n1-1;i++)
{
    int u,v;
    cin>>u>>v;
    g1[u].push_back(v);
    g1[v].push_back(u);
}
int mnode1=0,mn1=INT_MAX;
for(int i=1;i<=n1;i++)
{
    int x=dfs1(i);
    if(mn1>x)
    {
        mn1=x;
        mnode1=i;
    }
}
//cout<<"node "<<mnode1<< "  dis "<<mn1<<endl;




cin>>n2;
for(int i=0;i<n2+2;i++)g2[i].clear();

for(int i=0;i<n2-1;i++)
{
    int u,v;
    cin>>u>>v;
    g2[u].push_back(v);
    g2[v].push_back(u);
}
int mnode2=0,mn2=INT_MAX;
for(int i=1;i<=n2;i++)
{
    int x=dfs2(i);
    if(mn2>x)
    {
        mn2=x;
        mnode2=i;
    }
}
//cout<<"node "<<mnode2<< "  dis "<<mn2<<endl;

cout<<mn1+mn2+1<<endl;
cout<<mnode1<<" "<<mnode2<<endl;

}

int main()
{

#ifndef  ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
#endif

   // fio();
    ll t;
    cin >> t;
    for(int it=1;it<=t;it++) {
   // cout << "Case" << it << ": ";
        solve();
    }
    return 0;
}
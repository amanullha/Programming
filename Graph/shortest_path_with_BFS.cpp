#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define M 1000
#define sz 10000007
#define tc(cn) pf("Case %d: ",cn)
using namespace std;


vector<ll>graph[M], cost[M];


ll dis[M], parents[M];


ll bfs(ll source, ll distination)
{
	memset(dis,-1,sizeof(dis));

	dis[source] = 0;
	parents[source] = -1; // Required for path print

	queue<ll>q;
	q.push(source);

	while (!q.empty())
	{
		ll u = q.front();
		q.pop();

		if(u==distination)return dis[distination];

		for (ll i = 0; i < (ll)graph[u].size(); i++)
		{
			ll v = graph[u][i];

			if (dis[v] == -1)
			{
				dis[v] = dis[u] + 1;
				parents[v]=u;
				q.push(v);

			}

		}

	}



}


void path(ll distination)
{
	vector<ll>paths;


	while(parents[distination]!=-1)
	{
		paths.push_back(distination);
		distination=parents[distination];
	}
	paths.push_back(distination);// last or source node push

	reverse(paths.begin(), paths.end());

	for(ll x:paths)cout<<x<<" ";
		cout<<endl;

}
int main()
{
	ll node, edge;
	cin >> node >> edge;

	while (edge--)
	{
		ll u, v;
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	ll source, distination;
	cin >> source >> distination;

	cout << "Distance to " << distination << " from " << source << " is : ";
	cout << bfs(source, distination) << endl;

	cout << "Shortest path to " << distination << " from " << source << " is : ";
	path(distination);

	return 0;
}

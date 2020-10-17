#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

#define M 100005
#define infinity 1e18+18
#define pi pair<ll,ll>
#define tc(cn) pf("Case %d: ",cn)
using namespace std;

vector<pi>graph[M];
ll dist[M], path[M];

ll node, edge, L, st, en;

void dijkstra(ll source)
{


	fill(dist, dist + M, infinity);
	fill(path, path + M, infinity);



	dist[source] = 0;
	path[source] = -1;

	priority_queue<pi>q;

	q.push({ -dist[source], source});

	while (!q.empty())
	{
		pi top = q.top();
		q.pop();

		ll u = top.second;

		for (ll i = 0; i < (ll) graph[u].size(); i++)
		{
			ll v = graph[u][i].first;
			if (graph[u][i].second == 0)
			{
				if (dist[v] > L - dist[u] + graph[u][i].second)
				{
					dist[v] = L - dist[u] + graph[u][i].second;
					q.push({ -dist[v], v});
					path[v] = u;
				}
			}
			else {
				if (dist[v] > dist[u] + graph[u][i].second)
				{
					dist[v] = dist[u] + graph[u][i].second;
					q.push({ -dist[v], v});
					path[v] = u;
				}
			}

		}

	}
	for (int i = 0; i < node; i++)
	{
		for (int j = 0; j < graph[i].size(); j++)
		{
			cout << i << "  " << graph[i][j].first << " " << graph[i][j].second << endl;
		}
	}
	cout << endl << endl;
	if (path[node] == infinity)cout << "-1" << endl;
	else
	{
		vector<ll> v;
		while (path[node] > 0)
		{
			v.push_back(node);
			node = path[node];
		}
		v.push_back(node);
		for (ll i = v.size() - 1; i >= 0; i--)cout << v[i] << " ";
		puts("");

	}


}

int main()
{
	cin >> node >> edge >> L >> st >> en;

	while (edge--)
	{
		ll u, v, w;
		cin >> u >> v >> w;
		graph[u].push_back({v, w});
		graph[v].push_back({u, w});
	}

	ll source = st;

	dijkstra(source);


	return 0;
}


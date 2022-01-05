#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

#define M 30005
#define sz 10000007
#define tc(cn) pf("Case %d:\n",cn)
using namespace std;
inline void Time() { cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s. \n";}

vector<int>g[M], cost[M];

int first_distance[M];
int second_distance[M];

int node;
int ts = 1;

void Frist_BFS(int s, int &farthest_node,int &maxval)
{

	first_distance[s] = 0;
	queue<int>q;
	q.push(s);

	while (!q.empty())
	{
		int node_u = q.front();
		q.pop();

		if (first_distance[node_u] > maxval)
		{
			maxval = first_distance[node_u];
			farthest_node = node_u;
		}
		for (int i = 0; i < (int)g[node_u].size(); i++)
		{
			int node_v = g[node_u][i];
			if (first_distance[node_v] == -100)
			{
				first_distance[node_v] = first_distance[node_u] + cost[node_u][i];
				q.push(node_v);
			}
		}
	}

}

void Second_BFS(int s)
{

	second_distance[s] = 0;
	queue<int>q;
	q.push(s);

	while (!q.empty())
	{
		int node_u = q.front();
		q.pop();


		for (int i = 0; i < (int)g[node_u].size(); i++)
		{
			int node_v = g[node_u][i];
			if (second_distance[node_v] == -100)
			{
				second_distance[node_v] = second_distance[node_u] + cost[node_u][i];
				q.push(node_v);
			}
		}
	}
}


void clr()
{
	for (int i = 0; i < node + 1; i++)
	{
		cost[i].clear();
		g[i].clear();
		first_distance[i] = -100;
		second_distance[i] = -100;
	}
}


void solve()
{


	sf("%d", &node);
	//cin>>node;

	clr();
	for (int i = 0; i < node - 1; i++)
	{
		int u, v, w;
		sf("%d%d%d", &u, &v, &w);
		//cin>>u>>v>>w;
		g[u].pb(v);
		g[v].pb(u);

		cost[u].pb(w);
		cost[v].pb(w);
	}

	int farthest_node = -100;
	int maxval = -100;

	Frist_BFS(0, farthest_node,maxval);
	int s = farthest_node;

	for (int i = 0; i < node + 1; i++)first_distance[i] = -100;

	maxval = -100;
	Frist_BFS(s, farthest_node,maxval);
	s = farthest_node;

	Second_BFS(s);
	pf("Case %d:\n", ts++);
	for (int i = 0; i < node; i++)
	{
		pf("%d\n", max(first_distance[i], second_distance[i]));
	}


}

int main()
{
	//fio;
	int t;
	cin >> t;
	while (t--)solve();

	return 0;
}


/*

1. Run a BFS from any node and determine the farthest node from it and Name this node as b.
2. Run another BFS from b and save all node’s distance from b (dis array). and determine the farthest node from b and name this node as a;
3. Run another BFS from a and save all nodes distance from a (dis1 array).
4. Now print for all node max(dis[node], dis1[node]).

*/
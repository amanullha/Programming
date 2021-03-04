#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define M 105

using namespace std;


vector<vector<int> > graph(M);

bool visited[M];

vector<int>topsort;

int node, edge;
stack<int>sk;


// topological sort
void dfs(int u)
{
	visited[u] = true;


	for (unsigned i = 0; i < graph[u].size(); i++)
	{
		if (!visited[graph[u][i]])
			dfs(graph[u][i]);
	}
	sk.push(u);

}


int main()
{
	while (cin >> node >> edge)
	{
		if(edge == 0 || node == 0)return 0;
		memset(visited, 0, sizeof(visited));

		graph.clear();

		while (!sk.empty()) sk.pop();

		while (edge--)
		{
			int u, v;
			cin >> u >> v;

			graph[u].pb(v);

		}


		for (int i = 1; i <= node; i++)
		{
			if (!visited[i])
				dfs(i);
		}


		int x = sk.size(), xx = 1;

		while (!sk.empty())
		{
			cout << sk.top();
			if (xx != x)cout << " ";
			xx++;
			sk.pop();
		}
		cout << endl;


	}
	return 0;
}

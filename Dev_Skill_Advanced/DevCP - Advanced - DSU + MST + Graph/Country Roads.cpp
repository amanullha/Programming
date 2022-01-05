#include<bits/stdc++.h>
#define infinity 1<<30
#define M 100
using namespace std;


/// aii part ta bojhi nai
struct node {
	int u;
	int cost;
	int mx_val;
	node(int _u, int _cost) {
		u = _u;
		cost = _cost;
	}
	bool operator < ( const node& p ) const {      return cost > p.cost;   } //Operator overloading

};

void Dijstkra(int N_node, vector<int> graph[], vector<int> cost[], int source)
{
	int distance[N_node + 1];

/// initially all distance are infinity
	for (int x = 1; x <= N_node; x++)
		distance[x] = infinity;

	priority_queue<node>q;
	q.push(node(source, 0));
	distance[source] = 0;

	while (!q.empty())
	{
		node top = q.top();
		q.pop();
		int u = top.u;

		for (int i = 0; i < (int)graph[u].size(); i++)
		{
			int v = graph[u][i];

			///Relaxation

			if (distance[u] + cost[u][i] < distance[v])
			{
				distance[v] = distance[u] + cost[u][i];
				q.push(node(v, distance[v]));
			}
		}
	}
	printf("Vertex Distance from Source\n");
	for (int i = 1; i <= N_node; ++i)
		printf("%d \t\t %d\n", i, distance[i]);

}
int main()
{
	vector<int> graph[M], cost[M];

	int node, edge;
	cin >> node >> edge;

	while (edge--)
	{
		int u, v, value;
		cin >> u >> v >> value;

		graph[u].push_back(v);
		graph[v].push_back(u);

		cost[u].push_back(value);
		cost[v].push_back(value);
	}


	int source;
	cin >> source;
	Dijstkra(node, graph, cost, source);
	return 0;
}


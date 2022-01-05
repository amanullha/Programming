#include <bits/stdc++.h>
#define M 1000
using namespace std;

int parent[M + 5];

void ini()
{
	for (int i = 0; i < M; i++)
		parent[i] = i;
}

int find_parent(int child)
{
	if (child == parent[child])
		return child;
	else
		return parent[child] = find_parent(parent[child]);
}

void connect(int u, int v)
{
	int pu = find_parent(u);
	int pv = find_parent(v);

	if (pu != pv)
		parent[pv] = pu;
}

void solve()
{
	int node, edge;
	cin >> node >> edge;
	ini();

	while (edge--)
	{
		int u, v;
		cin >> u >> v;
		connect(u, v);
	}
	for (int i = 0; i < node; i++)
	{
		cout << i << " ---> " << parent[i] << endl;
	}
}

int main()
{

	solve();

	return 0;
}

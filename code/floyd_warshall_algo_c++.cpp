#include<bits/stdc++.h>
#define infinity 10000
using namespace std;


	




int main()
{
	int node, edge;
	cin >> node >> edge;

	vector<vector<int> >Matrix[node][node];
	for (int i = 0; i <node; i++)
	{
		for (int j = 0; j <node; j++)
		{
			if (i == j)Matrix[i][j] = 0;
			else Matrix[i][j] = infinity;
		}
	}


	while (edge--)
	{
		int u, v, value;
		cin >> u >> v >> value;
		Matrix[u][v] = value;
	}

// called shortest path algorithm
	//floyd_Qarshall(node,Matrix,5);
	return 0;
}
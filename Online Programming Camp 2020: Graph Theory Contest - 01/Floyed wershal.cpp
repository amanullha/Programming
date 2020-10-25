#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define M 100000
#define infinity 1000000009
#define tc(cn) pf("Case %d: ",cn)
using namespace std;
inline void Time() { cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s. \n";}

int dist[M][M];

void Floyed_wershal(int n)
{

int path[n+1][n+1];
// Initial path for all nodes
for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		path[i][j]=i;// here path is i from i to j.
	}
}




	/*
	AdjMat[i][j] contains the weight of edge (i, j)
	or INF (1B) if there is no such edge
	*/
	for (int via = 0; via < n; via++)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				/*
					 if the graph has negative weight edges, it is better to write the Floyd-Warshall algorithm in the following way,
					 so that it does not perform transitions using paths that don't exist.

					 otherwise we can use just this line -> dist[i][j] = min(dist[i][j], dist[i][via] + dist[via][j])
					 no need to write this line -> if (dist[i][via] < infinity && dist[via][j] < infinity)
				*/
				if (dist[i][via] < infinity && dist[via][j] < infinity)
					{
						dist[i][j] = min(dist[i][j], dist[i][via] + dist[via][j]);
						path [i][j]=path[via][j];
					}
				/*
				also we can written as:-

				if (d[i][k] + d[k][j] < d[i][j] - EPS)
				d[i][j] = d[i][k] + d[k][j];

				here EPS ignore floating value of the weigth from i to j.
				*/
			}
		}
	}
//Check negative weight cycle
	for (int i = 0; i < n; i++)
	{
		if (dist[i][i] < 0)cout << "There are have an negative cycle in this graph !." << endl;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Distance between " << i << " to " << j << " is : " << dist[i][j] << endl;
		}
	}


}
int main()
{
	int node, edge;
	cin >> node >> edge;

	for (int i = 0; i <= node; i++)
	{
		for (int j = 0; j <= node; j++)
		{
			dist[i][j] = infinity;
		}
	}

	while (edge--)
	{
		int u, v, w;
		cin >> u >> v >> w;
		dist[u][v] = w;
	}



	pf("\n\n\n\n"); Time();
	return 0;
}

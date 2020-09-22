#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

#define M 30050
#define sz 10000007
#define tc(cn) pf("Case %d: ",cn)
using namespace std;

int node, edge;
vector<int>graph[M], cost[M];

int mxdis, mxnode;
int visited[M];

void dfs(int sourse, int dis)
{
	visited[sourse] = 1;

	if (dis > mxdis)
	{
		mxdis = dis;
		mxnode = sourse;
	}


	for (int v : graph[sourse])
	{
		if (visited[v] < visited[sourse] + cost[sourse][v])
		{
			visited[v] = visited[sourse] + cost[sourse][v];
		}
	}
}



int main()
{
	int t, ts = 1;
	cin >> t;
	while (t--)
	{


		cin >> node;
		edge = node - 1;
		int cholbe = edge;
		while (cholbe--)
		{
			int u, v, w;
			cin >> u >> v;
			graph[u].pb(v);
			graph[v].pb(u);

			cost[u].pb(w);
			cost[v].pb(w);
		}

		for (int i = 0; i < node + 10; i++)visited[i] = -1000000000;
			mxdis=-50;
		dfs(1, 0);
	cout<<endl<<mxdis<<"  NOde "<<mxnode<<endl;

		for (int i = 0; i < node + 10; i++)visited[i] = -1000000000;
			mxdis=-50;
		dfs(mxnode, 0);
		tc(ts++);
		cout << mxdis << endl;

	}
	return 0;
}

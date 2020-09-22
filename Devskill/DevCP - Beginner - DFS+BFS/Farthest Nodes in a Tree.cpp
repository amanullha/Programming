
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
#define infinity -1000000000
#define pr pair<ll,ll>
#define tc(cn) pf("Case %d: ",cn)
using namespace std;

vector<int>graph[M], cost[M];
int  mxdis, mxnode;
int visited[M], dist[M];


void bfs(int s)
{
	memset(visited, 0, sizeof(visited));
	memset(dist, 1000000000, sizeof(dist));

	queue<int>q;
	q.push(s);
	dist[s] = 0;
	visited[s] = 1;

	while (!q.empty())
	{
		int u = q.front();
		q.pop();



		for (int i = 0; i < (int) graph[u].size(); i++)
		{
			int v = graph[u][i];

			if (!visited[v])
			{
				visited[v] = 1;
				dist[v] = dist[u] + cost[u][i];
				q.push(v);

				/*if (dist[v] > mxdis)
				{

					mxdis = dist[v];
					mxnode = v;
					//cout << endl << mxdis << " n " << mxnode << endl;
				}*/
			}
		}

	}


}


int main()
{
	int t, ts = 1;
	cin >> t;
	while (t--)
	{
		int node;
		cin >> node;
		//	cout << "\nnode: " << node << endl;


		int n = node - 1;
		while (n--)
		{
			int u, v, w;
			cin >> u >> v >> w;
			//cout<<u<<" "<<v<<" "<<w<<endl;

			graph[u].pb(v);
			graph[v].pb(u);

			cost[u].pb(w);
			cost[v].pb(w);
		}
		/*bfs(0);
		//cout << mxdis << endl<<endl;
		mxdis = 0;
		bfs(mxnode);

		*/

		bfs(0);
		mxdis=-1,mxnode=0;
		for (int i = 0; i < node; i++)
		{
			if (mxdis < dist[i])
			{
				mxdis = dist[i];
				mxnode = i;
			}
		}
		bfs(mxnode);
		mxdis = -1;
		for (int i = 0; i < node; i++)
		{
			if (mxdis < dist[i])
			{
				mxdis = dist[i];
				mxnode = i;
			}
		}
		tc(ts++);
		cout << mxdis << endl;
		for (int i = 0; i < node; i++) {graph[i].clear(); cost[i].clear(); }
	}
}

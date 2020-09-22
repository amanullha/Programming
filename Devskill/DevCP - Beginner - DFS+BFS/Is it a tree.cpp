#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define M 10010

#define tc(cn) pf("Case %d: ",cn)
using namespace std;

int node, edge;
vector<int>graph[M];
int vist[M];

bool dfs(int node, int p)
{
	vist[node] = 1;

	for (int v : graph[node])
	{
		if (!vist[v])
		{
			if (dfs(v, node))
				return true;
		}

		else
		{
			if (p != v)return true;
		}
	}
	return false;
}

int main()
{
	cin >> node >> edge;
	int cholbe = edge;
	while (cholbe--)
	{
		int u, v;
		cin >> u >> v;

		graph[u].push_back(v);
		graph[v].push_back(u);

	}
	bool f = 1;
	for (int i = 1; i <= node; i++)
	{
		if (!vist[i])
		{
			if (dfs(i, -1))
			{
				
				cout << "NO" << endl;

				f = 0;
				break;
			}
		}
	}
	if(f)cout<<"YES"<<endl;
	
	return 0;
}

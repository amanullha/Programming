#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define M 220
#define sz 10000007
#define tc(cn) pf("Case %d: ",cn)
using namespace std;


vector <int>graph[M];
char color[M];


int rad, black, node, edge;

bool dfs(int s)
{
	queue<int>q;
	q.push(s);
	color[s] = 'r';
	rad=1;
	black=0;

	while (!q.empty())
	{
		int u = q.front();
		q.pop();

		for (int v : graph[u])
		{
			if (color[v] == 'w' && color[u] == 'r')
			{
				color[v] = 'b';
				q.push(v);
				black++;
			}
			else if (color[v] == 'w' && color[u] == 'b')
			{
				color[v] = 'r';
				q.push(v);
				rad++;
			}
			else if(color[u]==color[v])
			{
				return false;
			}



		}

	}
return true;
}


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin >> node >> edge;


		for(int i=0;i<M;i++)graph[i].clear();
		memset(color, 'w', sizeof(color));


		while (edge--)
		{
			int u, v;
			cin >> u >> v;
			graph[u].pb(v);
			graph[v].pb(u);
		}

		bool f=true;
		int t=0;
	
		for (int i = 0; i < node; i++)
		{
			
			if(color[i]=='w')
			{
				if (!dfs(i) )
				{
					
					cout<<"-1"<<endl;
					f=false;
					break;
				}
				t+=max(1,min(rad,black));

			}
			
				
		}
		if(f)cout<<t<<endl;


	}
	return 0;
}
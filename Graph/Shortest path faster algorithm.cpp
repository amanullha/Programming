#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

#define M 10000007
#define infinity 1e18
#define pr pair<ll,ll>
#define tc(cn) pf("Case %d: ",cn)
using namespace std;
inline void Time() { cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s. \n";}

vector<pr>graph[M];
ll dist[M];

ll node, edge;

ll count_Node_Push_In_Queue[M];
bool Check_Node_In_Queue_Or_Not[M];

bool shortest_path_faster_algo(ll sourse,ll destination)
{
	fill(dist,dist+M,infinity);
	memset(count_Node_Push_In_Queue,0,sizeof(count_Node_Push_In_Queue));
	memset(Check_Node_In_Queue_Or_Not,0,sizeof(Check_Node_In_Queue_Or_Not));

	priority_queue<pr>q;
	q.push({-0,sourse});
	dist[sourse]=0;

	while(!q.empty())
	{
		pr top=q.top();
		ll u=top.second;
		Check_Node_In_Queue_Or_Not[u]=false;

		for( auto x:graph[u])
		{
			ll v=x.second;
			ll c=x.first;

			if(dist[v]<dist[u]+c)
			{
				dist[v]=dist[u]+c;

				if(!Check_Node_In_Queue_Or_Not[v])
				{
					q.push({-dist[v],v});
					Check_Node_In_Queue_Or_Not[v]=true;
					count_Node_Push_In_Queue[v]++;

					if(count_Node_Push_In_Queue[v]>=node)
						return -1;// negative cycle detected 
				}
			}

		}
	}

return dist[destination];
}

int main()
{
	cin >> node >> edge;

	while (edge--)
	{
		ll u, v, w;
		cin >> u >> v >> w;

		graph[u].pb({v, w});
		graph[v].pb({u, w});
	}
	ll sourse = 1,destination=node;
	cout<<shortest_path_faster_algo(sourse,destination)<<endl;



	pf("\n\n\n\n"); Time();
	return 0;
}

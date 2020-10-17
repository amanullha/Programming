
/*
 1. Dijkstra with no comparator functon

 amra jani priority_queue te boro value gola age thake tai amra jodhi 
 distance ke negative kore priority_queue te push kori ta hole actual small 
 value and negative korar por big value ta priority_queue ar top a mane age thakbe

 */


#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

#define Mx 100005
#define infinity 1e18+18
#define pr pair<ll,ll>
#define tc(cn) pf("Case %d: ",cn)
using namespace std;


void dijsktra(vector<pr>graph[], ll node, ll source)
{
	ll dis[Mx], path[Mx];

	fill(dis, dis + Mx, infinity);
	fill(path, path + Mx, infinity);

	dis[source] = 0;
	path[source] = -1;

	priority_queue<pr>pq;

	pq.push({ -dis[source], source});

	while (!pq.empty())
	{
		pr top = pq.top();
		pq.pop();

		ll u = top.second;
		

		for (ll i = 0; i < (ll)graph[u].size(); i++)
		{
			ll v = graph[u][i].first;

			if (dis[v] > dis[u] + graph[u][i].second)
			{
				dis[v] = dis[u] + graph[u][i].second;
				pq.push({ -dis[v], v});
				path[v] = u;
			}
		}
	}

// print distance of all node from source

	for(ll i=1;i<=node;i++)
	{
		cout<<source<<" --> "<<i<<"   :   "<<dis[i]<<endl;
	}
	cout<<endl;

	// print shortest path from source to N 
	if (path[node] == infinity)cout << "-1" << endl;
	else
	{
		vector<ll> v;
		while (path[node] > 0)
		{
			v.push_back(node);
			node=path[node];
		}
		v.push_back(node);
		for(ll i=v.size()-1;i>=0;i--)cout<<v[i]<<" ";
			puts("");

	}


}

int main()
{
	vector<pr>graph[Mx];

	ll node, edge;
	cin >> node >> edge;
	while (edge--)
	{
		ll u, v, w;
		cin >> u >> v >> w;
		graph[u].push_back({v, w});
		graph[v].push_back({u, w});
	}

	ll source = 1;

	dijsktra(graph, node, source);


	return 0;
}



/*
2. Dijkstra with custom class data type and custom class comparator
*/

#include<bits/stdc++.h>
#include <vector>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define ll int
#define Mx 100000
#define infinity 10000007
using namespace std;


class custom_data_type
{
public:
	ll node;
	ll cost;
	custom_data_type(ll Cost, ll Node)
	{
		node = Node;
		cost = Cost;
	}


};

class camp
{
public:
	ll operator()(custom_data_type a, custom_data_type b)
	{
		if (a.cost > b.cost) return false;
		else return true;
	}

};


void Dijsktra(vector<ll>graph[], vector<ll>cost[], ll source, ll T_node)
{
	
	ll dis[Mx];
	fill(dis, dis + Mx, infinity);

	dis[source] = 0;
	priority_queue<custom_data_type, vector<custom_data_type>, camp>pq;

	pq.push(custom_data_type(0, source));

	while (!pq.empty())
	{
		
		custom_data_type top = pq.top();
		ll u = top.node;
		pq.pop();

		for (ll i = 0; i < (ll)graph[u].size(); i++)
		{
			ll v = graph[u][i];

			if (dis[u] + cost[u][i] < dis[v])
			{
				dis[v] = dis[u] + cost[u][i];
				pq.push(custom_data_type(dis[v], v));
			}
		}
	}

	for (ll i = 1; i <= T_node; i++)
	{
		cout << source << " --> " << i<<":  "<<dis[i] << endl;
	}

}

int main()
{

	ll T_node,edge;
	cin>>T_node>>edge;
	cout<<T_node<<"  "<<edge<<endl;

	vector<ll>graph[Mx],cost[Mx];
	while (edge--)
	{
		ll u, v, w;
		cin >> u >> v >> w;
		

		graph[u].push_back(v);
		graph[v].push_back(u);

		cost[u].push_back(w);
		cost[v].push_back(w);

	}

	ll source;
	cin >> source;

	Dijsktra(graph, cost, source, T_node);


	return 0;
}




/*

3. Dijkstra with custom data type and comparator function. akane comp functon ta custom 
data type ar moddhe create kora hoise

*/

#include<bits/stdc++.h>
#define infinity 1<<30
#define M 100
using namespace std;


/// aii part ta bojhi nai
struct node{
    int u;
    int cost;
    node(int _u, int _cost){
        u = _u;
        cost = _cost;
    }
    bool operator < ( const node& p ) const {      return cost > p.cost;   } //Operator overloading

};

void Dijstkra(int N_node,vector<int> graph[],vector<int> cost[],int source)
{
    int distance[N_node+1];

/// initially all distance are infinity
    for(int x=1; x<=N_node; x++)
        distance[x]=infinity;

    priority_queue<node>q;
    q.push(node(source,0));
    distance[source]=0;

    while(!q.empty())
    {
        node top = q.top();
        q.pop();
        int u=top.u;

        for(int i=0; i<(int)graph[u].size(); i++)
        {
            int v=graph[u][i];

            ///Relaxation

            if(distance[u]+cost[u][i]<distance[v])
            {
                distance[v]=distance[u]+cost[u][i];
                q.push(node(v,distance[v]));
            }
        }
    }
// Print shortest distances stored in dist[]
    printf("Vertex Distance from Source\n");
    for (int i = 1; i <= N_node; ++i)
        printf("%d \t\t %d\n", i, distance[i]);

}
int main()
{
    vector<int> graph[M],cost[M];

    int node,edge;
    cin>>node>>edge;

    while(edge--)
    {
        int u,v,value;
        cin>>u>>v>>value;

        graph[u].push_back(v);
        graph[v].push_back(u);

/// value of distance to v from u
        cost[u].push_back(value);
        cost[v].push_back(value);
    }


    int source;
    cin>>source;
    Dijstkra(node,graph,cost,source);
    return 0;
}

/**
4
4
1 2 2
1 3 5
2 3 1
3 4 3
1




**/

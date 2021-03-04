#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf              scanf
#define sn(a)           scanf("%lld",&a)
#define snn(a,b)        scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

#define M 100005
#define infinity 1e18+18
#define pi pair<ll,ll>
#define tc(cn) pf("Case %d: ",cn)
using namespace std;

vector<pi>vk;
vector<pi>graph[M];
ll dist[M], path[M];

ll node, edge, k;

void dijkstra(ll source)
{
    fill(dist, dist + M, infinity);

    dist[source] = 0;

    priority_queue<pi>q;

    q.push({ -dist[source], source});

    while (!q.empty())
    {
        pi top = q.top();
        q.pop();

        ll u = top.second;

        for (ll i = 0; i < (ll) graph[u].size(); i++)
        {
            ll v = graph[u][i].first;

            if (dist[v] > dist[u] + graph[u][i].second)
            {
                dist[v] = dist[u] + graph[u][i].second;
                
                q.push({ -dist[v], v});

            }
        }

    }

    ll change = 0;

    for (int i = 0; i < (ll)vk.size(); i++)
    {
        if (dist[vk[i].first] <= vk[i].second)change++;
    }

    cout << change << endl;


}

int main()
{
    cin >> node >> edge >> k;

    while (edge--)
    {
        ll u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }
    vk.clear();
    while (k--)
    {
        ll v, w;
        cin >> v >> w;
        vk.push_back({v, w});
        graph[1].push_back({v, w});
        graph[v].push_back({1, w});


    }
    ll source = 1;

    dijkstra(source);


    return 0;
}
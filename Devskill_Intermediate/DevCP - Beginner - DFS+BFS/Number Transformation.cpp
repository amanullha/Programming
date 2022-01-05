#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf              scanf
#define sn(a)           scanf("%lld",&a)
#define snn(a,b)        scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
 
#define M 1005
 
#define tc(cn) pf("Case %d: ",cn)
using namespace std;

bool isp[M + 5];

vector<int>factor[M + 5];

int dist[M + 5];
int vis[M + 5];

void sieve()
{
	for (int i = 2; i * i <= M ; i++)
	{
		if (!isp[i])
		{
			for (int j = i * i; j <= M; j += i)isp[j] = 1;
		}
	}

	for (int i = 1; i <= M; i++)
	{
		for (int j = 2; j < i; j++)
		{
			if (! isp[j] && i % j == 0)
			{
				factor[i].push_back(j);
			}
		}
	}

}

int solve(int a, int b)
{
	if (a > b)return -1;

	memset(vis, 0, sizeof(vis));
	queue<int>q;
	q.push(a);
	vis[a] = 1;
	dist[a] = 0;


	while (!q.empty())
	{
		int u = q.front();
		q.pop();


		
		if(u==b)return dist[u];

		for(int i=0;i<(int)factor[u].size();i++)
		{
			int v=factor[u][i];

			if(u+v>1000)continue;
			if(!vis[u+v])
			{
				vis[v+u]=1;
				dist[v+u]=dist[u]+1;
				q.push(u+v);
			}
		}
		
	}

	return -1;

}


int main()
{
	sieve();

	int a, b, T, cs = 1;
	
	cin >> T;

	while (T--)
	{

		
		cin >> a >> b;
		tc(cs++);
		cout<<solve(a,b)<<endl;

		//printf("Case %d: %d\n", cs++, solve(a, b));
	}

	return 0;
}

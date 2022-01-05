#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define M 110
#define sz 10000007
#define tc(cn) pf("Case %d: ",cn)
using namespace std;

vector<int>g[M];
int vist[M];

int setnbr(int val,int node_count)
{
	val+=1;
	while(val%node_count==0)val++;
	return val;
}

void nbr(int n)
{
	vector<int>N(n+2,0);

	queue<int>q;
	q.push(1);
	int x=2;
	N[1]=x;
	vist[1]=1;


	while(!q.empty())
	{
		int u=q.front();
		q.pop();

		for(int v:g[u])
		{
			
			if(vist[v]==0)
			{
				vist[v]=1;
				//vist[v]=vist[u]+1;

				N[v]=N[u]^1;
				//N[v]=setnbr(N[u],vist[v]);
			//	cout<<u<<"   node : "<<v<<"  val : "<<N[v]<<endl;
				q.push(v);
			}

		}
	}
for(int i=1;i<=n;i++)cout<<N[i]<<" ";
	cout<<endl;
}






int main()
{

	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		for(int i=1;i<=n;i++)
			{
				g[i].clear();
				vist[i]=0;
			}


		for (int i = 1; i <=n-1; i++)
		{
			int u, v;
			cin >> u >> v;
			g[u].pb(v);
			g[v].pb(u);
		}

		nbr(n);
		
	}


	return 0;
}

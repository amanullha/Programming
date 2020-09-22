#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

#define M 10000
#define sz 10000007
#define tc(cn) pf("Case %d: ",cn)
using namespace std;


int ar[] = {1, -1, +3, 2};
vector<int>v = {1, 3, 2};
int a, b;
int dist[M];

int bfs(int a, int b)
{

	for(int i=0;i<M;i++)dist[i]=1000000000;

	queue<int>q;
	q.push(a);
	dist[a] = 0;

	while (!q.empty())
	{
		int u = q.front();
		q.pop();

		if (u == b)return dist[u];

		if(u*2<=b*2)
		{
			if(dist[u]+1<dist[u*2])
			{
				dist[u*2]=dist[u]+1;
				q.push(u*2);
			}
		}


		if(u-1>=0)
		{
			if(dist[u]+1<dist[u-1])
			{
				dist[u-1]=dist[u]+1;
				q.push(u-1);
			}
		}
		if(u+3<=b*2)
		{
			if(dist[u]+1<dist[u+3])
			{
				dist[u+3]=dist[u]+1;
				q.push(u+3);
			}
		}

/*
		for (int i = 1; i <=3; i++)
		{
			//if (i == 3 && u % 2 == 1)continue;

			int x;

			if (i == 3)x = (u * 2);
			else x = u + ar[i];

			if (x >= 0 && x <= b * 2)
			{
				if(dist[u]+1<dist[x])
				{
					dist[x]=dist[u]+1;
					q.push(x);
				}
				if(x==b)return dist[x];
				
			}

		}
		*/

	}
	//cout<<"last ";
	return dist[b];
}


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin >> a >> b;
		if (a == b) {cout << '0' << endl; continue;}

		cout << bfs(a, b) << endl;

	}

	return 0;
}
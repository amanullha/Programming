#include<bits/stdc++.h>
#define M 10006
using namespace std;

typedef long long ll;

vector<ll>graph[M];
ll vist[M];

void dfs(ll n)
{
	/*vist[n] = 1;
	
	for(ll v:graph[n])
	{
		if(!vist[v])dfs(v);
	}*/

	vist[n] = 1;
	queue<int>q;
	q.push(n);

	while (!q.empty())
	{
		int u = q.front();
		q.pop();
		//cout<<endl<<u<<"  : ";

		for (int v : graph[u])
		{
			if (!vist[v])
			{
				vist[v] = 1;
				q.push(v);
			}
			//cout<<v<<" ";
		}
	}

}

void clr()
{
	for(ll i=0;i<M;i++)
	{
		graph[i].clear();
		vist[i]=0;
	}
}

int main()
{
	ll t;
	cin >> t;

	while (t--)
	{
		ll n, x, y, cnt = 0;
		string a, b;

		cin >> a;

		n = a[0] - 'A';

		clr();

		getline(cin, b);

		while (getline(cin, b))
		{
			if (b.size() == 0)break;

			x = b[0] - 'A';
			y = b[1] - 'A';

			graph[x].push_back(y);
			graph[y].push_back(x);
		}

		for(ll i=0;i<=n;i++)
		{
			if(vist[i]==0)
			{
				cnt++;
				dfs(i);
			}
		}

		cout<<cnt<<endl;
		if(t>0)cout<<endl;

	}

	return 0;
}

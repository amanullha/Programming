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
#define sz 10000007
#define tc(cn) pf("Case %d: ",cn)
using namespace std;

vector<int>v;
int n;



void tree()
{
	vector<int>g[n + 1];

	queue<int>q;
	q.push(1);
	int pos = 1;
	while (!q.empty())
	{
		int top = q.front();
		q.pop();

		int t = v[pos];

		while (t <= v[pos] && pos <= n&& pos!=0)
		{
			q.push(v[pos]);
			g[top].pb(v[pos]);
			t = v[pos];
			pos++;
		}

		if (pos > n)break;
	}

	/*
	for(int i=1;i<=n;i++)
	{
		if(g[i].size()>0)
		{
			cout<<i<<endl;
			for(int x:g[i])cout<<x<<"  ";
				cout<<endl<<endl;
		}

	}

	*/


	vector<bool>vist(n + 1, 1);

	vector<int>val(n + 1, 0);
	val[1] = 1;

	queue<int>qq;
	qq.push(1);
	vist[1] = 0;
	int ans = 1;

	while (!qq.empty())
	{
		int u = qq.front();
		qq.pop();

		for (int i = 0; i < (int)g[u].size(); i++)
		{
			int v = g[u][i];
			if (vist[v] && v!=0)
			{
				qq.push(v);
				vist[v] = 0;
				val[v] = val[u] + 1;
				ans = max(ans, val[v]);
				//cout<<"\nv "<<v<<" ans : "<<ans<<endl;
			}
		}
	}

//cout<<endl;

//for(int i=1;i<=n;i++)cout<<i<<" d : "<<val[i]<<endl;

//cout<<endl<<endl;
	cout << ans-1 << endl;


}


int main()
{
	int t;
	cin >> t;
	while (t--)
	{


		cin >> n;

		v.clear();

		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			v.pb(x);
		}

		tree();
	}

//pf("\n\n\n\n");Time();
	return 0;
}

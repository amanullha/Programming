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

int ts=1;

void solve()
{
	
	int n;
	cin >> n;
	vector<vector<int>> v(n + n - 1);

	int i, j;
	for ( i = 0; i < n; i++)
	{
		for ( j = 0; j <= i; j++)
		{
			int x;
			cin >> x;
			v[i].push_back(x);
		}
	}

	int jj = n - 1;
	//cout << jj << endl;
	for (int i = n; i < n + n - 1; i++)
	{
		for (int j = 0; j < jj; j++)
		{
			int x;
			cin >> x;
			v[i].push_back(x);
		}
		jj--;
	}


	

	for(int i=1;i<n;i++)
	{
		for(int j=0;j<(int)v[i].size();j++)
		{
			if(j==0)
			{
				v[i][j]+=v[i-1][j];
			}
			else
			{
				int mx=v[i-1][j-1];

				int s=v[i-1].size();

				if(j<s)
				{
					mx=max(mx,v[i-1][j]);
				}
				v[i][j]+=mx;
			}
		}
	}


	
/*

	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 0; j < v[i].size(); j++)
		{
			cout << v[i][j] << " ";

		}
		cout << endl;
	}



*/




	jj = n - 1;
	//cout << jj << endl;
	for (int i = n; i < n + n - 1; i++)
	{
		for (int j = 0; j < jj; j++)
		{
			v[i][j] += max(v[i - 1][j], v[i - 1][j + 1]);
		}
		jj--;
	}


/*
	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 0; j < v[i].size(); j++)
		{
			cout << v[i][j] << " ";

		}
		cout << endl;
	}

*/
	cout<<"Case "<<ts++<<": ";
	cout<<v[v.size()-1][0]<<endl;
	

}

int main()
{
	int t;
	cin >> t;
	while (t--)solve();





	return 0;
}

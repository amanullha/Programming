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
inline void Time() { cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s. \n";}
ll n, m;
ll mt[102][102];


void solve()
{

	cin >> n >> m;
	for (ll i = 0; i <= n; i++)
	{
		for (ll j = 0; j <= m; j++)
		{
			mt[i][j] = 0;
		}
	}



	for (ll i = 0; i < n; i++)
	{
		for (ll j = 0; j < m; j++)
		{
			cin >> mt[i][j];
		}
	}

/*
	char c;
	for (ll i = 0; i < n; i++)
	{
		if (i % 2 == 0)c = 'e';
		else c = 'o';

		for (ll j = 0; j < m ; j++)
		{
			int x = mt[i][j];
			//cout<<x<<" ";
			if (c == 'e')
			{
				if(x % 2 == 1)mt[i][j] += 1;

				//cout<<c<<" ";
				c = 'o';
			}
			else if (c == 'o' )
			{
				if(x % 2 == 0)mt[i][j] += 1;

				//cout<<c<<" ";
				c = 'e';
			}

		}
		//cout<<endl;
	}


//cout<<endl;


	for (ll i = 0; i < n; i++)
	{
		for (ll j = 0; j < m; j++)
		{
			cout << mt[i][j] << " ";

		}
		cout << endl;
	}
	

//cout<<endl;


*/

	for (ll i = 0; i < n; i++)
	{
		for (ll j = 0; j < m; j++)
		{
			if((i+j)%2==0)
			{
				cout<<mt[i][j]+mt[i][j]%2<<" ";
			}
			else 
			{
				if(mt[i][j]%2==0)cout<<mt[i][j]+1<<" ";
				else cout<<mt[i][j]<<" ";
			}
		}
		cout<<endl;
	}



}




int main()
{
	ll t;
	cin >> t;
	while (t--)solve();





	return 0;
}

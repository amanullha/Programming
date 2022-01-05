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

bool isp(int n)
{
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)return false;
	}
	return true;
}


int prime(int n)
{
	while (isp(n) != true)n++;
	return n;

}


int main()
{

	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;


		int ar[n][n];
		if (n & 1)
		{
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					ar[i][j] = 1;

				}

			}
		}
		else
		{
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (i == j)ar[i][j] = 1;
					if (i + j+1 == n)ar[i][j] = 1;
				}
			}
		}


cout<<n<<endl;

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (ar[i][j]==1)
					cout << ar[i][j] << " ";
				else cout << '0' << " ";

			}
			puts("");

		}




	}


	return 0;
}

#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define M 100
#define sz 10000007
#define tc(cn) pf("Case %d: ",cn)
using namespace std;

int n;
int v[M][3];


int cal()
{
	int dp[n + 2][3];

	for (int i = 0; i <= n; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				
				dp[i][j]=0;
			}
		}
	dp[0][0] = v[0][0];
	dp[0][1] = v[0][1];
	dp[0][2] = v[0][2];

	int ans = min({dp[0][0], dp[0][1], dp[0][2]});


	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			int minn = INT_MAX;

			for (int k = 0; k < 3; k++)
			{
				if (j != k)
				{
					minn = min(dp[i - 1][k], minn);
				}
			}
			//cout <<"\nminn:  "<<minn<<"  v  : "<<v[i][j] <<"  add  : "<<minn+v[i][j]<< endl;

			dp[i][j] += minn + v[i][j];
			
		}
	}

	ans = min({dp[n-1][0], dp[n-1][1], dp[n-1][2]});

	//cout << endl << endl << endl;
	return ans;
}


int main()
{

	int t, tt = 1;
	cin >> t;
	while (t--)
	{
		cin >> n;
		for (int i = 0; i <= n; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				v[i][j] = 0;
				
			}
		}

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cin >> v[i][j];
			}
		}

		tc(tt++);

		cout << cal()<< endl;

	}

	return 0;
}

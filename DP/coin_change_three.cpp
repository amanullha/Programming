#include<bits/stdc++.h>
#define ll long long
#define N 110
#define K 10004
#define MOD 100000007

using namespace std;


int dp[K];
int coin[N];
int n, k;
int tt = 1;
void solve()
{
	cin >> n >> k;

	for (int i = 0; i < n; i++)cin >> coin[i];

	memset(dp, 0, sizeof dp);
	//dp[0] = 1;

	for (int i = 0; i < n; i++)
	{

		for (int taka = 1; taka <= k; taka++)
		{
			if (taka >= coin[i])
			{
				dp[taka] += dp[taka - coin[i]];
				dp[taka] %= MOD;
			}
		}

	}
int ans=0;
	for(int i=0;i<=k;i++)if(dp[i]==i)ans++;

	cout << "Case " << tt << ": ";
	cout << ans<< endl;
}
int main()
{
	int t;
	cin >> t;
	while (t--)solve();
	return 0;
}



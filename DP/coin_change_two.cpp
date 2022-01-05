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
	dp[0] = 1;

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

	cout << "Case " << tt << ": ";
	cout << dp[k] << endl;
}
int main()
{
	int t;
	cin >> t;
	while (t--)solve();
	return 0;
}


/*
way two



#include<bits/stdc++.h>
#define ll long long
#define N 110
#define K 10010
#define MOD 100000007

using namespace std;

int dp[N][K];
int coin[N];
int n,k;
int tt=1;

void solve()
{
	cin>>n>>k;
	

	for(int i=0;i<n;i++)cin>>coin[i];

	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=k;j++)
		{
			if(j==0)dp[i][j]=1;
			else dp[i][j]=0;
		}
	}


	for(int index=n-1;index>=0;index--)
	{
		for(int taka=1;taka<=k;taka++)
		{
			int res=0;
			// coin nia 
			if(taka>=coin[index])
			{
				res+=dp[index][taka-coin[index]];
				res%=MOD;
			}
			// coin na nia
			res+=dp[index+1][taka];
			res%=MOD;

			// add total possibility
			dp[index][taka]=res;
		}
	}
	



	cout<<"Case "<<tt++<<": ";
	cout<<dp[0][k]<<endl;

}
int main()
{
	int t;
	cin>>t;
	while(t--)solve();
	return 0;
}








*/




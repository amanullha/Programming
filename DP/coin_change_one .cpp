/*
 *************** BISMILLAH HIR RAHMANIR RAHIM ***************

     AUTHOR: MD.AMANULLHA
     UNIVERSITY OF LIBERAL ARTS BANGLADESH
     DATE: / / 2021



	Problem: Coin Change (I) - LightOJ-1231

*/

// Iterative

#include<bits/stdc++.h>
#define ll long long
#define MM 1001
#define M 51
#define MOD 100000007

using namespace std;

int dp[M][MM];
int coin[M];
int coin_fre[M];

int n, inp_k;
int tt = 1;

void solve()
{
	cin >> n >> inp_k;

	for (int i = 0; i < n; i++)cin >> coin[i];
	for (int i = 0; i < n; i++)cin >> coin_fre[i];

	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= inp_k; j++)
		{
			if (j == 0)dp[i][j] = 1; // k ar value 0 hole toh all time e possible mane akta way tahake

			else dp[i][j] = 0;
		}
	}


	for (int index = n-1; index>=0;index--)
	{
		for (int j = 1; j <= inp_k; j++)
		{
			int res = 0;

			for (int takecoin = 0; takecoin <= coin_fre[index]; takecoin++)
			{
				if (takecoin * coin[index] <= inp_k)
				{
					res += dp[index + 1][j - (takecoin * coin[index])];
					res%=MOD;
				}

			}
			dp[index][j] = res;
		}
	}



	cout << "Case " << tt++ << ": ";
	cout << dp[0][inp_k] << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)solve();

	return 0;
}

// recursive

/*



#include<bits/stdc++.h>
#define ll long long
#define MM 1001
#define M 51
#define MOD 100000007

using namespace std;

int dp[M][MM];
int coin[M];
int coin_fre[M];
int n,k;
int tt=1;
int coin_change(int pos,int bakiache)
{
	if(bakiache==0 && pos<=n)return 1;
	if(bakiache==0 && pos>n)return 0;
	//if(bakiache==0)return pos<=n;
	if(pos>n || bakiache<0)return 0;

	if(dp[pos][bakiache]!=-1)return dp[pos][bakiache];

	int res=0;

	for(int i=0;i<=coin_fre[pos];i++)
	{
		//if(i*coin[pos]<=bakiache)
		res+=coin_change(pos+1,bakiache-(i*coin[pos]));
		res%=MOD;
	}

dp[pos][bakiache]=res;
return dp[pos][bakiache];

}

void clear()
{
	for(int i=0;i<=n;i++)
		for(int j=0;j<=k;j++)dp[i][j]=-1;
}

void solve()
{
	cin>>n>>k;
	

	for(int i=0;i<n;i++)cin>>coin[i];
	for(int i=0;i<n;i++)cin>>coin_fre[i];

	clear();

	cout<<"Case "<<tt++<<": ";
	cout<<coin_change(0,k)<<endl;

}
int main()
{
	int t;
	cin>>t;
	while(t--)solve();
	return 0;
}






*/
#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define M 51
#define MOD 100000007
#define sz 1003
#define tc(cn) pf("Case %d: ",cn)
using namespace std;

int coin[M];
int fre[M];
int dp[M][sz];
int n, k;

int coin_change(int pos, int rem)
{

	if (rem == 0 )return pos<=n;
	if (rem < 0 || pos > n)return 0;

	if (dp[pos][rem] != -1)return dp[pos][rem];

	int res = 0;

	for (int i = 0; i <= fre[pos]; i++)
	{
		res += coin_change(pos + 1, rem - (i * coin[pos]));
		res%=MOD;
	}

	dp[pos][rem] = res;

	return dp[pos][rem];
}

void cls()
{
	for (int i = 0; i <= n; i++)
		for (int j = 0; j <=k; j++)dp[i][j] = -1;
}

int main()
{
	int t, tt = 1;
	cin >> t;
	while (t--)
	{
		cin >> n >> k;
		for (int i = 0; i < n; i++) cin >> coin[i];
		for (int i = 0; i < n; i++) cin >> fre[i];

		cls();
		tc(tt++);
		cout << coin_change(0, k) << endl;




	}



	return 0;
}

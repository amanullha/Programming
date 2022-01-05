#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define Mx 105
using namespace std;

int n, w[101];
int dp[101][10001];

int dp_0_1_Knapsack(int pos, int baki_ache)
{

	if (pos >= n)return 0;
	if (dp[pos][baki_ache] != -1)return dp[pos][baki_ache];

	int nibo = 0, nibo_nah = 0;

	if (baki_ache >= w[pos])
	{
		nibo = dp_0_1_Knapsack(pos + 1, baki_ache - w[pos]) + w[pos];
		//s.pb(w[pos]);
	}
	nibo_nah = dp_0_1_Knapsack(pos + 1, baki_ache);

	return max(nibo, nibo_nah);



}

int main()
{
	int  t;
	while (cin >> t)
	{
		if (!t)return 0;
		cin >> n;
		memset(dp, -1, sizeof dp);
		for (int i = 0; i < n; i++)cin >> w[i];

		cout << t << "  " << n << endl;
		cout << dp_0_1_Knapsack(0, t) << endl;

	}



	return 0;
}

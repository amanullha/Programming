#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define Mx 105
using namespace std;

int n,v[101],w[101];
int dp[101][10001];

int dp_0_1_Knapsack(int pos, int baki_ache)
{

	if(baki_ache<0)return INT_MIN;
	/*
	 beshi weight beshi nia nisi. tai return korte hobe akta negative boro value ,
	 jate max profit or max value ar compare a aii beshi weigth neta path ata nosto hoye jay
	*/ 
	if(pos==n)return 0;// (confusion part)


	if (dp[pos][baki_ache] != -1)return dp[pos][baki_ache];

	int nibo = dp_0_1_Knapsack(pos + 1, baki_ache - w[pos]) + v[pos];

	int nibo_nah = dp_0_1_Knapsack(pos + 1, baki_ache);

	return max(nibo, nibo_nah);



}

int main()
{
	int wi;
	cin >> n >> wi;



	for (int i = 0; i < n; i++)
	{	
		cin>>v[i]>>w[i];
	}

	memset(dp, -1, sizeof(dp));
	cout << dp_0_1_Knapsack(0, wi) << endl;
	return 0;
}

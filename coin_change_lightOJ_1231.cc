#include<bits/stdc++.h>
# define ll long long
#define M 10000007
#define MOD 1000000009

using namespace std;

int dp[M][M];
int coin[M];
int coin_fre[M];

void clear()
{
	for(int i=0;i<M;i++)
		for(int j=0;j<M;j++)
			dp[i][j]=-1;
}
void solve()
{
	int n,k;
	cin>>n>>k;


}


int main()
{
	int t;
	cin>>t;
	while(t--)solve();
	return 0;
}

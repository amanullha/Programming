#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

#define M 500
#define infinity 1e7
#define tc(cn) pf("Case %d: ",cn)
using namespace std;

int n, dp[M][M];
vector<int>arr;


int chef(int idx, int t) {
	if (idx == n) return 0;

	if (t == 2 * n + 1) return infinity;

	if (dp[idx][t] != -1) return dp[idx][t];

	int nibo_nah = chef(idx, t + 1);
	int nibo = abs(t - arr[idx]) + chef(idx + 1, t + 1);

	return dp[idx][t] = min(nibo_nah, nibo);
}

void clr()
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < M; j++)
		{
			dp[i][j] = -1;
		}
	}
}

void solve()
{
	cin >> n;
	arr.clear();

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		arr.pb(x);
	}

	sort(arr.begin(), arr.end());
	clr();

	cout << chef(0, 1) << endl;
}
int main()
{
	int t ;
	cin >> t;
	while (t--)
	{
		solve();
	}

	return 0;
}

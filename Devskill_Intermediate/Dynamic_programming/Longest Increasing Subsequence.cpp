#include<bits/stdc++.h>
#define pb push_back
#define ll int
using namespace std;


void LIS()
{
	int n;
	cin >> n;
	vector<int>arr(n), dp(n+5, 1);
	for (int i = 0; i < n; i++)cin >> arr[i];

	int max_len = 1;

	for (int i = 1; i < n; i++)
	{
		int x=INT_MIN;
		for (int j = i - 1; j >= 0; j--)
		{
			if (arr[j] <= arr[i])
			{
				x=max(x,dp[j]);
				
			}
		}
		dp[i] = max(dp[i], x+ 1);
		max_len = max(max_len, dp[i]);

	}
	cout << max_len << endl;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		LIS();
	}

	return 0;
}

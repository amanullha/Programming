#include <bits/stdc++.h>
#define ll int
#define M 5005
using namespace std;


bool isPalindrome[M][M];
ll dp[M][M];

int main()
{
	string s;
	char ch;
	while (scanf("%c", &ch) && ch >= 'a' && ch <= 'z')s += ch;

	s = ' ' + s;
	int size = s.size();

	for (ll i = 1; i <= size; i++)
	{
		isPalindrome[i][i] = 1;

	}

	for (ll i = 1; i < size; i++)
	{
		if (s[i] == s[i + 1])
		{

			isPalindrome[i][i + 1] = 1;
		}
	}

	for (ll len = 0; len < size - 2; len++)
	{
		for (ll i = 1; i < size - len; i++)
		{
			if (s[i - 1] == s[i + len + 1] && isPalindrome[i ][i + len ])
				isPalindrome[i - 1][i + len + 1] = 1;
		}
	}


	for (ll i = 1; i <= size; i++)
	{
		for (ll j = 1; j <= size; j++)
		{
			dp[i][j] = isPalindrome[i][j] + dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1];
		}
	}

	/*
		for (ll i = 1; i <= size; i++)
		{
			for (ll j = 1; j <= size; j++)
			{
				cout << isPalindrome[i][j] << " ";
			} cout << endl;
		} cout << endl;
		for (ll i = 1; i <= size; i++)
		{
			for (ll j = 1; j <= size; j++)
			{
				cout << dp[i][j] << " ";
			} cout << endl;
		}
	*/


	ll q;
	scanf("%d",&q);
	while (q--)
	{
		ll l, r;
		scanf("%d%d",&l,&r);

		/*ll c=0;
		for(ll x=l;x<=r;x++)
		{
			for(ll y=l;y<=r;y++)
			{
				if(isPalindrome[x][y])c++;
			}
		}
		cout<<c<<endl;
		*/

		//cout << dp[r][r] + dp[l - 1][l - 1] - dp[l - 1][r] - dp[r][l - 1] << endl;
		printf("%d\n",dp[r][r] + dp[l - 1][l - 1] - dp[l - 1][r] - dp[r][l - 1] );
	}


	return 0;
}


/**

1 0 0 0 0 0 0
0 1 1 1 0 0 0
0 0 1 1 0 0 0
0 0 0 1 0 1 0
0 0 0 0 1 0 0
0 0 0 0 0 1 0
0 0 0 0 0 0 1

1 1 1 1 1 1 1
1 2 3 4 4 4 4
1 2 4 6 6 6 6
1 2 4 7 7 8 8
1 2 4 7 8 9 9
1 2 4 7 8 10 10
1 2 4 7 8 10 11

**/
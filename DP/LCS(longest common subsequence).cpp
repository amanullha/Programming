#include<bits/stdc++.h>
using namespace std;

void solve()
{
	string s1, s2;
	cin >> s1 >> s2;
	int l1 = s1.size() + 1, l2 = s2.size() + 1;

	int lcs[l1][l2];
	for (int i = 0; i < l1; i++)
	{
		for (int j = 0; j < l2; j++) lcs[i][j] = 0;
	}

	for (int i = 1; i < l1; i++)
	{
		for (int j = 1; j < l2; j++)
		{
			if (s1[i - 1] == s2[j - 1]) lcs[i][j] = lcs[i - 1][j - 1] + 1;

			else lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]);
		}
	}


	cout << lcs[l1 - 1][l2 - 1] << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)solve();

	return 0;
}

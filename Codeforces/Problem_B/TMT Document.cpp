#include <bits/stdc++.h>
using namespace std;


bool fun(string s)
{

	int n = s.size();
	int aget[n];
	int agem[n];
	int t = 0, m = 0;;

	for (int i = 0; i < n; i++)
	{
		if (s[i] == 'T')t++;
		else m++;
		aget[i] = t;
		agem[i] = m;
	}



	for (int i = 0; i < n; i++)
	{
		if (s[i] == 'M')
		{
			if (aget[i] < agem[i])
			{
				return false;
			}

		}
	}
	return m + m == t;
}

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;


		string s;
		cin >> s;
		if (fun(s))
		{
			reverse(s.begin(), s.end());
			if(fun(s))cout << "YES" << endl;
			else cout << "NO" << endl;


		}
		else
			cout << "NO" << endl;


	}
	return 0;
}
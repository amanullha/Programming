#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int tc = 1; tc <= t; tc++)
	{


		string a;
		cin >> a;
		lli n = 0, b;
		cin >> b;
		int s = 0;
		if (a[0] == '-')s = 1;
		for (int i = s; i < (int)a.size(); i++)
		{
			n = n * 10 + (a[i] - '0');
			n %= b;

		}
		cout << "Case " << tc << ": ";

		if (n == 0)cout << "divisible" << endl;
		else cout << "not divisible" << endl;
	}


	return 0;
}
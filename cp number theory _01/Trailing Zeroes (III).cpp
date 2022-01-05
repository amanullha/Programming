#include<bits/stdc++.h>
#define ll long long
using namespace std;



ll fc(ll n, ll x) //fc for count tralling zero in N!
{
	ll  number = 0, f = x;
	while (x <= n)
	{
		number += n / x;
		x *= f;
	}
	return number;
}

int main()
{

	ll t, q;
	cin >> t;


	for (ll tc = 1; tc <= t; tc++)
	{
		cin >> q;
		cout << "Case " << tc << ": ";

		ll l = 1, h = 1000000000, m = 0, loop = 80, ans = INT_MAX;
		bool f = 1;


		while (loop--)
		{
			m = l + (h - l) / 2;

			ll count = fc(m, 5);


			if (count == q)
			{
				if (ans > m)ans = m;

				f = 0;
			}

			if (count < q)l = m + 1;

			else h = m;
		}


		if (f)cout << "impossible" << endl;
		else cout << ans << endl;



	}
	return 0;
}
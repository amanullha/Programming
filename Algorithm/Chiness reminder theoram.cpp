
#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll extended_euclidean(ll a, ll b, ll &x, ll &y)
{
	if (a == 0)
	{
		x = 0;
		y = 1;
		return b;

	}
	ll x1, y1;
	ll gcd = extended_euclidean(b % a, a, x1, y1);

	x = (-(b / a) * x1) + y1;
	y = x1;


	return gcd;
}

ll modInverse(ll a, ll m)
{
	ll x, y;
	ll g = extended_euclidean(a, m, x, y);

	x = (x % m + m) % m;
	return x;

}


int main()
{
	int t;
	cin >> t;
	for (int tc = 1; tc <= t; tc++)
	{
		ll q;
		cin >> q;
		
		ll a[q], m[q], mv[q], mi[q];

		ll M = 1;

		for (ll i = 0; i < q; i++)
		{
			cin >> m[i] >> a[i];
			M *= m[i];
			
		}

		for (ll i = 0; i < q; i++)
		{
			mv[i] = (M / m[i]);
			mi[i] = modInverse(mv[i] , m[i]);
		}


		ll Y = 0;
		for (ll i = 0; i < q; i++)
		{
			Y += (a[i] * mv[i] * mi[i]);
		}

		cout << "Case " << tc << ": ";
		
		Y = Y % M;
		cout << Y << endl;

	}


	return 0;
}
#include<bits/stdc++.h>
#define M 10000007
#define ll long long
#define fi ios_base::sync_with_stdio(0); cin.tie(0)
using namespace std;

int main()
{
	ll t;
	scanf("%lld", &t);
	while (t--)
	{
		ll n;
		scanf("%lld", &n);

		ll count = 0;
		for (ll i = 1; i <= n; i++)
		{

			count += i / (1LL * __gcd(i, n));

		}

		cout << count*n << endl;

	}



	return 0;
}
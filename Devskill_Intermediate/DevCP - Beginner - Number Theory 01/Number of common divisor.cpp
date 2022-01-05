#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define sn scanf
#define pn printf
#define M 10000
using namespace std;



int main()
{
	int t;

	scanf("%d", &t);
	while (t--)
	{

		ll a, b, c = 0;

		scanf("%lld%lld", &a, &b);
		/* gcd(a,b)=g, ar mane hole a and b ar moddhe shob thake boro divisor ta.
		jeta a and b oboy ke e divide kore. tar mane common boro divisor ta e hocche gcd(a,b)
		and bake shob common divisor gola gcd(a,b) thake choto.

		Now, think suppose there exist a common divisor d of both A & B.
		for all d, d must divide g.

		suppose d does not divide g,
		it means there exist a prime number p, that g does not have, but both the numbers A & B have. But g is gcd of A & B. So, this is contradiction.
		So, all the divisors of A & B divides g.

		now consider all d which is divisor of g.
		Since g is gcd of A & B. d is divisor of g, therefore d is also divisor of A & B both.

		therefore all the divisors of g and (common divisors of (A&B)) are equal.
		*/

		ll x = __gcd(a, b);
		for (ll i = 1; i * i <= x; i++)
		{
			if (x % i == 0)
			{
				if (x / i == i)
					c += 1;

				else
					c += 2;
			}
		}


		printf("%lld\n", c );


	}
	return 0;
}
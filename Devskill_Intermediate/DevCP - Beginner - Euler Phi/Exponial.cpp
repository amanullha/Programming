#include<bits/stdc++.h>
#define ll long long
#define M 1000
using namespace std;



ll phi_cal(ll n)
{
	/*
	akne Euler Totient function use korar maen holo....
	--> akta value ke power kore M dia mod korar mane holo power ke phi(M) dia mod kore then calculate kora then M dia mod kora.
	jar fole bishal balue calculate korte hobe nah. karon amra power ke phi(M) dia mod korar fole power ar value kome jabe.


	another thing is that, kono exponial ke fixed akta vlue dia mod korar mane tar final result kisho length por por repeat hobe.
	so amra jodhi kotho gor por por repeat hobe mane rapeat ar length ta ber korte pari tahole amder ke sodhu oii repeat length porjonto
	power calculate kore M dia mod korle e hobe. so akne phi(M) holo repeat length. tai power ke phi(M) dia mod korle. power kome asbe then
	result calculate kore M dia mod korle e final result peye jabo

	*/
	ll ans = n;
	for (ll p = 2; p * p <= n; p++)
	{
		if (n % p == 0)
		{
			while (n % p == 0)
			{
				n /= p;
			}
			ans -= ans / p;

		}
	}
	if (n > 1)ans -= ans / n;
	return ans;
}

ll binary_exponentiation(ll n, ll p, ll mod)
{

	n %= mod;

	ll ans = 1;
	while (p)
	{
		if (p & 1)ans = ((ans % mod) * (n % mod)) % mod;
		n = ((n % mod) * (n % mod)) % mod;
		p >>= 1;
	}

	return ans;
}

ll cal( ll n, ll mod)
{
	//corner case
	if (n == 0)return 0 % mod;
	if (n == 1)return 1 % mod;
	if (n == 2)return 2 % mod;
	if (n == 3)return 9 % mod;
	if (n == 4)return 262144 % mod;
	if (mod == 1)return 0;

	/*
	There is a less known version of the last equivalence, that allows computing xnmodm efficiently for not coprime x and m. For arbitrary x,m and n≥log2m:

	x^n≡x^(ϕ(m)+[n mod ϕ(m)])mod m

	=> That is the main theory for calculate this exponial n^(n-1)^(n-2)^(n-3)...

	n^(n-1)^(n-2)^(n-3)... mod m ----->> we calculate it recursively
	1st a amra n^(n-1)ke calculate krbo.but tar age n-1 ke age calculate korte hobe
	mane power_function(value,power+phi_value_of_mod_value,mod_value), so jeheto akne power ta e abr same exponial tai aii power ta age calculate korte hobe.
	 tai niche recursively same mathod ar moddhe n-1 kor same method ke call deya hoise( niche cal(n-1,phi_cal(mod))  ). jate n-1 calculate korar por n^(n-1)ke calculate kora jay
	then base case gola if condition dia write kore n-1 ke handle kora hoise.

	*/


	return binary_exponentiation(n, cal(n - 1, phi_cal(mod)) + phi_cal(mod), mod);

}

int main()
{

	ll n, m;
	scanf("%lld%lld", &n, &m);

	printf("%lld\n", cal(n, m) );


	return 0;
}

#include<bits/stdc++.h>
#define lli long long int
#define ll long long
using namespace std;
const ll M=1e6;


vector<bool>is_prime(M);
vector<lli>prime;

void prime_sieve()
{
	for (ll i = 2; i * i <= M; i++)
	{
		if (!is_prime[i])
		{
			for (ll j = i + i; j <= M; j += i)
			{
				is_prime[j] = 1;
			}
		}
	}
	is_prime[1] = is_prime[0] = 1;

	for (ll i = 2; i * i <= M; i++)
	{
		if (!is_prime[i])prime.push_back(i);
	}


}
int main()
{
	prime_sieve();
	ll t,n,cnt,tot;
	scanf("%lld",&t);

	for (ll tc = 1; tc <= t; tc++)
	{
		cin >> n;
		tot=1LL;

		for (ll i = 0; i < (lli)prime.size() && prime[i]*prime[i] <= n; i++)
		{
			if (n % prime[i] == 0)
			{
				cnt = 1LL;
				while (n % prime[i] == 0)
				{
					cnt++;
					n /= prime[i];
				}

				tot *= cnt;
			}
		}
		if (n > 1)
		{
			tot *= 2;
		}

		printf("Case %lld: %lld\n",tc,tot-1);


	}
	return 0;
}
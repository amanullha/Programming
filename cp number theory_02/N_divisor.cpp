#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define sn scanf
#define pn printf
#define M 100000
using namespace std;

bool isprime[M];
vector<ll>prime;

void sieve_of_eratosthenes()
{
	for (ll i = 3; i * i <= M; i++)
	{
		if (!isprime[i])
		{
			for (ll j = i * i; j <= M; j += i)
				isprime[j] = true;
		}
	}

	prime.push_back(2);
	for (ll i = 3; i <= M; i += 2)
	{
		if (!isprime[i])prime.push_back(i);
	}

}




ll prime_fact(ll n)
{
	ll tot = 1;
	for (ll i = 0; i < (ll) prime.size() && prime[i]*prime[i] <= n; i++)
	{

		if (n % prime[i] == 0)
		{

			ll c = 0;
			while (n % prime[i] == 0)
			{
				c++;
				n /= prime[i];
			}

			tot *= (c + 1);
		}



	}
	if (n > 1)tot *= 2;
	return tot;
}

ll  find_k_div(ll a, ll b, ll n)
{
	ll t = 0;
	for (ll i = a; i <= b; i++)
	{
		if (prime_fact(i) == n)t++;
	}
	return t;
}

int main()
{
	
	sieve_of_eratosthenes();

		ll k, l, r;
		cin >> l >> r >> k;
		cout << find_k_div(l, r, k) << endl;

	return 0;
}
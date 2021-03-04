#include<bits/stdc++.h>
#define ll long long
#define M 100000
using namespace std;

vector<bool>is_prime(M);
vector<int>prime;

void prime_sieve()
{
	for (int i = 2; i * i <= M; i++)
	{
		if (!is_prime[i])
		{
			for (int j = i * i; j <= M; j += i)
			{
				is_prime[j] = 1;
			}
		}
	}
	is_prime[1] = is_prime[0] = 1;

	for (int i = 2; i <= M; i++)
	{
		if (!is_prime[i])prime.push_back(i);
	}


}



ll phi(ll n)
{
	ll count = n;
	vector<ll>f;
	for (int i = 0; i < prime.size() && prime[i]*prime[i] <= n; i++)
	{
		if (n % prime[i] == 0)
		{
			f.push_back(prime[i]);

			while (n % prime[i] == 0)
				n /= prime[i];

		}
	}
	if (n > 1)f.push_back(n);

	for (ll x : f)
	{
		count-=(count/x);
	}

	return count;

}

int main()
{

	prime_sieve();
	ll x;
	while (cin >> x && x)
	{
		cout << phi(x) << endl;
	}


	return 0;
}
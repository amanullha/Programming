#include<bits/stdc++.h>
#define ll long long
#define M 10000007
using namespace std;
map<ll, ll>un;
vector<bool>is_prime(M);
vector<int>prime;

void prime_sieve()
{
	for (int i = 2; i * i <= M; i++)
	{
		if (!is_prime[i])
		{
			for (int j = i + i; j <= M; j += i)
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
void SOD( ll n )
{


	for ( ll i = prime.size() - 1 ; i >= 0; i-- )
	{	 //cout << endl << prime[i] << endl;
		if ( n % prime[i] == 0 )
		{
			//cout<<endl<<prime[i]<<endl;
			ll c = 0;
			while ( n % prime[i] == 0 )
			{
				n /= prime[i];
				c++;

			}

			if (un.find(prime[i]) == un.end())
			{
				un[prime[i]] = c;

			}
			else
			{
				un[prime[i]] += c;
			}


		}
	}
	if ( n > 1 )
	{

		if (un.find(n) == un.end())
		{
			un[n] = 1;

		}
		else
		{
			un[n] += 1;
		}

	}

}

int main()
{


	prime_sieve();
	ll n;
	int tc = 1;
	while (cin >> n)
	{
		if (n == 0)return 0;
		un.clear();
		for (int i = 2; i <= n; i++)SOD(i);

		cout << "Case " << tc++ << ": " << n << " = ";
		ll sz = un.size() - 1;

		for (auto x : un)
		{
			cout << x.first << " (" << x.second << ")";
			if (sz)cout << " * ";
			sz--;
		}
		cout << endl;

	}

	return 0;
}
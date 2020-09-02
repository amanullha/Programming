#include<bits/stdc++.h>
#define lli long long int
#define M 10000000+7
using namespace std;

vector<bool>is_prime(M);
vector<lli>prime;

void prime_sieve()
{
	for (lli i = 2; i * i <= M; i++)
	{
		if (!is_prime[i])
		{
			for (lli j = i + i; j <= M; j += i)
			{
				is_prime[j] = 1;
			}
		}
	}
	is_prime[1] = is_prime[0] = 1;


	for (lli i = 2; i <= M; i ++)
	{
		if (!is_prime[i])prime.push_back(i);
	}


}
lli prime_fact( lli n )
{
	vector<lli>v;

	for (lli i = 0; i < (lli)prime.size() && prime[i]*prime[i] <= n; i++)
	{

		if (n % prime[i] == 0)
		{
			v.push_back(prime[i]);

			while (n % prime[i] == 0)
			{
				n /= prime[i];
			}
		}
	}

	if (n > 1) 
	{
		v.push_back(n);
	}

	if (v.size() == 1)return -1;

	lli m = INT_MIN;

	for (int i = 0; i < (lli)v.size(); i++)
	{
		m = max(m, v[i]);
	}

	return m;
}



int main()
{
	prime_sieve();
	lli n;
	while (cin >> n)
	{

		n = llabs(n);
		if (n == 0)break;
		else
			cout << prime_fact(n) << endl;

	}

	return 0;
}
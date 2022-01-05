#include<bits/stdc++.h>
#define lli long long int
#define M 100000090
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

	for (lli i = 2; i <= M; i++)
	{
		if (!is_prime[i])prime.push_back(i);
	}


}
lli SOD( lli n )
{
	lli ans = 1LL;
	lli sum = 1LL;

	for (lli i = 0; i < (int)prime.size() && prime[i]*prime[i] <= n; i++)
	{

		if (n % prime[i] == 0)
		{
			ans = 1LL;
			while (n % prime[i] == 0)
			{
				ans *= prime[i];
				n /= prime[i];
			}
			ans *= prime[i];

			ans -= 1;
			ans /= (prime[i] - 1);
			sum *= ans;
		}
	}
	if (n > 1) {
		//n = ((n * n) - 1) / (n - 1);

		sum *= (n + 1);

	}


	return sum;

}



int main()
{
	prime_sieve();
	int t;
	cin >> t;
	//scanf("%d", &t);
	while (t--) {
		//prime_sieve();
		lli n;
		cin >> n;
		//scanf("%lld", &n);
		cout << SOD(n) - n << endl;
		//printf("%lld\n", SOD(n) - n);
	}

	return 0;
}
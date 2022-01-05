#include<bits/stdc++.h>
#define lli long long int
#define M 10000000+90
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

	for (lli i = 2; i * i <= M; i++)
	{
		if (!is_prime[i])prime.push_back(i);
	}


}
bool SOD( lli n )
{

	lli even=0,odd=0;

	for (lli i = 0; i < (int)prime.size() && prime[i]*prime[i] <= n; i++)
	{

		if (n % prime[i] == 0)
		{
			lli ans = 0;
			while (n % prime[i] == 0)
			{
				ans++;
				n /= prime[i];
			}
			if(ans&1)odd++;
			else even++;
			
		}
	}
	if (n > 1) {
		odd++;

	}

return even>odd;

}



int main()
{
	prime_sieve();
	int t;
	cin >> t;
	//scanf("%d", &t);
	while (t--) {
		
		lli n;
		cin >> n;
		if(!is_prime[n])
		{
			puts("Ordinary Number");
			continue;
		}
		//scanf("%lld", &n);
		if(SOD(n))puts("Psycho Number");
		else puts("Ordinary Number");
	}

	return 0;
}
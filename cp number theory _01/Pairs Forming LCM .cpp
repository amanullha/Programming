// took helped by this tutorial: https://www.youtube.com/watch?v=S7ixgyOUIrI

#include<bits/stdc++.h>
#define ll long long
#define M 10000007
using namespace std;

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
ll Prime_fac( ll n ) 
{
	ll res = 1;

	for ( ll i = 0; i < (ll)prime.size() && prime[i] *prime[i] <= n; i++ ) 
	{
		if ( n % prime[i] == 0 )
		 {
			ll c=0;
			while ( n % prime[i] == 0 ) 
			{
				n /= prime[i];
				c++;
				
			}

			res *= (c*2+1);
		}
	}
	if ( n>1 ) 
	{
		res *= 3; 
	}
	return res;
}


int main()
{
	
	ll t;
	prime_sieve();
	scanf("%lld", &t);
	for(ll tc=1;tc<=t;tc++) {
		
		ll n;
		scanf("%lld", &n);
		printf("Case %d: ",tc );





		printf("%lld\n", (Prime_fac(n)/2)+1);
	}

	return 0;
}
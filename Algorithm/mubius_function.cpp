#include<bits/stdc++.h>
#define pb push_back()
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define M 10000007
using namespace std;
inline void Time() { cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s. \n";}

vector<bool>is_prime(M);
vector<int>prime;

void prime_sieve()
{
	for (int i = 3; i * i <= M; i++)
	{
		if (!is_prime[i])
		{
			for (int j = i + i; j <= M; j += i)
			{
				is_prime[j] = 1;
			}
		}
	}
	prime.push_back(2);

	for (int i = 3; i <= M; i += 2)
	{
		if (!is_prime[i])prime.push_back(i);
	}


}

vector<ll>mub(M, 1);
void mobius()
{
	// cover all squer number with zero('0')
	for (ll i = 0; i < (ll)prime.size() && prime[i]*prime[i] <= M; i++)
	{
		ll sqr = prime[i];
		sqr *= sqr;
		for (ll j = sqr; j <= M; j += sqr)
			mub[j] = 0;
	}

	// cover all non squer number with distinct prime number count.
	// even prime hole 1 hole r odd prime count hole -1 hobe
	for (ll i = 0; i < (ll)prime.size(); i++)
	{
		ll x = prime[i];
		for (ll j = x; j <= M; j += x)
			mub[j] *= -1;
	}

}

int main()
{




	pf("\n\n"); Time();
	return 0;
}

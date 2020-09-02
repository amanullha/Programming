#include<bits/stdc++.h>
#define ll long long int
#define M 10000000// akane M ar man 10000005 or 10000007 dile runtime error asr karon ki jani nah!
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

void segmented_sieve(ll a, ll b)
{
	ll sz = b - a + 1;
	ll phi[sz], prime_ache[sz];

	for (ll i = a; i <= b; i++)prime_ache[i - a] = phi[i - a] = i;

	for (ll i = 0; i < (ll)prime.size() && prime[i]*prime[i] <= b; i++)
	{
		ll current_prime = prime[i];

		ll base = (a / current_prime) * current_prime;
		if (base < a)base += current_prime;

		for (ll j = base ; j <= b; j += current_prime)
		{
			/*
			solution idea same segmented sieve ar moton , but akane while loop and prime_ache aii array ta use kora
			karon holo--> amra phi of N ar value findout kori result=N dore then N ar prime factor gola dia N ke bag dia
			result thake minus kori kinto ,akane prime_ache array ta use ar karon hole ata prime gola dia N ke prime factorization
			korar por last prime ta nia amra kaj na o korte pari but oii prime_ache array te kinto oii last prime ta thakebe
			tai print korar loop a check krte hobe je prime_ache ar value 1 thake boro ki nah! jodhi boro hoy tar mane aro akta prime
			ache but oii ta nia amra kaj kori nai tai oii ta dia abr result ke bag dite hobe then oii bagfol ta result theke
			minus korte hobe.
			*/
			while (prime_ache[j - a] % current_prime == 0)prime_ache[j - a] /= current_prime;
			phi[j - a] -= phi[j - a] / current_prime;/* ata same phi sieve ar moton.aken j-a mane holo index ar vaule start 0 thake
			not left  theke . i or j thake left mane a ke minus korle amder 1 take 10^7 ar moddhe index pabo.
			 karon amra prime sieve konto korchi 1 theake 10^7 porjonto.
			 */

		}
	}
	for (ll i = a; i <= b; i++)
	{
		if (prime_ache[i - a] > 1)phi[i - a] -= phi[i - a] / prime_ache[i - a];
		cout << phi[i - a] << endl;
	}

}


int main()
{
	ios_base::sync_with_stdio(false);
	sieve_of_eratosthenes();

	ll l, r;
	cin >> l >> r;
	segmented_sieve(l, r);




	return 0;
}
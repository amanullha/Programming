#include<bits/stdc++.h>
#define ll long long
#define M 32000
using namespace std;

bool isprime[M];
vector<ll>prime;
// segmented sieve korte  hole age sieve sieve_of_eratosthenes korte hobe
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

void segmented_sieve(ll l, ll r)
{
	// difference between left and right. 
	ll size = r - l + 1;
	// range soman size ar array declar korte hobe and initially shob index ke true kore deya hoise
	bool is_segsive[size];
	for (ll i = 0; i < size; i++)is_segsive[i] = true;
// same siece of eratosthenes ar moton , akne just root(r) ar soman prime nia kaj korte hobe
	for (ll i = 0; prime[i]*prime[i] <= r; i++)
	{
		ll curren_prime = prime[i];
		// kon jayga thake prime ar multiple gola kata hobe ar logic
		ll base = (l / curren_prime) * curren_prime;
		/* jodhi prime ar multiple ar value left value thake kom hoy tahole base mane 
		oii multiple ar shathe current prime ta add kore tar next multiple thake kate mane false kor start korte hobe.

		*/
		if (base < l)base += curren_prime;


		for (ll j = base; j <= r; j += curren_prime)
		{
			/*
			ake j ar moddhe ache kon multiple ta ke false korte hobe . kinto upre is_segsive array start hoise zero('0')
			index thake. tai j thake left minus kore dile e amra oiii index ta peye jabo. then oii index ar value false kore dibo

			*/
			is_segsive[j - l] = false;
		}
		/*
		jodhi base mane prime ar multiple kate start hoy left ar age thake ba laft thake but jodhi oii left ta prime hoy 
		tokhon amra akta prime number miss krbo ,tai nicher condition dara bola hoise . jodhi oiii prime ta false or kate 
		pore then thake abr include or true kore deya hobe.
		*/
		if (base == curren_prime)is_segsive[base - l] = true;
	}


	for (ll i = 0; i < size; i++)
	{
		// jodhi left 1 thake start hoy tahole 1 prime number ar moddhe include hoye jabe
		// karon 1 ke false or kata hoy nai. tai jei jei prime ar value 1 nah tader ke print kora hoise
		if(is_segsive[i] && i+l!=1)cout<<i+l<<endl;
	}
	puts("");
}


int main()
{
	sieve_of_eratosthenes();
	ll t;
	cin>>t;
	while(t--)
	{
		ll l,r;
		cin>>l>>r;
		segmented_sieve(l,r);
	}



	return 0;
}
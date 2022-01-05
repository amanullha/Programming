#include<bits/stdc++.h>
#define ll long long
#define M 10000000
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

void segmented_sieve(ll l, ll r)
{
	ll size = r - l + 1;
	bool is_segsive[size];
	for (ll i = 0; i < size; i++)is_segsive[i] = true;
	for (ll i = 0; prime[i]*prime[i] <= r; i++)
	{
		ll curren_prime = prime[i];
		
		ll base = (l / curren_prime) * curren_prime;
		
		if (base < l)base += curren_prime;


		for (ll j = base; j <= r; j += curren_prime)
		{
			
			is_segsive[j - l] = false;
		}
		
		if (base == curren_prime)is_segsive[base - l] = true;
	}

ll c=0;
	for (ll i = 0; i < size; i++)
	{
		
		if(is_segsive[i] && i+l!=1)c++;//cout<<i+l<<endl;
	}
	printf("%lld\n",c);
	//puts("");
}


int main()
{
	sieve_of_eratosthenes();
	ll t,tc=1;
	cin>>t;
	while(t--)
	{
		ll l,r;
		cin>>l>>r;
		cout<<"Case "<<tc++<<": ";
		segmented_sieve(l,r);
	}



	return 0;
}
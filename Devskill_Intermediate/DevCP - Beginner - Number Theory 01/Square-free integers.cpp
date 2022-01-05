#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define sn scanf
#define pn printf
#define M 1e7+7
#define Mx 100000000
using namespace std;


ll mb[Mx];
vector<bool>is_prime(M);
vector<ll>prime;

void prime_sieve()
{
	for (ll i = 2; i * i <= M; i++)
	{
		if (!is_prime[i])
		{
			for (ll j = i + i; j <= M; j += i)
			{
				is_prime[j] = 1;
			}
		}
	}
	is_prime[1] = is_prime[0] = 1;


	for (ll i = 2; i <= M; i ++)
	{
		if (!is_prime[i])prime.push_back(i);
	}


}
bool mobious()
{
	fill(mb,mb+Mx,1);
	mb[0]=0;
	for (ll i = 0; i < (ll) prime.size() && prime[i]*prime[i]<=Mx; i++)
	{

		ll x=prime[i];
		x=x*x;
		for(ll j=x;j<Mx;j+=x)
		{
			mb[j]=0;
		}


	}
	for(ll i=1;i<Mx;i++)
	{
		mb[i]+=mb[i-1];
	}
	
	return true;
}





int main()
{
	prime_sieve();
	mobious();
	
	ll t;
	cin>>t;
	while(t--)
	{
		ll x;
		cin>>x;
		cout<<mb[x]<<endl;
		
	}


	return 0;
}
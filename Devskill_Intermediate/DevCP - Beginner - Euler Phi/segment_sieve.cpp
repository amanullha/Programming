#include<bits/stdc++.h>
#include <iostream>
#include <limits.h>
#define ll long long
#define Max 32000
using namespace std;



vector<ll>prime;

void sieve()
{
	bool isprime[Max];
	for (ll i = 0; i < Max; i++)isprime[i] = true;
	for (ll i = 3; i * i <= Max; i += 2)
	{
		if (isprime[i])
		{
			for (ll j = i * i; j <= Max; j += i)
			{
				isprime[j] = false;
			}
		}
	}
	prime.push_back(2);
	for (ll i = 3; i < Max; i += 2)
	{
		if (isprime[i])prime.push_back(i);
	}

}

void segsieve(ll l,ll r)
{
	isprime[r-l+1];
	for(ll i=0;i<r-l+1;i++)isprime[i]=true;

	for(ll i=0;prime[i]*prime[i]<=r;i++)
	{
		ll nowprime=prime[i];
		ll base=(l/nowprime)*nowprime;
		if(base<l)base+nowprime;

		for(ll j=base;j<r;j+=nowprime)
		{
			
		}

	}
}




int main()
{
	int t;
	cin>>t;

	sieve();
	while(t--)
	{
		ll l,r;
		cin>>l,r;
		segsieve(l,r);
	}

	return 0;
}
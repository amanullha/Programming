#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define s scanf
#define p printf
#define rg 10000000005
#define M 100009
using namespace std;

vector<ll >kdiv[M];
bitset<M>ip;
vector<ll>prime;

void priem_check()
{
	for (ll i = 2; i < M; i++)
	{
		if (!ip[i])
		{
			prime.pb(i);
			for (ll j = i + i; j < M; j += i)
				ip[j] = true;
		}
	}
}


ll prime_fact(ll n)
{
	ll tot = 1;
	for (ll i = 0; i <(ll) prime.size() && prime[i]*prime[i] <= n; i++)
	{
		
		if (n % prime[i]==0)
		{
			
			ll c = 0;
			while (n % prime[i] == 0)
			{
				c++;
				n /= prime[i];
			}
			
			tot *= (2*c+1);
		}

		

	}
	if(n>1)tot*=3;
	return tot;
}

void find_k_div()
{
	for(ll i=2;i<M;i++)
	{
		kdiv[prime_fact(i)].push_back(i*i);
	}
}

int main()
{
ll t;

	priem_check();
	find_k_div();
	cin>>t;
	while(t--){
	ll k,l,r;
	cin>>k>>l>>r;
	ll rr=upper_bound(kdiv[k].begin(),kdiv[k].end(),r)-kdiv[k].begin();
	ll lll=lower_bound(kdiv[k].begin(),kdiv[k].end(),l)-kdiv[k].begin();
	cout<<rr-lll<<endl;
	

	}


	return 0;
}
#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define sn scanf
#define pn printf
#define M 1000006
#define Mx 2147483648
using namespace std;

vector<ll>kdiv[Mx];
vector<bool>is_prime(M);
vector<ll>prime;

void prime_sieve()
{
	for (ll i = 3; i * i <= M; i++)
	{
		if (!is_prime[i])
		{
			for (ll j = i + i; j <= M; j += i)
			{
				is_prime[j] = 1;
			}
		}
	}
	prime.push_back(2);

	for (ll i = 3; i <= Mx; i+=2)
	{
		if (!is_prime[i])prime.push_back(i);
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
			
			tot *= (c+1);
		}

		

	}
	if(n>1)tot*=2;
	return tot;
}

void find_k_div()
{
	for(ll i=1;i<M;i++)
	{
		kdiv[prime_fact(i)].push_back(i);
	}

//for(ll i=0;i<20;i++)cout<<i<<"   "<<kdiv[i].size()<<endl;


}

int main()
{
ll t,tc=1;

	prime_sieve();
	find_k_div();
	cin>>t;
	while(t--){
	ll k,l,r;
	cin>>l>>r>>k;
	ll rr=upper_bound(kdiv[k].begin(),kdiv[k].end(),r)-kdiv[k].begin();
	ll lll=lower_bound(kdiv[k].begin(),kdiv[k].end(),l)-kdiv[k].begin();

	cout<<"Case "<<tc++<<": ";
	cout<<rr-lll<<endl;
	

	}


	return 0;
}

/*

#include<bits/stdc++.h>
#define pb push_back()
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define Mx 2147483648
#define M 10000007
using namespace std;

inline void Time() { cerr << "Time elapsed : "<<1.0 *clock() / CLOCKS_PER_SEC << " s. \n";}

vector<ll>divv;
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

	for (int i = 3; i <= M; i+=2)
	{
		if (!is_prime[i])prime.push_back(i);
	}


}

ll divisor(ll n)
{
	ll count =1;
	for(ll i=0;i<(ll)prime.size() && prime[i]*prime[i]<=n;i++)
	{
		if(n%prime[i]==0)
		{
			ll c=0;
			while(n%prime[i]==0)
			{
				n/=prime[i];
				c++;
			}
		}
	}
}




ll solve()
{


}



int main()
{




pf("\n\n");Time();
return 0;
}

*/
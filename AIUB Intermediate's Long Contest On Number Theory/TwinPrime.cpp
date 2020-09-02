#include<bits/stdc++.h>
#define pb push_back()
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

#define M 20000000
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


int main()
{
	ll n;
	sieve_of_eratosthenes();
vector<ll>v;

for(ll i=0;i<(ll)prime.size()-1;i++)
{
	ll x=prime[i]+2;
	ll y=prime[i+1];
	//cout<<"x : "<<x<<"  y : "<<y<<endl;
	if(x==y)v.push_back(x-2);
}



	while(cin>>n)
	{
		cout<<"("<<v[n-1]<<", "<<v[n-1]+2<<")"<<endl;
	}
	




//pf("\n\n");Time();
return 0;
}

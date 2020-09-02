#include<bits/stdc++.h>
#define pb push_back()
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long

#define M 20000002
using namespace std;
std::vector<ll> fac(M, 1);
void sieve()
{
	fac[1] = 0;
	for (ll i = 2; i<= M; i++)
	{
		for (ll j = i; j <= M; j += i)
			fac[j] += i;
	}

	for (ll i = 2; i < M; i++)
	{
		fac[i] += fac[i - 1];
	}
}

int main()
{
sieve();
ll n;
while(cin>>n && n)
{
	//cout<<n<<endl;
	cout<<fac[n]<<endl;
}

	return 0;
}
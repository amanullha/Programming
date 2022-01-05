#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define U unsigned int
#define M 100000008
#define sz 10000007
#define tc(cn) pf("Case %d: ",cn)
//#define c cin>>
//#define co cout<<

using namespace std;

bool isprime[M + 5];
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
	sieve_of_eratosthenes();
	ll n;
	while (sf("%lld",&n) && n)
	{
		double 	idx =upper_bound(prime.begin(), prime.end(), n) - prime.begin();
		//cout<<endl<<n<< "  idx : "<<idx<<endl;
		

		double result, x = n;
		result = double(x) / log(double(x));
		result = abs(result - idx);
		result /= idx;
		result *= 100;
		pf("%0.1lf\n", result);
	}




	//pf("\n\n\n\n"); Time();
	return 0;
}

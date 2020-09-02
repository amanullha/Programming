#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define M 10000002
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

ll fac(ll n)
{

	ll c = 0;
	for (ll i = 1; i < (ll)prime.size() && prime[i]<= n/2; i++)
	{
		ll t = n - prime[i];
		if (!isprime[t])c++;
	}

	return c;
}

int main()
{
	fio;
	sieve_of_eratosthenes();
	ll t, tc = 1;
	cin >> t;

	while (t--)
	{
		ll n;
		cin >> n;

		cout << "Case " << tc++ << ": ";
		if (n == 4)cout << "1" << endl;

		else
			cout << fac(n) << endl;
	}


	//pf("\n\n"); Time();
	return 0;
}

#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define M 1000000
#define tc(cn) pf("Case %d: ",cn)
using namespace std;
const ll mod = 1e9 + 7;

bool isprime[M];


ll dp[M];

void sieve_of_eratosthenes()
{
	for (ll i = 2; i * i <= M; i++)
	{
		if (!isprime[i])
		{
			for (ll j = i * i; j <= M; j += i)
				isprime[j] = true;
		}
	}
}

long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

ll f(ll n)
{
	if (n == 0)return 0;
	if (dp[n])return dp[n];

	if (!isprime[n])
	{
		return dp[n] = 1 + (f(n - 1) % mod);
	}
	else
	{
		ll x = binpow(2, n, mod);
		return dp[n] = (x % mod + f(n - 1) % mod) % mod;
	}
}



int main()
{
	int t;
	//cin >> t;
	scanf("%d",&t);

	sieve_of_eratosthenes();
	dp[0] = 0;
	dp[1] = 2;
	while (t--)
	{
		ll n;
		sn(n);

		//cin >> n;
		//cout<<n<<"  : ";
		pf("%lld\n",f(n));
		//cout << f(n+1) << endl;
	}



	return 0;
}

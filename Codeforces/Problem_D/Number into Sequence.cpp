#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

#define M 10000007
#define sz 10000007
#define pr pair<ll,ll>
//#define c cin>>
//#define co cout<<

using namespace std;
inline void Time() { cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s. \n";}

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

void factor(ll &val, ll &count_val, ll n)
{
	
	for (ll i = 0; prime[i]*prime[i] <= n && i < (ll)prime.size(); i++)
	{
		if (n % prime[i] == 0)
		{
			ll count = 0;
			while (n % prime[i] == 0)
			{
				count++;
				n /= prime[i];
			}
			if (count > count_val)
			{
				count_val = count;
				val = prime[i];
			}
		}
	}

	if (n > 1)
	{
		if (count_val < 1)
		{
			count_val = 1;
			val = n;
		}
	}
}


void solve()
{
	ll n;
	//sn(n);
	cin >> n;

	ll val, count_val = -5;

	factor(val, count_val, n);


	if (count_val != 1)
	{
		cout<<count_val<<endl;
		ll x=1;
		for (ll i = 0; i < count_val - 1; i++)
		{
			cout << val << " ";
			x*=val;
		}
		cout << n / x << endl;

	}
	else cout << 1 << endl << n << endl;

}

int main()
{
	sieve_of_eratosthenes();
	int t;
	cin >> t;
	while (t--)solve();

	//pf("\n\n\n\n"); Time();
	return 0;
}

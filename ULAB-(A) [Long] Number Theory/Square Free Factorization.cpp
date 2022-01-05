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
#define tc(cn) pf("Case %d: ",cn)

using namespace std;
inline void Time() { cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s. \n";}

bool isp[M];
std::vector<int>primes;


void Prime_sieve()
{
	for (int i = 3; i*i< M; i++)
	{
		if (!isp[i])
		{
			for (int j = i+i; j < M; j += i)isp[j] = 1;
		}
	}
	primes.pb(2);
	for (int i = 3; i < M; i += 2)
	{
		if (!isp[i])primes.pb(i);
	}
}

int factor(int n)
{
	int mx = INT_MIN;
	for (int i = 0; i < (int)primes.size() && primes[i]*primes[i] <= n; i++)
	{
		if (n % primes[i] == 0)
		{
			int count = 0;

			while (n % primes[i] == 0)n /= primes[i], count++;
			mx = max(mx, count);
		}
	}
	if (n > 1)mx = max(mx, 1);
	return mx;
}

void solve()
{

int n;
cin>>n;
cout<<factor(n)<<endl;

}

int main()
{
	Prime_sieve();
	int t;
	cin >> t;
	while (t--)solve();




	//pf("\n\n\n\n"); Time();
	return 0;
}

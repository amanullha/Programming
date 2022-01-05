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

ll fib_dp[M];


ll dp_fib(ll n)
{
	if (n < 2)return n;
	if (fib_dp[n] != -1)return fib_dp[n];

	fib_dp[n] = dp_fib(n - 1) + dp_fib(n - 2);

	return fib_dp[n];
}





ll fib(ll n)
{
	if (n < 2)return n;

	return fib(n - 1) + fib(n - 2);
}





int main()
{
	memset(fib_dp, -1, sizeof(fib_dp));

	int n;
	cin >> n;
	cout << dp_fib(n) << endl;

	cout << fib(n) << endl;



	pf("\n"); Time();
	return 0;
}

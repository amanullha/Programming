
#include<bits/stdc++.h>
#define endl                 '\n'
#define ll int
#define MAX 1000006

#define fio 				ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
using namespace std;
inline void Time() { cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s. \n";}



ll dp[MAX];

ll F(ll x, ll p)
{
	if (p <= 1)return 1;
	if (dp[x] != -1)return dp[x];
	ll akarbeshi=1;

	return dp[x] = akarbeshi+ F(p % x, p);
}


void solve()
{
	ll p;
	cin >> p;
	for (ll i = 1; i < p + 5; i++)dp[i] = -1;

	ll ans = 0;
	for (ll i = 1; i < p; i++)
	{
		ans += F(i, p);
		
	}
	 double lala=(double)ans/(p-1);
	 cout<<lala<<endl;

	//printf("0.8lf\n",lala );

}

int main()
{	//fio;
	ll t;
	cin >> t;
	while (t--)
		solve();


	//pf("\n\n\n\n"); Time();
	return 0;
}

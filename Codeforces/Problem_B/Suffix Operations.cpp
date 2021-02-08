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
//#define c cin>>
//#define co cout<<

using namespace std;
inline void Time() { cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s. \n";}



void solve()
{
	ll n;
	cin >> n;

	vector<ll>v;
	ll ans = 0;
	ll xx;
	for (ll i = 0; i < n; i++)
	{
		ll x;
		cin >> x;
		if (i == 0)xx = x;
		else ans += abs(xx - x), xx = x;
		v.pb(x);
	}

	ll final = ans;
	//final-=abs(v[0]-v[1]);
	for (ll i = 1; i < n - 1; i++)
	{
		ll tem = ans;

		tem -= abs(v[i] - v[i - 1]);
		tem -= abs(v[i] - v[i + 1]);
		tem += abs(v[i + 1] - v[i - 1]);

		final = min(final, tem);
	}
	// if fist element equalto second element
	int d1 = abs(v[0] - v[1]);

	// if second last element equalto last element
	int d2 = abs(v[n - 1] - v[n - 2]);

	final = min({final, (ans - d1), (ans - d2)});
	cout << final << endl;

}

int main()
{
	ll t;
	cin >> t;
	while (t--)solve();




	//pf("\n\n\n\n"); Time();
	return 0;
}

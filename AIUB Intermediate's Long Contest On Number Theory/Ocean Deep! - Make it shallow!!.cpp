#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#include <iostream>
#include <string>
//#define mod 131071
#define sz 10000007
#define tc(cn) pf("Case %d: ",cn)


using namespace std;
string es;
inline void Time() { cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s. \n";}
const ll mod = 131071;

ll bix(ll n, ll p)
{
	if(p==0)return 1;
	if(n==1)return 1;
	ll ans = 1;
	while (p)
	{
		if (p & 1)ans = ans * n % mod;
		p = p >> 1;
		n=n*n % mod;
	}
	return ans;
}


int main()
{
	char c;
	while (cin >> c)
	{
		string s = "";
		while (c != '#')
		{

			s += c;
			cin >> c;
		}

		ll ans = 0;
		ll l, len = s.size();
		l = len - 1;

		for (ll i = 0; i < len; i++)
		{
			ans = (ans%mod + ((bix(2, l--)%mod * (s[i] - '0')%mod)) % mod) % mod;
		//cout<<ans<<endl;
		}
		if (ans == 0)
			cout << "YES\n";
		else cout << "NO\n";

	}





	return 0;
}

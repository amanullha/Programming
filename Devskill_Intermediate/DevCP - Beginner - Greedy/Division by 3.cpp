#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long int
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

#define M 2147483648

#define sz 10000007
#define tc(cn) pf("Case %d: ",cn)


using namespace std;


int main()
{
	ll t, ts = 1;
	//cin >> t;
	sn(t);

	while (t--)
	{
		ll l, r, c = 0;
		snn(l, r);
		//cin >> l >> r;
		while (l <= r)
		{
			ll x = (l * (l + 1)) / 2;
			if (x % 3 == 0)c++;
			l++;
		}
		tc(ts++);
		cout << c << endl;

	}

	return 0;
}

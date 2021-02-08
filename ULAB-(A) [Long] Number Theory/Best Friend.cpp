#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

#define M 1000006
#define sz 10000007
#define tc(cn) pf("Case %lld\n",cn)


using namespace std;
ll cs = 1;

ll phi(ll n)
{
	if (n <= 1)return n;
	ll ans = n;
	for (ll i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			while (n % i == 0)n /= i;
			ans -= (ans / i);
		}
	}
	if (n > 1)
	{
		ans -= (ans / n);
	}
	return ans;
}

void solve()
{
	tc(cs++);
	ll n,q;
	snn(n,q);

	vector<pair<ll, ll> >p;

	for (ll i = 1; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			p.pb({i, phi(n / i)});
			if (i * i != n)p.pb({n / i, phi(i)});
		}
	}

	sort(p.begin(), p.end());

	for (ll i = 1; i <(ll) p.size(); i++)
	{
		p[i].second += p[i - 1].second;
	}

	while (q--)
	{
		ll x;
		sn(x);
		ll ans = 0;
		for (ll i = 0; i <(ll) p.size(); i++)
		{
			if (p[i].first > x)break;
			ans = p[i].second;

		}
		cout << ans << endl;
	}


}

int main()
{

	ll t;
	sn(t);
	while (t--)solve();
	

	return 0;
}


/*
#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

#define M 1000006
#define sz 10000007
#define tc(cn) pf("Case %lld\n",cn)


using namespace std;
ll cs = 1;

ll phi(ll n)
{
	if (n <= 1)return n;
	ll ans = n;
	for (ll i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			while (n % i == 0)n /= i;
			ans -= (ans / i);
		}
	}
	if (n > 1)
	{
		ans -= (ans / n);
	}
	return ans;
}

void solve()
{
	tc(cs++);
	ll n,q;
	snn(n,q);

	map<ll,ll>p;

	for (ll i = 1; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			p[i]=phi(n/i);
			if (i * i != n)p[n/i]=phi(i);
		}
	}

	

	while (q--)
	{
		ll x;
		sn(x);
		ll ans = 0;
		for(auto v:p)
		{
			if(v.first>x)break;
			else ans+=v.second;
		}
		cout << ans << endl;
	}


}

int main()
{

	ll t;
	sn(t);
	while (t--)solve();
	

	return 0;
}
*/
#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long



#define M 1000002
using namespace std;
ll phi(ll n)
{
	if (n == 0)return 0;
	if (n == 1)return 1;
	ll res = n;
	for (ll i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			while (n % i == 0)n /= i;
			res -= (res / i);
		}
	}
	if (n > 1)res -= (res / n);
	return res;
}

void solve(ll n, ll m)
{
	vector<pair<ll, ll>>v;

	for (ll i = 1; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			v.pb(make_pair(i, phi(n / i)));

			if (n / i != i)
			{
				v.pb(make_pair(n / i, phi(i)));
			}

		}
	}

	sort(v.begin(), v.end());
	for (ll i = 1; i < (ll)v.size(); i++)
	{
		v[i].second += v[i - 1].second;
	}
	
	while (m--)
	{
		ll k;
		scanf("%lld", &k);
		ll p=0;

		for(auto x:v)
		{
			if(x.first>k)break;
			p=x.second;

		}
	cout<<p<<endl;
	}

	/*
	while (m--) {
		ll k;
            scanf("%lld", &k);
            int lo = 0, hi = v.size() - 1, pos = -1;
            while (lo <= hi) {
                int mid = (lo + hi) / 2;
                if (v[mid].first <= k) {
                    lo = mid + 1;
                    pos = mid;
                }
                else hi = mid - 1;
            }
            if (pos == -1) puts("0");
            else printf("%lld\n", v[pos].second);
        }
	*/

	
}

int main()
{

	ll t, tc = 1;
	sn(t);
	while (t--)
	{
		ll n, k;
		snn(n, k);

		pf("Case %lld\n", tc++);
		solve(n, k);
	}


	return 0;
}
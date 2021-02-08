#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long int
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

using namespace std;

void solve()
{
	ll n, w;
	cin >> n >> w;
	vector<pair<ll, ll> >p;

	for (ll i = 1; i <= n; i++)
	{
		ll x;
		cin >> x;

		p.push_back({x, i});
	}

	sort(p.begin(), p.end());



	while (p.size() > 0 && p[p.size() - 1].first > w)p.pop_back();



	for (auto x : p)
	{
		if (x.first >= (w + 1) / 2)
		{
			cout << 1 << '\n' << x.second << "\n";
			return;
		}
	}



	ll sum = 0;
	/*
		for (auto x : p)
		{
			sum += x.first;

		}
		if (sum < (w + 1) / 2)
		{
			cout << "-1\n";
			return;
		}
	*/



	sum = 0;
	vector<ll>ans;
	for (auto x : p)
	{
		ll c = (w + 1) / 2;
		if (sum < c)
		{
			sum += x.first;
			ans.push_back(x.second);
		}
		else if (sum >= c)
		{

			cout << ans.size() << endl;
			for (ll i : ans)cout << i << " ";
			cout << endl;
			return;
		}


	}

	if (sum >= (w + 1) / 2)
	{



		cout << ans.size() << endl;
		for (ll i : ans)cout << i << " ";
		cout << endl;
		return;
	}
	//cout << w << " " << sum << endl;
	cout << "-1" << endl;

}

int main()
{

	ll t;
	cin >> t;
	while (t--)
		solve();



	return 0;
}

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int tc = 1;
ll dig(ll n)
{
	string s = to_string(n);
	cout << s.size() << endl;
	return s.size();
}


void solve()
{
	ll n;
	cin >> n;
	vector<ll>v(n);
	for (ll &x : v)cin >> x;


	ll c = 0;
	for (ll i = 1; i < n; i++)
	{
		ll vi = v[i];
		ll age = v[i - 1];

		if (age >= vi)
		{
			string ag = to_string(age);
			string po = to_string(vi);

			ll agz = ag.size();

			while (po.size() != agz)po += '0';


			bool equal = 1;
			for (ll i = 0; i < agz; i++)
			{
				if (ag[i] != po[i])
				{
					equal = 0;
					break;
				}
			}
			if (equal)
			{
				po += '0';
				v[i] = stoi(po);
				continue;
			}

		}

	}


	for (ll x : v)cout << x << " ";
	cout << endl;
	cout << "Case #: ";
	cout << c << endl;

}

int main()
{

	int t;
	cin >> t;
	while (t--)solve();

	return 0;
}
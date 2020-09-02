#include <bits/stdc++.h>
#define ll long long
#define quick ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
ll Upper_b(ll &s, vector<ll> &v, ll &targate_val)
{
	ll L = s, R = v.size(), M;

	while (L < R)
	{
		M = L + (R - L) / 2;
		if (v[M] <= targate_val)L = M + 1;
		else R = M;
	}
	return L;
}

ll Lower_b(ll &s, vector<ll> &v, ll  &targate_val)
{
	ll L = s, R = v.size(), M;

	while (L < R)
	{
		M = L + (R - L) / 2;
		if (v[M] < targate_val)L = M + 1;
		else R = M;
	}
	return L;
}


int main()
{
	quick;
	string s;
	ll k;
	cin >> k >> s;
	ll l = s.length();
	vector<ll>v;
	ll one = 0;
	ll z=0;

	for (ll i = 0; i < l; i++)
	{
		if (s[i] == '1')
		{
			one++; v.push_back(one);
		}
		else {z++;v.push_back(one);}

	}
	if(z==(ll)s.size()){

		printf("%lf\n",pow(2,z)-1);
		return 0;
	}

	//for (int i = 1; i <l; i++)
	//{
	//	v[i] += v[i - 1];
	//}
	//for(int x:v)cout<<x<<"  ";
	//	cout<<endl;

	ll count = 0;
	for (ll i = 0; i < l; i++)
	{
		if (s[i] == '1')
		{

			ll x = k - 1 + v[i];
			count += (Upper_b(i, v, x) - Lower_b(i, v, x));

			//cout<<"1 :"<<xx-yy<<"   x "<<x<<endl;
			//cout<<"u "<<xx<<" l "<<yy<<endl;

		}
		else
		{
			ll x = k + v[i];
			count += (Upper_b(i, v, x) - Lower_b(i, v, x));

			//cout<<"0 :"<<xx-yy<<"   x "<<x<<endl;
			//cout<<"u "<<xx<<" l "<<yy<<endl;

		}

		//cout<<endl;
	}
	cout << count << endl;

	return 0;
}
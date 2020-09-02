
#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

using namespace std;

void Marge_Left_and_Right(vector<ll>& v, ll l, ll mid, ll r)
{



	ll temp_size = r - l + 1;

	vector<ll>temp(temp_size);

	ll i = l;
	ll j = mid + 1;
	ll k = 0;
	while (i <= mid && j <= r)
	{
		if (v[i] < v[j])temp[k++] = v[i++];
		else temp[k++] = v[j++];
	}
	while (i <= mid)temp[k++] = v[i++];
	while (j <= r)temp[k++] = v[j++];

	for (ll i = l, j = 0; i <= r; i++)
	{
		v[i] = temp[j++];
	}

}


void Marge_sort(vector<ll>& v, ll l, ll r)
{
	if (l >= r)return;

	ll mid = l + (r - l) / 2;

	Marge_sort(v, l, mid);
	Marge_sort(v, mid + 1, r);

	Marge_Left_and_Right(v, l, mid, r);
}


int main()
{

	ll n, q;

	snn(n, q);
	vector<ll>v;
	while (n--)
	{
		ll p;

		sn(p);
		v.pb(p);
	}

	while (q--)
	{
		ll l, r, k;

		snnn(l, r, k);

		l -= 1;
		r -= 1;
		k -= 1;
		vector<ll>vv;
		vv = v;
		Marge_sort(vv, l, r);


		pf("%lld\n", vv[l + k]);


	}

	return 0;
}














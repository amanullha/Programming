#include<bits/stdc++.h>
#define pb push_back
#define ll long long

using namespace std;




ll cal(ll i, ll j,ll n,ll v[])
{
	if (i > j || i < 0 || j < 0 || i > n || j > n)return 0;
	//cout << "i " << i << " j " << j << "  sum " ;
	ll sum = 0;
	for (int st = i; st <= j; st++)
	{
		sum += v[st];

	}
	return sum;
	//cout<< sum << endl;
}


ll re(ll l, ll r,ll &sum,ll n,ll v[])
{
	if (l > r )return 0;

	sum+=cal(l, r,n,v);
	ll m = (l + r) / 2;
	re(l,m, sum,n, v);
	re(m+1,r, sum,n, v);



}



int main()
{
	ll n;
	ll v[100000];
	cin >> n;
	


	for (ll i = 0; i < n; i++)
	{
		cin >> v[i];

	}
	ll sum = 0;
	sort(v, v + n);
	re(0, n - 1, sum,n, v);

	cout << sum << endl;




	return 0;
}
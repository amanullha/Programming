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
using namespace std;


void solve()
{
	ll n, q;
	//cin >> n >> q;
	snn(n, q);
	//vector<int>v(n + 1);
	ll v[n + 1];
	for (ll i = 1; i <= n; i++)cin >> v[i];

	ll len = n;
	for (ll i = 2; i <= n; i++)
	{
		if (v[i] == v[i - 1])len--;
	}
	//cout << "len : " << len << endl << endl;
	while (q--)
	{
		ll idx, val;
		snn(idx, val);		//cin >> idx >> val;
		//cout << "idx : " << idx << "  val : " << val << endl << endl;

		if ( idx - 1 >= 1 && v[idx] == v[idx - 1] && v[idx - 1] != val)
		{
			len++;
			//cout << "1 len: " << len << endl;
		}
		if (idx + 1 <= n && idx <= n && v[idx] == v[idx + 1] && v[idx + 1] != val)
		{
			len++;
			//cout << "2 len: " << len << endl;
		}

		if (idx - 1 >= 1 && v[idx] != v[idx - 1] && v[idx - 1] == val)
		{
			len--;
			//cout << "3 len: " << len << endl;
		}
		if (idx + 1 <= n &&  v[idx] != v[idx + 1] && v[idx + 1] == val)
		{
			len--;
			//cout << "4 len: " << len << endl;
		}

		v[idx] = val;

		//cout << "flen : ";
		pf("%lld\n", len);

	}


}

int main()
{

	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}



	return 0;
}

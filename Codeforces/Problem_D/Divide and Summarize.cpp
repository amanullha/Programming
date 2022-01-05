#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

#define M 100005
#define sz 10000007
#define tc(cn) pf("Case %d: ",cn)
//#define c cin>>
//#define co cout<<

using namespace std;
inline void Time() { cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s. \n";}

vector<ll>v(M, 0);

unordered_map<ll , bool>un;

void clr(ll n)
{
	for (ll i = 0; i < n + 2; i++)v[i] = 0;
	un.clear();

}

void divide(ll i, ll j)
{
	ll sum = 0;

	for (ll ii = i; ii <= j; ii++) sum += v[ii];

	un[sum] = true;

	ll mid = (v[i] + v[j]) / 2;

	int pos = -1;

	for (int ii = i; ii <= j; ii++)
	{
		if (v[ii] <= mid)pos = ii;
		else break;
	}
	if (pos == j || pos == -1)return;

	if (i <= pos)
	{
		divide(i, pos);
	}

	if (pos + 1 <= j)
	{
		divide(pos + 1, j);
	}
}
void solve()
{
	ll n, q;
	cin >> n >> q;
	clr(n);
	for (ll i = 1; i <= n; i++)cin >> v[i];

	sort(v.begin(), v.begin() + n + 1);

	divide(1, n);

	while (q--)
	{
		ll x;
		cin >> x;
		if (un[x])
			cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--)solve();

	return 0;
}

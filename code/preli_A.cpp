#include<bits/stdc++.h>
#define endl                 '\n'
#define ll                  long long int
#define M 					1000000007
#define MX                 	10000007
#define fio 				ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
using namespace std;

int tt = 1;


void solve()
{
	ll n;
	cin >> n;
	vector<ll>v;
	while (n--)
	{
		ll x;
		cin >> x;
		v.push_back(x);
	}

	sort(v.begin(), v.end());

	cout << "Case " << tt++ << ": ";

	cout << v[0]*v[v.size() - 1] << endl;
}

int main()
{


	int t;
	cin >> t;
	while (t--)solve();

	return 0;
}

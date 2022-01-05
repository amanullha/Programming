#include<bits/stdc++.h>
#define endl                 '\n'
#define ff 					first
#define ss					second
#define pb 					push_back
#define mk 					make_pair
#define ll 					long long
#define VI              	vector<long long>
#define pr 					pair<long long,long long>
#define all(x)              (x).begin(), (x).end()
#define M 					150
#define fio 				ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
using namespace std;



ll parent[M];
ll n, tt = 1;
int ans;


void ini()
{
	for (ll i = 0; i < n; i++)parent[i] = i;
}


ll find_parent(ll child)
{
	if (child == parent[child])return child;
	else return parent[child] = find_parent(parent[child]);
}

void connect(ll u, ll v)
{
	u = find_parent(u);
	v = find_parent(v);

	if (u != v)parent[u] = v, ans--;
}


void solve()
{

	string s;
	getline(cin, s);
	n = s[0] - 'A' + 1;

	ans = n;
	ini();

	while (getline(cin, s) )
	{
		if ( s.empty()) break;

		int x = s[0] - 'A';
		int y = s[1] - 'A';

		connect(x, y);
	}

	if (tt++ != 1) cout<<endl;
	cout<<ans<<endl;


}

int main()
{
	int t;
	scanf("%d\n\n", &t);
	while (t--)

		solve();
	return 0;
}

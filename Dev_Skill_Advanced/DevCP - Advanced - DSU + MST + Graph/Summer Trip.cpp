#include<bits/stdc++.h>
#define endl                 '\n'
#define ff 					first
#define ss					second
#define pb 					push_back
#define ll 					long long
#define all(x)              (x).begin(), (x).end()
#define M 					1111
#define fio 				ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
using namespace std;

int parent[M];
int tt = 1;
void ini(int n)
{
	for (int i = 0; i < n + 5; i++)parent[i] = i;
}
int find_parent(int u)
{
	if (parent[u] == u)return u;

	else return parent[u] = find_parent(parent[u]);
}

void connect(ll u, ll v)
{
	u = find_parent(u);
	v = find_parent(v);
	if (v > u)swap(u, v);

	if (u != v)parent[u] = v;
}


void solve()
{
	int n, m;
	cin >> n >> m;
	vector<int>v(n + 1);
	for (int i = 1; i <= n; i++)cin >> v[i];
	ini(n);
	while (m--)
	{
		int u, v;
		cin >> u >> v;
		connect(u, v);
	}
	//for (int i = 1; i <= n; i++)find_parent(i);
	unordered_map<int, int>mp;
	for (int i = 1; i <= n; i++)
	{
		int p = parent[i];
		mp[p] += v[i];

	}
	cout << "Case " << tt++ << ": ";
	cout << mp.size() << endl;
	vector<int>ans;
	for (auto x : mp)
	{
		if (x.ss)ans.pb(x.ss);
	}
	sort(all(ans));

	for (int x : ans)cout << x << " ";
	cout << endl;


}

int main()
{	//fio;


	int t;
	cin >> t;
	//sf1(t);
	while (t--)solve();


	//pf("\n\n\n\n"); Time();
	return 0;
}

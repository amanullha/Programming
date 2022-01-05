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
#define M 					201000
#define fio 				ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
using namespace std;

ll parent[M];
ll node, edge;

void ini()
{
	for (ll i = 0; i < node + 5; i++)parent[i] = i;
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

	if (u == v)return;

	if (v > u)swap(v, u);
	parent[u] = v;
}



void solve()
{

	cin >> node >> edge;

	ini();

	unordered_map<int, int>all;
	unordered_map<int, vector<int>>un;

	while (edge--)
	{
		ll u, v;
		cin >> u >> v;

		u--, v--;

		connect(u, v);

		all[v]++;
		all[u]++;
	}

	ll c = 0;


	for (int i = 0; i < node; i++)
	{
		un[find_parent(i)].pb(i);
	}

	for (auto x : un)
	{
		int cc = 0;

		for (int ch : x.second)
		{
			if (all[ch] == 2)cc++;
			else break;
		}
		if ((int)x.second.size() == cc)c++;
	}

	cout << c << endl;
}

int main()
{

	solve();
	return 0;
}





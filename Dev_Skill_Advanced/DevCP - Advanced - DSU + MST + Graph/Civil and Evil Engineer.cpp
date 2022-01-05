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
ll node, tt = 1;


struct edges
{
	ll u, v, w;
	edges(ll _u, ll _v, ll _w)
	{
		u = _u;
		v = _v;
		w = _w;
	}
	/*
	bool operator < (const edges& p) const
    {
        return w<p.w;
    }
    */
};

bool comp(edges a, edges b)
{
	return a.w < b.w;
}

void ini()
{
	for (ll i = 0; i < node + 1; i++)parent[i] = i;
}


ll find_parent(ll child)
{
	if (child == parent[child])return child;
	else return find_parent(parent[child]);
}

void connect(ll u, ll v)
{
	u = find_parent(u);
	v = find_parent(v);

	if (u != v)parent[v] = u;
}

ll MST(vector<edges> &g, bool dis)
{

	ini();

	sort(g.begin(), g.end(), comp);

	if (dis)
		reverse(g.begin(), g.end());


	ll minimum_value = 0;
	ll tree = 0;
	for (auto x : g)
	{
		ll u = find_parent(x.u);
		ll v = find_parent(x.v);

		if (u != v)
		{
			connect(u, v);

			tree++;

			minimum_value += x.w;

			if (tree == node)break;
		}
	}
	return minimum_value;

}


void solve()
{

	cin >> node;

	vector<edges>g;
	ll u, v, w;

	while (cin >> u >> v >> w)
	{
		if (u + v + w == 0)break;

		g.pb(edges(u, v, w));
	}


	ll mst = MST(g, 0);
	mst += MST(g, 1);


	cout << "Case " << tt++ << ": ";
	if (mst & 1)cout << mst << "/2" << endl;
	else cout << mst / 2 << endl;

}

int main()
{
	int t;
	cin >> t;
	while (t--)

		solve();
	return 0;
}


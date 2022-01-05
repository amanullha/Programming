
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
#define M 					10000007
#define fio 				ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
using namespace std;



ll parent[M];
ll node, edg;


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
alternative of the struct we can use pair of pair
like..
		vector<pr<pr>>g
*/
};

bool comp(edges a, edges b)
{
	return a.w < b.w;
	/*
	 a.w<b.w -> it will calculate Minimum Spenning Tree(MST)
	 a.w>b.w -> it will calculate Maximum Spenning Tree(MST)
	*/
}

void ini(ll n)
{
	for (ll i = 0; i < n; i++)parent[i] = i;
}


ll find_parent(ll child)
{
	if (child == parent[child])return child;
	else return parent[child]=find_parent(parent[child]);
}

void connect(ll u, ll v)
{
	u = find_parent(u);
	v = find_parent(v);
	if (v > u)swap(u, v);

	if (u != v)parent[u] = v;
}


ll MST(vector<edges> &g)
{

	sort(all(g), comp);

	ll minimum_value = 0;
	ll tree = 0;
	for (auto x : g)
	{
		ll u = x.u;
		ll v = x.v;
		ll w = x.w;

		ll u_parent = find_parent(u);
		ll v_parent = find_parent(v);

		if (u_parent != v_parent)
		{
			cout << u << " : " << v << " -> " << w << endl;
			minimum_value += w;
			connect(u, v);
			tree++;

		}
		if (tree == node - 1)break;

	}
	/*
	for (int i = 0; i < node; i++)
	{
		cout << i << " -> " << parent[i] << endl;
	} 
	*/
	return minimum_value;


}


void solve()
{

	cin >> node >> edg;

	vector<edges>g;

	ini(node);

	while (edg--)
	{
		ll u, v, w;
		cin >> u >> v >> w;
		g.pb(edges(u, v, w));
	}


	ll mst = MST(g);
	cout <<  "\nMST COST : " << mst << endl;

}

int main()
{

//fio;

	solve();
	return 0;
}

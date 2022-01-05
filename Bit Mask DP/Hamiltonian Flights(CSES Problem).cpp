#include<bits/stdc++.h>
#define endl                 '\n'
#define pb 					push_back
#define ll 					long long
#define VI              	vector<long long>
#define M 					20
#define MOD 				1000000007
#define fio 				ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
using namespace std;


ll PC(ll n) {return __builtin_popcount(n);}
bool ON(ll n, ll i) {return n & (1 << i);}
void SET(ll &n, ll i) {n |= (1 << i);}
void UNSET(ll &n, ll i) {n ^= (1 << i);}

ll node, edge;
ll maskk[20][(1 << 20)];

ll dfs(ll u, ll mask, VI G[])
{
	if (PC(mask) == node)return 1;

	else if (u == node - 1)return 0; // 0 indexing
	

	ll &x = maskk[u][mask];

	if (x != -1)return x;


	ll count = 0;

	for (ll v : G[u])
	{
		if (!ON(mask, v))
		{
			/*
			count =(count+dfs(v, mask | (1<<v) , G))%MOD;
			*/

			SET(mask, v);
			
			count =(count+dfs(v, mask , G))%MOD;

			UNSET(mask, v);
		}
	}

	return x = count;
}

void solve()
{

	cin >> node >> edge;

	VI G[node];

	memset(maskk, -1, sizeof maskk);

	while (edge--)
	{
		ll u, v;

		cin >> u >> v;
		u--, v--; // zero (0) indexing

		G[u].pb(v);
	}

	cout << dfs(0, (1 << 0), G) << endl;
}

int main()
{

//fio;

	solve();

	return 0;
}

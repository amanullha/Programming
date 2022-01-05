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
#define M 					100000+500
#define fio 				ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
using namespace std;

int parent[M];
int n, m, q;

unordered_map<int, int>un;

void ini()
{
	for (int i = 0; i < n + 5; i++)parent[i] = i, un[i] = 1;
}

int find_parent(int u)
{
	if (parent[u] == u)return u;

	else return parent[u] = find_parent(parent[u]);
}

void connect(int u, int v)
{
	u = find_parent(u);
	v = find_parent(v);

	if (v > u)swap(u, v);
	if (u != v)
	{
		int x = un[parent[u]];
		un[v] += x;
		un[parent[u]] = 0;
		parent[u] = v;

	}
}


void solve()
{
	cin >> n >> m >> q;
	ini();

	while (q--)
	{
		char dis;
		cin >> dis;

		if (dis == 'A')
		{
			int x, y;
			cin >> x >> y;

			int pp = find_parent(x);
			int ppy = find_parent(y);

			if (un[pp] + un[ppy] <= m)
			{
				connect(x, y);
			}

		}
		else if (dis == 'E')
		{
			int x, y;
			cin >> x >> y;

			if (find_parent(x) == find_parent(y))cout << "Yes" << endl;
			else cout << "No" << endl;
		}
		else
		{
			int x;
			cin >> x;
			x = find_parent(x);
			cout << un[x] << endl;
		}
	}

}

int main()
{
	solve();
	return 0;
}

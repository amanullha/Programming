#include<bits/stdc++.h>
#define endl                 '\n'
#define ff 					first
#define ss					second
#define pb 					push_back
#define all(x)              (x).begin(), (x).end()
#define M 					100000+500
#define fio 				ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
using namespace std;


int parent[M];
int node, edge;

unordered_map<int, int>un;
multiset<int>s;

void ini()
{
	for (int i = 0; i < node; i++)
	{
		parent[i] = i;
		un[i] = 1;
		s.insert(1);
	}
}

int find_parent(int child)
{
	if (parent[child] == child)return child;
	else return parent[child] = find_parent(parent[child]);
}


void connect(int u, int v)
{

	u = find_parent(u);
	v = find_parent(v);

	if (u == v)return;

	if (v > u)swap(u, v);

	s.erase(s.find(un[u]));
	s.erase(s.find(un[v]));

	un[v]+=un[u];
	un[u]=0;

	s.insert(un[v]);

	parent[u] = v;
}

void solve()
{
	cin >> node >> edge;

	ini();

	while (edge--)
	{
		int u, v;
		cin >> u >> v;
		u--, v--;

		connect(u,v);

        cout<< *--s.end()-*s.begin()<<endl;
        
	}
}


int main()
{

//fio;
	solve();
	return 0;
}
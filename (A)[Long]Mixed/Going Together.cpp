#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define M 15
#define sz 10000007
#define tc(cn) pf("Case %d: ",cn)
using namespace std;

char g[M][M];
int ai, aj, bi, bj, ci, cj, n;
vector<pair<int, int>>ex;

int move_i[] = { -1, +1, 0, 0};
int move_j[] = {0, 0, -1, +1};


int bfs(int ii, int jj)
{
	int vis[M][M];
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < M; j++)
		{
			vis[i][j] = 0;
		}
	}

	queue<pair<int, int>>q;
	vis[ii][jj] = 1;
	q.push({ii, jj});

	while (!q.empty())
	{
		auto x = q.front();
		q.pop();

		int ii = x.first;
		int jj = x.second;

		for (int k = 0; k < 4; k++)
		{
			int ni = ii + move_i[k];
			int nj = jj + move_j[k];


			if (ni >= 0 && ni < n && nj >= 0 && nj < n && vis[ni][nj] == 0 && g[ni][nj] != '#')
			{
				q.push({ni, nj});
				vis[ni][nj] = vis[ii][jj] + 1;
			}

		}





	}

	int minn = INT_MAX;
	for (int i = 0; i < ex.size(); i++)
	{
		int ii = ex[i].first;
		int jj = ex[i].second;
		if (vis[ii][jj] - 1 < minn)minn = vis[ii][jj] - 1;
	}

	if (minn == INT_MAX || minn < 0)return 0;
	else return minn;


}




int main()
{
	int  t, ts = 1;
	cin >> t;
	while (t--)
	{

		cin >> n;
		for (int i = 0; i < M; i++)
		{
			for (int j = 0; j < n; j++)
			{
				g[i][j] = '.';
			}
		}
		ex.clear();

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> g[i][j];

				if (g[i][j] == 'X')ex.push_back({i, j});

				if (g[i][j] == 'A') {ai = i; aj = j;}
				if (g[i][j] == 'B') {bi = i; bj = j;}
				if (g[i][j] == 'C') {ci = i; cj = j;}
			}
		}


		int am = bfs(ai, aj);
		int bm = bfs(bi, bj);
		int cm = bfs(ci, cj);

		//cout << am << " " << bm << " " << cm << endl;

		tc(ts++);
		if (am == 0 || bm == 0 || cm == 0)cout << "trapped" << endl;
		else cout << max(am, max(bm, cm)) << endl;
	}
	return 0;
}
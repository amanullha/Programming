#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define M 102
#define sz 10000007
#define tc(cn) pf("Case %d: ",cn)
using namespace std;

int move_i[8] = { -1, -1, 0, 1, 1, 1, 0, -1};
int move_j[8] = { 0, 1, 1, 1, 0, -1, -1, -1};

bool ans = false;
char g[M][M];
int r, c;
string str = "ALLIZZWELL";

bool vis[M][M];
void clr()
{
	memset(vis , 0, sizeof(vis));
}


void dfs(int i, int j, int p)
{

	if (i >= 0 && i < r && j >= 0 && j < c && str[p] == g[i][j] && vis[i][j] == 0)
	{
		//cout<<str[p]<<"   :   "<<g[i][j]<<"     i : "<<i<<"  j : "<<j<<"   p : "<<p<<endl<<endl;
		if (p == 9)
		{
			ans = true;
			return;
		}

		vis[i][j] = 1;/* i and j tomo index ke visited kore tar shob child gola ke check korte hobe
		je all iss well hoy kinah. jodhi nah hoy tahole i and j ar index ke unvisited korte hobe.
		karon aii i and j tomo index ta onno karo child hote pare . so tai onno parent ra jate aii child ke use korete
		pare tai aii child ar child gola ke check korar por take unvisited kora hise. karon akta index tar ase pares 8 jon parent 
		ar child hote parbe */ 

		for (int k = 0; k < 8; k++)
		{
			int ii = i + move_i[k];
			int jj = j + move_j[k];

			if (ii >= 0 && ii < r && jj >= 0 && jj < c && str[p + 1] == g[ii][jj] && vis[ii][jj] == 0 && p + 1 <= 10)
			{
				if (ans)return;
				dfs(ii, jj, p + 1);
			}
		}
		vis[i][j]=0;

	}


}

int main()
{

	int t;
	cin >> t;
	while (t--)
	{
		cin >> r >> c;
		ans = false;

		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{

				cin >> g[i][j];
			}
		}


		

		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				if (g[i][j] == 'A' )
				{
					
					clr();
					
					dfs(i, j, 0);
					if (ans)break;

				}

			}
		}

		if (ans)cout << "YES\n";
		else
			cout << "NO\n";

	}

	return 0;
}

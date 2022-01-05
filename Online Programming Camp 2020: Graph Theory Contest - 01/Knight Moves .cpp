#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define M 10000007
#define sz 10000007
#define tc(cn) pf("Case %d: ",cn)
using namespace std;

int move_i[] = { -2, -2, -1, +1, -1, +1, +2, +2};
int move_j[] = { -1, +1, -2, -2, +2, +2, -1, +1};

int mx[10][10];

bool valid(int i, int j)
{
	if (i >= 0 && i < 8 && j >= 0 && j < 8)
	{
		//cout << "i : " << i << "  j : " << j << endl;
		return true;
	}
	else return false;
}

void clr()
{
	for (int i = 0; i < 10; i++)

		for (int j = 0; j < 10; j++)
			mx[i][j] = 0;
}

void p()
{
	cout << endl << endl;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			cout << mx[i][j] << " ";
		}
		cout << endl;
	}
}

void dfs(int i, int j)
{


	queue<pair<int, int> >q;

	q.push({i, j});

	while (!q.empty())
	{
		auto x = q.front();
		q.pop();

		i = x.first;
		j = x.second;



		for (int k = 0; k < 8; k++)
		{
			int ni = i + move_i[k];
			int nj = j + move_j[k];

			if (valid(ni, nj) && mx[ni][nj] == 0)
			{
				
				
				mx[ni][nj] = mx[i][j] + 1;
				q.push({ni,nj});
			}
			//p();
		}







	}


}

int main()
{


	char ci, cj;
	int ii, jj;
	while (cin >> ci >> ii >> cj >> jj)
	{
		int si, sj, ei, ej;
		si = ci - 'a' + 1;
		sj = ii;
		ei = cj - 'a' + 1;
		ej = jj;

		clr();
		mx[si - 1][sj - 1] = 1;
		dfs(si - 1, sj - 1);
		cout << "To get from " << ci << ii << " to " << cj << jj << " takes " << (mx[ei - 1][ej - 1])-1 << " knight moves." << endl;





	}




	return 0;
}

#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

#define M 35
#define infinity 1e9
#define tc(cn) pf("Case %d: ",cn)
using namespace std;

int dm, row, column;

char graph[M][M][M];
int dist[M][M][M];


int move_i[] = { -1, 1, 0, 0, 0, 0};
int move_j[] = {0, 0, -1, 1, 0, 0};
int move_k[] = { 0, 0, 0, 0, -1, 1};

struct  threeval
{
	int ii, jj, kk;
	threeval(){}
	threeval(int _ii,int _jj,int _kk)
	{
		ii=_ii;
		jj=_jj;
		kk=_kk;
	}

};


void clr()
{
	for (int i = 0; i < dm; i++)
	{
		for (int j = 0; j < row; j++) 
		{
			for (int k = 0; k < column; k++)
			{
				graph[i][j][k] = -1;
				dist[i][j][k] = infinity;
			}
		}
	}
}



int bfs(int i, int j, int k,int ei,int ej,int ek)
{

	queue<threeval>q;
	q.push(threeval(i, j, k));

	dist[i][j][k] = 0;

	while (!q.empty())
	{
		threeval x = q.front();
		q.pop();

		int ii = x.ii;
		int jj = x.jj;
		int kk = x.kk;

		for (int p = 0; p < 6; p++)
		{
			int ni = ii + move_i[p];
			int nj = jj + move_j[p];
			int nk = kk + move_k[p];

			//if (new_i >= 0 && new_i < row && new_j >= 000 && new_j < column && vist[new_i][new_j] == 0 && dist[new_i][new_j] > dist[ii][jj] + 1)

			if (ni >= 0 && ni < dm && nj >= 0 && nj < row && nk >= 0 && nk < column && graph[ni][nj][nk]!='#' && dist[ni][nj][nk] > dist[ii][jj][kk] + 1)
			{
				
				dist[ni][nj][nk] = dist[ii][jj][kk] + 1;
				q.push(threeval(ni,nj,nk));
			}


		}


	}


return dist[ei][ej][ek];

}




int main()
{
	int c = 1;
	while (1)
	{
		if (c++ > 30)return 0;
		cin >> dm >> row >> column;
		clr();
		//cout << dm << " " << row << " " << column << endl;

		if (dm == 0 && row == 0 && column == 0)break;


		int si, sj, sk, ei, ej, ek;

		for (int i = 0; i < dm; i++)
		{
			for (int j = 0; j < row; j++)
			{
				for (int k = 0; k < column; k++)
				{
					char c;
					cin >> c;
					//cout<<c<<" ";
					if (c == 'S')
					{
						si = i;
						sj = j;
						sk = k;
					}
					else if (c == 'E')
					{
						ei = i;
						ej = j;
						ek = k;
					}

					else graph[i][j][k] = c;


				}
				//cout<<endl;
			}
			//cout<<endl;
		}





		int res=bfs(si, sj, sk,ei,ej,ek);


		if (res ==infinity)
			cout << "Trapped!" << endl;
		else
			cout << "Escaped in " << res << " minute(s)." << endl;








	}

	return 0;
}

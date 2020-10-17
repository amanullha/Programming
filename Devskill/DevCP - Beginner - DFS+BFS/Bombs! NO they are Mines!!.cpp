#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

#define M 1010
#define infinity 1e9
#define pr pair<int,int>
#define tc(cn) pf("Case %d: ",cn)
using namespace std;

int row, column;
bool vist[M][M];
int dist[M][M];

int move_i[] = {0, 0, +1, -1};
int move_j[] = { +1, -1, 0, 0};


void clr()
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			vist[i][j] = false;
			dist[i][j] = infinity;
		}
	}
}

void bfs(int i, int j)
{
	queue<pr>q;
	q.push({i, j});

	vist[i][j] = true;
	dist[i][j] = 0;

	while (!q.empty())
	{
		pr top = q.front();
		q.pop();

		int ii = top.first;
		int jj = top.second;

		for (int x = 0; x < 4; x++)
		{
			int new_i = ii + move_i[x];
			int new_j = jj + move_j[x];


			if (new_i >= 0 && new_i < row && new_j >= 0 && new_j < column && vist[new_i][new_j] == 0 && dist[new_i][new_j] > dist[ii][jj] + 1)
			{
				q.push({new_i, new_j});
				dist[new_i][new_j] = dist[ii][jj] + 1;
			}





		}




	}
}


int main()
{

	while (1)
	{
		cin >> row >> column;
		//cout<<row<<" "<<column<<endl;

		if (row == 0 && column == 0)break;

		clr();

		int boomrow;
		cin >> boomrow;
		//cout<<boomrow<<endl;

		while (boomrow--)
		{
			int boominrow;
			cin >> boominrow;

			int countboom;
			cin >> countboom;
		//	cout<<boominrow<<" "<<countboom<<" ";

			while (countboom--)
			{
				int boomincolumn;
				cin >> boomincolumn;
			//	cout<<boomincolumn<<" ";

				vist[boominrow][boomincolumn] = true;
			}
		//	cout<<endl;
		}
	//	cout<<"\n done \n";
		int start_i, start_j, end_i, end_j;

		cin >> start_i >> start_j;
		cin >> end_i >> end_j;

		//cout<<start_i<<" "<<start_j<<endl;
		//cout<<end_i<<" "<<end_j<<endl;



		bfs(start_i, start_j);
		//cout<<"\n\nans:   ";
		cout << dist[end_i][end_j] << endl;

	}


	return 0;
}

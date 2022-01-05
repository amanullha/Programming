#include<bits/stdc++.h>


using namespace std;


int main()
{
	int t;
	cin >> t;
	while (t--)
	{


		int n, m;
		cin >> n >> m;

		int rs[n][m], cs[m][n];
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> rs[i][j];
			}
		}

		vector<int>col;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> cs[i][j];
				if (i == 0)col.push_back(cs[i][j]);
			}
		}
		vector<int>row;
		for (int k = 0; k < col.size(); k++)
		{

			int x = col[k];
			int idx = -1;

			for (int i = 0; i < n; i++)
			{
				bool f = true;
				for (int j = 0; j < m; j++)
				{
					if (x == rs[i][j])
					{
						f = false;

						idx = i; break;
					}
					if (!f)break;
				}
			}
			row.push_back(idx);


		}
		for (int j = 0; j < row.size(); j++)
		{
			int x = row[j];

			for (int i = 0; i < m; i++)
			{
				cout << rs[x][i] << " ";
			}
			cout << endl;


		}


	}
	return 0;
}

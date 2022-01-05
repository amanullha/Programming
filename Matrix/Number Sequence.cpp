/*
 *************** BISMILLAH HIR RAHMANIR RAHIM ***************

     AUTHOR: MD.AMANULLHA
     UNIVERSITY OF LIBERAL ARTS BANGLADESH
     DATE: / / 2021
*/
#include<bits/stdc++.h>
#define endl                 '\n'
#define ll 					long long
#define VI              	vector<long long>
#define pr 					pair<long long,long long>
#define M 					10000007
#define INF                 2147483647
#define fio 				ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
using namespace std;
#define Mat_type			int

class Matrix {

public:

	int M_row, M_col;
	int MOD = 10000;
	vector<vector<Mat_type> > mat;

	Matrix(int _M_row, int _M_col)
	{
		M_row = _M_row;
		M_col = _M_col;

		mat.clear();
		mat.resize(M_row, vector<Mat_type>(M_col, 0));

		if (M_row == M_col) //identity matrix
		{
			for (int i = 0; i < M_row; i++)
				mat[i][i] = 1;
		}
	}

	Matrix operator* (const Matrix& other)// '*' operator overloading
	{
		int n_r = M_row;
		int n_c = other.M_col;

		Matrix new_mat(n_r, n_c);

		for (int i = 0; i < n_r; i++)
		{

			for (int j = 0; j < n_c; j++)
			{
				int sum = 0;
				for (int k = 0; k < M_col; k++)
				{
					sum += (mat[i][k] * other.mat[k][j])%MOD;
					if (sum >= MOD)sum %= MOD;
				}
				new_mat.mat[i][j] = sum;
			}

		}
		return new_mat;
	}
	Matrix operator^(ll p)// mat^p
	{
		Matrix res(M_row, M_col);
		Matrix x = *this; //copy current obj(matrix)

		while (p)
		{
			if (p & 1)res = res * x;
			p /= 2;
			x = x * x;
		}
		return res;
	}

	void print()
	{
		for (int i = 0; i < (int)M_row; i++)
		{
			for (int j = 0; j < (int)M_col; j++)
			{
				cout << mat[i][j] << " ";
			}
			cout << endl;
		}
	}

};

int last[] = {0, 10, 100, 1000, 10000};

int main()
{
    int t, cs = 1;
    scanf("%d", &t);
    while(t--)
    {
        int a, b, n, m;
        scanf("%d %d %d %d", &a, &b, &n, &m);
        Matrix ma(2, 2), mb(2, 1);
        ma.mat[0][1] = 1;
        ma.mat[0][0] = 1;
        ma.mat[1][0] = 1;
        ma.mat[1][1] = 0;

        mb.mat[0][0] = b;
        mb.mat[1][0] = a;

        Matrix mc = (ma ^ (n - 1)) * mb;
        printf("Case %d: %d\n",cs++, mc.mat[0][0] % last[m]);
    }
    return 0;
}





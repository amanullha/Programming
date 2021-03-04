#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

#define M 100
#define sz 10000007
#define tc(cn) pf("Case %d: ",cn)
using namespace std;
inline void Time() { cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s. \n";}

int board[M][M];
int n;

void Print_board()
{

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << board[i][j] << " ";
		}
		puts("");
	}
	puts("");
}
bool Is_safe_for_set_Qeen(int row, int col)
{

	// check column sell right to left to fixed row for is there have a qeen or not?

	for (int i = col; i >= 0; i--)
	{
		if (board[row][i] == 1)return false; // if is have a qeen
	}


	// check upper diagonal sell right to left for is there have a qeen or not?

	for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
	{
		if (board[i][j] == 1)return false; // if is have a qeen
	}


	// check down diagonal sell right to left for is there have a qeen or not?

	for (int i = row, j = col; i < n && j >= 0; i++, j--)
	{
		if (board[i][j] == 1)return false; // if is have a qeen
	}


	// if all sell before row and col sell have not any qeen?
	return true;
}


void Set_Qeen_with_backtrak(int column)
{
	//Print_board();


	if (column >= n)
	{
		// Got a valid solution !
		//cout << "\nValid\n";
		Print_board();
		return;
	}

	for (int row = 0; row < n; row++)
	{
		if (Is_safe_for_set_Qeen(row, column))
		{
			board[row][column] = 1;
			Set_Qeen_with_backtrak(column + 1);

			board[row][column] = 0;
		}
	}

}



int main()
{
	cin >> n;
	cout << n << endl;
	memset(board, 0, sizeof(board));

	int starting_column = 0;

	Set_Qeen_with_backtrak(starting_column);



	//pf("\n\n\n\n"); Time();
	return 0;
}

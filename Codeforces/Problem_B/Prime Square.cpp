/*
-------------------------------------- بسم الله الرحمن الرحيم -----------------------------------------------

                    Author          : Md. Aman-ullha
                    University      : University of Liberal Arts Bangladesh
                    Date            : 26 Oct,2020;

*/

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

bool isp(int n)
{
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)return false;
	}
	return true;
}


int prime(int n)
{
	while (isp(n) != true)n++;
	return n;

}

void f()
{
	int t;
	cin >> t;
	int ar[105][105];

	while (t--)
	{

		for (int i = 0; i < 102; i++)
		{
			for (int j = 0; j < 102; j++)
			{
				ar[i][j] = 0;

			}
		}
		int n;
		cin >> n;

		for (int i = 0; i < n; i++)
		{
			for (int j = i; j < i + 2; j++)
			{
				ar[i][j % n] = 1;
			}
		}




		for (int i = 0; i < n; i++)
		{
			int x = 0;
			for (int j = 0; j < n; j++)
			{
				x += ar[i][j];
				cout << ar[i][j] << " ";


			}
			//if(isp(x)==false)cout<<endl<<"no p : "<<i<<endl;
			//if (isp(x))cout << " P";
			puts("");

		}

	}
}


int main()
{



	int t;
	cin >> t;
	int ar[105][105];

	while (t--)
	{
		int n;
		cin >> n;


		for (int i = 0; i < 102; i++)
		{
			for (int j = 0; j < 102; j++)
			{
				ar[i][j] = 0;

			}
		}



		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i == j)ar[i][j] = 1;
				//else if (i + j+1 == n)ar[i][j] = 1;
			}
		}
		int x = 0, y = n - 1;
		while (x != n - 1 && y != 0)
		{
			ar[x++][y--] = 1;
		}
		ar[x][y] = 1;
		if (n & 1)
		{
			ar[n-1][(int)n/2]=1;
			ar[(int)n/2][n-1]=1;
		}





		for (int i = 0; i < n; i++)
		{
			int x = 0;
			for (int j = 0; j < n; j++)
			{
				x += ar[i][j];
				cout << ar[i][j] << " ";


			}
			//if(isp(x)==false)cout<<endl<<"no p : "<<i<<endl;
			//	if (isp(x))cout << " P";
			puts("");

		}




	}


	return 0;
}

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

int r, c;


void cal(vector<int>v[], int s, int e)
{
	cout<<"NO"<<endl;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << v[i][j] << "  ";
		}
		cout << endl << endl;
	}

}



int main()
{

	
	cin >> r >> c;
	vector<int> v[r];


	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			char c;
			cin >> c;
			int x;
			if (c == '#')x = 0;
			else x = (c - '#');
			v[i].push_back(x);
		}
	}



	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << v[i][j] << "  ";
		}
		cout << endl << endl;
	}



	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (v[i][j] != 0)
			{
				cout<<"end";
				cal(v, i, j);
			}
		}
	}



	return 0;
}

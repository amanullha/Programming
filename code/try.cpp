#include<bits/stdc++.h>
#define M 10000000
#define ll long long
using namespace std;
vector<char >v[140];

int main()
{

	/*for (char I = 'A'; I <= 'D'; I++)
	{
		v[I].push_back('x');
		cout << I << "   " << (char)I << endl;
		cout << v[I][0] << endl;
	}*/

	int t = 4;

	char a[4], b[4];
	string ss[4];

	for (int i = 0; i < 4; i++)
	{
		cin >> a[i] >> ss[i] >> b[i];

	}




	for (int i = 0; i < 8; i++)
	{

		char p, q;

		string s;
		p = a[i % 4];
		s = ss[i % 4];
		q = b[i % 4];


		if (s == "->")
		{
			v[q].push_back(p);

			for (int j = 0; j < v[p].size(); j++)
			{
				v[q].push_back(v[p][j]);
			}
		}
		else {

			v[p].push_back(q);

			for (int j = 0; j < v[q].size(); j++)
			{
				v[p].push_back(v[q][j]);
			}
		}


	}



	/*cout << endl << endl;
	for (char I = 'A'; I <= 'D'; I++)
	{
		cout << I << " : ";
		for (int i = 0; i < v[I].size(); i++)
		{
			cout << v[I][i] << "  ";

		}
		cout << endl << endl;
	}
*/



	int tc;
	cin >> tc;
	while (tc--) {

		char x, y;
		cin >> x >> y;
		//cout << x << " -> " << y << "  : ";
		bool f = 1;
		for (int i = 0; i < v[y].size(); i++)
		{
			if (v[y][i] == x) {
				cout << "YES" << endl;
				f = 0;
				break;
			}

		}
		if (f)
			cout << "NO" << endl;


	}


	return 0;
}
/*
A -> B
B -> C
C <- D
D <- A
4
A D
A C
D A
B B
*/
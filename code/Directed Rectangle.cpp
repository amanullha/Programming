#include<bits/stdc++.h>
#define M 10000000
#define ll long long
using namespace std;
vector<char >v[140];

int main()
{
	int a;
	cout<<"a is "<<a<<endl;
	/*for (char I = 'A'; I <= 'D'; I++)
	{
		v[I].push_back((char)I);
		cout << I << "   " << (char)I << endl;
		cout << v[I][0] << endl;
	}
	int t = 4;
	while (t--)
	{
		int p, q;
		string s;
		cin >> p >> s >> q;
		cout<<p<<s<<q<<endl;

		if (s == "->")
		{
			v[q].push_back(p);
		}
		else v[p].push_back(q);
	}



cout<<endl<<endl;
	for (char I = 'A'; I <= 'D'; I++)
	{
		cout<<I<<"  ";
		for (int i = 0; i < v[I].size(); i++)
		{
			cout<<v[I][i]<<"  ";

		}
		cout<<endl<<endl;
	}



*/



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
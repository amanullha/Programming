
#include<bits/stdc++.h>
using namespace std;



void solve()
{
	int n;
	cin >> n;

	vector<int>a(n), b(n);

	for (int &i : a)cin >> i;
	for (int &i : b)cin >> i;

	int p = 0, m = 0;

	for (int i = 0; i < n; i++)
	{
		int x = a[i];
		int y = b[i];
		if (x > y)
		{
			m += (x - y);
		}
		else if (y > x)
		{
			p += (y - x);
		}
	}

	if (p != m)
	{
		cout << "-1" << endl;
		return;
	}
	

	vector<pair<int, int> >pp;
	while (a != b)
	{
		int c1 = 0, c2 = 0;
		for (int i = 0; i < n; i++)
		{
			int x = a[i];
			int y = b[i];
			if (x != y & x > y)
			{
				c1 = i;
				break;
			}
		}
		for (int i = 0; i < n; i++)
		{
			int x = a[i];
			int y = b[i];
			if (x != y && i != c1 && y > x)
			{
				c2 = i;
				break;
			}
		}
		pp.push_back({c1 + 1, c2 + 1});
		//cout << c1 + 1 << " " << c2 + 1 << endl;
		a[c1]--;
		a[c2]++;
		//cout << endl;
		//for (int x : a)cout << x << " ";
		//cout << endl;
		//for (int x : b)cout << x << " ";
		//	cout<<endl;

	}
	cout << pp.size() << endl;
	if(pp.size()==0)return;

	for (int i = 0;i<pp.size();i++)
	{
		cout << pp[i].first << " " << pp[i].second << endl;
	}


	if (a != b)
		cout <<"-1"<<endl;

}

int main()
{	//fio;


	int t;
	cin >> t;
	//sf1(t);
	while (t--)solve();


	//pf("\n\n\n\n"); Time();
	return 0;
}

#include<bits/stdc++.h>
#define endl                 '\n'
#define ll                 long long int
#define MOD                1000000007
#define MAX                10000007
using namespace std;


bool find(string t, string p)
{
	int ts = t.size(), ps = p.size();

	int i = 0, j = 0;
	while (j < ps)
	{
		if (t[i] == p[i])i++, j++;
		else i++;

		if (j >= ps)return 1;
	}

	return j >= ps;
}



int main()
{
	int t, ts = 1;
	cin >> t;
	while (t--)
	{
		cout << "Case " << ts++ << ":\n";
		int n;
		cin >> n;
		vector<string>s(n);
		for (string &x : s)cin >> x;
		//for (string x : s)cout << x << endl;
		string p;
		cin >> p;
		bool f = 1;
		for (int i = 1; i < n; i++)
		{
			if (find(s[i], p))
			{
				f = 0;
				cout << i + 1 << " ";
			}
		}
		if (f)cout << "No files found!" << endl;

cout<<endl;
	}






	return 0;
}

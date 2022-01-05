#include<bits/stdc++.h>
#define cp_io ios_base::sync_with_stdio(0);cin.tie(0)
#define M 1000002
#define ll long long
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s, cs = "";
		cin >> s;
		cs = s[0];
		for (int i = 1; i < s.size(); i += 2)
		{
			cs += s[i];
		}








		//cout << s << endl;

		cout << cs << endl;


	}


	return 0;
}
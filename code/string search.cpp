#include<bits/stdc++.h>
#define cp_io ios_base::sync_with_stdio(0);cin.tie(0)
#define M 1000002
#define ll long long
using namespace std;

int main()
{
	cp_io;

	string s, p, cs = "";
	cin >> s >> p;
	if (s.size() >= p.size()) {
		int l=p.size();
		l-=2;
		
		for (int i = 0 i < s.size(); i++)
		{

			cs += s[i];
			if(i>l)
			{
				
			}



			cs.erase(cs.begin());

			if (cs == p)cout << i - 1 << endl;

		}
	}


	return 0;
}

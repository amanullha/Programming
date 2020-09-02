#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s, p;
	cin >> s >> p;


	vector<int>ans;
	vector<int>ph(26, 0);
	vector <int>sh(26, 0);

	int i = 0;
	for (i = 0; i < p.size(); i++)
	{
		ph[p[i] - 'a']++;
		sh[s[i] - 'a']++;
	}
	if (ph == sh)ans.push_back(0);


	int l = 1, r = i-1;



	while (r < s.size()) {

		sh[s[r]-'a']++;
		sh[s[l-1]-'a']--;
		if(sh==ph)ans.push_back(l);
		l++;
		r++;

	}
	for (int x : ans)cout << x << "  ";


	return 0;
}
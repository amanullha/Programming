#include <bits/stdc++.h>
using namespace std;

int randomfunc(int j)
{
	return rand() % j;
}

int main()
{
	srand(unsigned(time(0)));
	vector<string> arr;

	for (int j = 1; j < 10; ++j)

	{
		string s;
		getline(cin, s);
		arr.push_back(s);
	}

	random_shuffle(arr.begin(), arr.end());

	random_shuffle(arr.begin(), arr.end(), randomfunc);

	int team = 1, t = 0;
	for (auto i = arr.begin(); i != arr.end(); ++i)
	{
		if(t%3==0)cout<<"\n\nTeam : "<<team++<<endl;
		cout << ' ' << *i << endl;
		t++;
	}
	cout << endl;

	return 0;
}

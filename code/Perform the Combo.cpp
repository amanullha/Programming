#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int a, b;
	cin >> a >> b;

	vector<int>ar(a);
	vector<bool>v(a, 0);
	for (int i = 0; i < a; i++)
	{
		cin >> ar[i];
	}
	while (b--)
	{
		int x;
		cin >> x;

		v[x - 1] = true;
		v[x] = true;

	}
	vector<int>al;
	al = ar;
	sort(al.begin(), al.end());
	bool f = 1;
	for (int i = 0; i < a; i++)
	{
		if (al[i] != ar[i] && v[i] == false) {cout << "NO"<<endl; f = 0; break;}
	}
	if (f)
		cout << "YES" << endl;


}
int main()
{

	int t;

	cin >> t;
	while (t--)solve();
	return 0;
}

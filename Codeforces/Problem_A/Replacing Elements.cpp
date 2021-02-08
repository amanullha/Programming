
#include<bits/stdc++.h>

using namespace std;
inline void Time() { cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s. \n";}






void solve()
{
	int n, k;
	cin >> n >> k;

	vector<int>v(n);
bool f=true;
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		if(v[i]>k)f=false;

	}
if(f){cout << "YES" << endl;
		return;}

	sort(v.begin(), v.end());

	if (v[0] + v[1] <= k)
	{
		
		cout << "YES" << endl;
		return;
	}

	cout << "NO" << endl;
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

#include<bits/stdc++.h>


using namespace std;

void solve2()
{
	int n;
	cin >> n;
	vector<int>v(n);
	for (int i = 0; i < n; i++)cin >> v[i];
	//sort(v.begin(), v.end());
	reverse(v.begin(), v.end());
	for (int i = 0; i < n / 2; i++)cout << v[i] << " ";
	for (int i = n / 2; i < n; i++)cout << -1 * v[i] << " ";
	cout << endl;
}

void solve()
{
	int n;
	cin >> n;
	vector<int>v(n);
	for (int i = 0; i < n; i++)cin >> v[i];

	for (int i = 0; i < n; i += 2)
	{
		int a, b, x, y;

		a = v[i];
		b = v[i + 1];
		x = (abs(a) * abs(b)) / a;
		y = (abs(a) * abs(b)) / b;

		if (a > 0 && b > 0)cout << x << " " << -1 * y << " ";
		else if (a < 0 && b < 0)cout << x << " " << -1 * y << " ";
		else if(a<0 && b>0)cout<<x<<" "<<-1*y<<" ";
		else if(a>0 && b<0)cout<<-1*x<<" "<<y<<" ";
		//else cout << x << " " << y << " ";

	}


cout<<endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}


	return 0;
}

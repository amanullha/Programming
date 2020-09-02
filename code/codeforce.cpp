
//plm B(647
#include<bits/stdc++.h>
using namespace std;
int main()
{

	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int>a(n, 0);

		for (int i = 0; i < n; i++)
		{
			int p;
			cin >> p;
			a[i] = p;

		}
		if(n==1){
			cout<<"-1"<<endl;continue;
		}
		sort(a.begin(), a.end());

		int x = a[1] - a[0];
		int xp=a[0] xor x;
		//cout<<"xor "<<x<<endl;

		if (xp == a[1])cout << x << endl;

		else cout << "-1" << endl;
	}
	
	

	return 0;
}
/**
plm A

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

	int t;
	cin >> t;
	while (t--)
	{
		ll a, b;
		cin >> a >> b;
		if (a < b)swap(a, b);

		if (a == b) {cout << "0" << endl; continue;}

		ll x = log2(a) + 1;
		ll y = log2(b) + 1;

		
		ll dif = x - y;
		

		
		b = b<<dif;
		



		if (a == b) {
			if (dif >= 4) {
				if (dif % 3 == 0)cout << dif / 3 << endl;
				else cout << (dif / 3) + 1 << endl;

			}
			else
				cout << "1" << endl;
		}

		else cout << "-1" << endl;

	}

	return 0;
}
**/
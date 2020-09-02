#include<bits/stdc++.h>
#define ll long long int
#define M 10000000+90
using namespace std;
ll a, b;
unordered_map<ll, ll>un;
void p(ll i, ll j, ll c)
{
	un[i * j] = c;
	if (i * 2 <= a && j * 2 <= b)
		p(i * 2, j * 2, c);
	else return ;
	
	
}


int main()
{

	int t;
	cin >> t;

	while (t--)
	{
		ll c = 2;
		cin >> a >> b;
		for (ll i = 1; i <= a; i++)
		{
			for (int j = 1; j <= i; j++)
			{
				if ( i == j)continue;

				if (un.find(i * j) == un.end())
				{
					cout << i*j << endl;
					p(i, j, ++c);
				}
				//cout<<i<<j<<"  ";
			}
			cout << endl;

		}


		cout << "c: "<<c  << endl;
	}

	//for (auto x : un)cout << x.first << "  : " << x.second << endl;


	return 0;
}


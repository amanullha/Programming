#include<bits/stdc++.h>
#define endl                 '\n'
#define ff 					first
#define ss					second
#define pb 					push_back
#define ll 					long long
#define VI              	vector<long long>
#define pr 					pair<long long,long long>
#define all(x)              (x).begin(), (x).end()
#define M 					10000007
#define INF                 2147483647
#define gcd(a, b)        	__gcd(a, b)
#define lcm(a, b)        	((a)*((b)/gcd(a,b)))
#define fio 				ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
using namespace std;

void solve()
{

	int n, k;
	cin >> n >> k;

	if (k + k + 1 > n)cout << "-1" << endl;
	else
	{
		vector<int>v(n + 1);
		int a = 1, b = n;

		for (int i = 1; i <= n; i++)
		{
			if (i & 1)v[i] = a++;
			else v[i] = b--;
		}
		sort(v.begin()+(k*2)+1, v.end());
		for (int i = 1; i <= n; i++)cout << v[i] << " ";
	}

	cout << endl;
}

int main()
{
//fio;
	int t;
	cin >> t;

	while (t--)solve();

	return 0;
}

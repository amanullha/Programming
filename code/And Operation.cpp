#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define M 10000007
#define sz 10000007
#define tc(cn) pf("Case %d: ",cn)
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int>v(n);
	for (int i = 0; i < n; i++) cin >> v[i];

	for (int i = 31; i >= 0; i--)
	{
		vector<int>on;


		for (int j = 0; j < v.size(); j++)
		{
			bool i_th_bit_ON = v[j] & (1 << i);
			if (i_th_bit_ON)on.push_back(v[j]);
		}

		if (on.size() >= 2)v = on;


	}

	int ans = v[0] & v[1];
	cout << ans << endl;



	return 0;
}

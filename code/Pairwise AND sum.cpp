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
	ll n;
	cin >> n;
	vector<ll>v(n + 1);
	for (ll i = 0; i < n; i++)cin >> v[i];

	ll total = 0;

	for (ll i = 0; i < 31; i++)
	{
		ll Count_i_th_bit_ON = 0;

		for (ll j = 0; j < n; j++)
		{
			ll i_th_bit = (1LL << i);

			bool ON_bit = i_th_bit & v[j];

			Count_i_th_bit_ON += ON_bit;
		}
		//cout << i << "  :  " << Count_i_th_bit_ON << endl;

		ll pair = (Count_i_th_bit_ON * (Count_i_th_bit_ON - 1)) / 2;

		total += (pair * pow(2, i));
	}
	cout << total << endl;





	return 0;
}

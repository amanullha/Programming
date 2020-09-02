#include<bits/stdc++.h>
#define pb push_back()
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

#define M 50

using namespace std;
inline void Time() { cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s. \n";}


int main()
{

	ll n, r;
	while (snn(n, r) == 2)
	{

		ll tot = 1, two = 0, five = 0;
		for (ll i = 0; i < r; i++)
		{
			ll ans = (n - i);
			while (ans % 2 == 0) {ans /= 2; two++;}
			while (ans % 5 == 0) {ans /= 5; five++;}
			tot =( (tot%10)*(ans%10)) % 10;



		}
		ll dif, gon;
		if (two > five) {dif = two - five; gon = 2;}
		else if (five > two) {dif = five - two; gon = 5;}
		else {dif = 0, gon = 1;}

		for (ll i = 0; i < dif; i++)tot =((tot%10)*(gon % 10))%10;

		cout << tot % 10 << endl;
	}



	return 0;
}

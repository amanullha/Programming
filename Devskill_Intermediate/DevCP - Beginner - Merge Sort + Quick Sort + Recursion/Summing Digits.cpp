#include<bits/stdc++.h>
#define pb push_back()
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

#define M 10000007
using namespace std;

inline void Time() { cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s. \n";}


ll count(ll n)
{
	ll ans = 0;
	while (n > 9)
	{
		ans += (n % 10);
		n /= 10;

	}
	ans += n;

	return ans;

}



ll digit(ll n)
{
	if (n > 9)
	{
		
		while (n > 9)
		{
			n=count(n);
		}
		return n;
	}
	else return n;
}
/*
//efficent approach


int main()
{
	ll i;
	while(cin>>i && i!=0)
	{
		ll ans;
		if (i >= 10)
		{
			if (i % 9 == 0)ans = 9;
			else
				ans = i % 9;
		}
		else ans = i;
		cout << ans << endl;

		
	


}

*/


int main()
{

	ll n;
	while (cin >> n && n != 0)
	{
		cout << digit(n) << endl;

	}



//pf("\n\n");Time();
	return 0;
}
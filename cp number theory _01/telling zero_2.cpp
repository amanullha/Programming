#include<bits/stdc++.h>
#define ll long long
using namespace std;


ll fc(ll n, ll x)//fc for count tralling zero in N!
{
	ll  number = 0,f=x;
	while (x<=n)
	{
		number += n / x;
		x*= f;
	}
	return number;
}
ll nc(ll N, ll x)//fc for count tralling zero in N not N!
{

    ll counter = 0;
    while(N % x == 0)
    {
    	//cout<<"n "<<N<<"x "<<x<<" conter "<<counter<<endl;
        counter++;
        N = N / x;
    }
    return counter;
}
ll min(ll a,ll b)
{
	return a>b?b:a;
}
int main()
{
	
	ll t, n, p, q, r, tot,t2=0,t5=0;
	cin >> t;
	//scanf("%lld",&t);

	for (ll tc = 1; tc <= t; tc++)
	{
		cin >> n >> r >> p >> q;
		ll ii = fc(n, 2);
		ll jj = fc(n, 5);

		ll kk = fc(n - r, 2);
		ll lll = fc(n - r, 5);

		ll mm = fc(r, 2);
		ll nn = fc(r, 5);


		ll xq = q * nc(p, 2);
		ll yq = q * nc(p, 5);
/*
		cout << ii << "  " << jj << endl;
		cout << kk << "  " << lll << endl;
		cout << mm << "  " << nn << endl;
		cout << xq << "  " << yq << endl;
*/
		//cout << (ii + xq - kk - nn) << "      " << (jj + yq - lll - nn) << endl;

		tot = min((ii + xq - kk - mm), (jj + yq - lll - nn));




		cout << "Case " << tc << ": " << tot << endl;
		//printf("Case %lld: %lld\n",tc,tot);


	}
	return 0;
}
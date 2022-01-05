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
		//cout<<nc(q,5)<<"   "<<nc(q,2)<<endl;

		t2=fc(n,2)+(q*nc(p,2))-(fc(n-r ,2)+fc(r,2));
		t5=fc(n,5)+(q*nc(p,5))-(fc(n-r,5)+fc(r,5));


		

		




		cout << "Case " << tc << ": " << min(t2,t5) << endl;
		//printf("Case %lld: %lld\n",tc,tot);


	}
	return 0;
}
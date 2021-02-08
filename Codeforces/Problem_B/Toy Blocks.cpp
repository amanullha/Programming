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
#define c cin>>
#define co cout<<

using namespace std;
inline void Time() { cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s. \n";}



void solve()
{
	ll n;
	sn(n);
	ll mx=INT_MIN,sum=0;
	for(int i=0;i<n;i++)
	{
		ll x;
		sn(x);
		if(x>mx)mx=x;
		sum+=x;
	}

	ll by=ceil((sum*1.00)/(n-1));
	//ll by=(sum+1)/(n-1);
	if(by<mx)
	{
		pf("%lld\n",(mx*(n-1))-sum);
	}
	//else if (by==mx)pf("0\n");
	else 
	{
		pf("%lld\n",((n-1)*by)-sum);
	}



}

int main()
{
	
	ll t;
	sn(t);
	while (t--)solve();




	//pf("\n\n\n\n"); Time();
	return 0;
}

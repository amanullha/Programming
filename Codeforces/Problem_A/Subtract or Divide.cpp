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
 
ll max(ll a,ll b)
{
	if(a>b)return a;
	else return b;
}

void solve()
{
	ll n;
	sn(n);
	if(n==1)pf("0\n");
	else if(n==2)pf("1\n");
	else if(n==3)pf("2\n");
	else if(n%2==0)pf("2\n");
	else pf("3\n");
/*
	int mx=INT_MIN;
	for(ll i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			ll x=n/i;
			mx=max();
		}
	}
	*/
}

int main()
{
	int t;
	sf("%d", &t);
	while (t--)solve();




	//pf("\n\n\n\n"); Time();
	return 0;
}

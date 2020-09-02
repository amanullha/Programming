#include<bits/stdc++.h>
#define pb push_back()
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long int
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
using namespace std;

inline void Time() { cerr << "Time elapsed : "<<1.0 *clock() / CLOCKS_PER_SEC << " s. \n";}
ll biexpo(ll n,ll p,ll mod)
{
	n%=mod;
	ll ans=1;
	while(p>0)
	{
		if(p&1)ans=ans*n%mod;
		
		n=n*n%mod;
		p=p>>1;
	}
return ans;
}

int main()
{
	
ll b,p,m;
while(snnn(b,p,m)==3)
{
	pf("%lld\n",biexpo(b,p,m));
}


//pf("\n\n");Time();
return 0;
}

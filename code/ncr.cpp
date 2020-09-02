#include<bits/stdc++.h>
#define pb push_back()
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define i64 unsigned long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define M 1000003
using namespace std;
inline void Time() { cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s. \n";}


vector<ll>fact_N(M,1);

ll binary_expo(ll n,ll p)
{
	ll res=1;
	while(p)
	{
		if(p&1)res=res*n%M;
		p=p>>1;
		n=n*n%M;
	}

	return res;
}


ll inverse_mod(ll n)
{
return binary_expo(n,M-2);
}






int main()
{

for(ll i=1;i<M;i++)
{
	fact_N[i]=((fact_N[i-1]%M)*(i%M))%M;
}


	int t;
	sf("%d", &t);
	//cin>>t;
	for (int cs=1;cs<=t;cs++)
	{
		ll  n, r;
		scanf("%lld %lld", &n, &r);
		//cin>>n>>r;
		
		ll nCr=fact_N[n];
		nCr=((nCr%M)*(inverse_mod(fact_N[r])%M))%M;
		nCr=((nCr%M)*(inverse_mod(fact_N[n-r])%M))%M;
			
			pf("Case %d: ",cs);
			printf("%llu\n",nCr);
		


	}
	return 0;
}


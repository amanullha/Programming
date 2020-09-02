/*

solution idea video link: https://www.youtube.com/watch?v=tRrI09niwfc

Like-->
		before this problem we need to know star and bars problem solution idea.
		suppose-->how many number of ways to distribute 8 apple between into 3 child.

8 apple->********(star means apple). and we should divide between into 3 children.
so if we divide this star by 2 part we get 3 part
like->**|****|**       ( "|" this is bar)
part-> 1   2   3

if we count all star and bars we get 10( 8 star and 2 bar)

main observation is-> how many ways to setup bar in the 10 position 
				   -> 10 C 2
				   -> 2 means "count of childern"-1
				   -> 10 means "total apple"+"count of children"-1


if "count of children"=r;
and "total apple"=N

solution is : (N+r-1)C(r-1)

for this problem we need mod
so, solution is : ( (N+r-1)C(r-1) )%mod

we need multiplication mod for N+r-1
and inverse mod for N+r-1-r-1 and r-1
				   ->N-2 and r-1;
*/
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
#define M 1000000007
#define Mx 2000006// for N+k-1
using namespace std;


ll fact_N[Mx+2];

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
fio;

for(ll i=1;i<Mx;i++)
{
	fact_N[0]=1;
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
		
		ll nCr=fact_N[n+r-1];
		nCr=((nCr%M)*(inverse_mod(fact_N[r-1])%M))%M;
		nCr=((nCr%M)*(inverse_mod(fact_N[n])%M))%M;
			
			pf("Case %d: ",cs);
			printf("%lld\n",nCr);
		


	}
	return 0;
}



#include<bits/stdc++.h>
#define pb push_back()
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define M 10000007
using namespace std;

int main()
{
	long long n,m;
	scanf("%lld%lld",&n,&m);

	long long power=pow(2,n);

	long long ans=m%power;
	if(power>m)
		printf("lld\n",m);
else 
	printf("%lld\n",ans);


	
		
		
	

	return 0;
}

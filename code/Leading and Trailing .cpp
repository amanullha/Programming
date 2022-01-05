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
#define tc(cn) printf("Case %lld: ",cn)


using namespace std;

inline void Time() { cerr << "Time elapsed : "<<1.0 *clock() / CLOCKS_PER_SEC << " s. \n";}
ll binary_expo(ll n,ll p)
{
	ll ans=1;
	while(p>0)
	{
		if(p&1)ans*=n;
		p=p>>1;
		n*=n;
	}
	return ans;
}

int main()
{
	ll t,ts=1;
	cin>>t;
	//sn(t);
while(t--)
{
	ll n,p;
	//snn(n,p);
	cin>>n>>p;
	tc(ts);

	string s=to_string(binary_expo(n,p));

	ll l=s.size()-1;
	printf("%c%c%c %c%c%c\n",s[0],s[1],s[2],s[l-2],s[l-1],s[l] );
}

pf("\n\n\n\n");Time();
return 0;
}

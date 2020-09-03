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
using namespace std;

ll GCD(ll a,ll b)
{
	return b==0?a:GCD(b,a%b);
}
int main()
{
	
ll n;
cin>>n;
vector<ll>val;

for(ll i=0;i<n;i++)
{
	ll x;
	cin>>x;
	val.pb(x);
}

vector<ll>co_prime;
co_prime.pb(val[0]);
for(ll i=1;i<n;i++)
{
	ll gcd=GCD(val[i],val[i-1]);
	if(gcd==1)
	{
		
		co_prime.pb(val[i]);
	}
	else
	{
		co_prime.pb(1);
		co_prime.pb(val[i]);
	}
}

ll kk=co_prime.size()-val.size();
cout<<kk<<endl;
for(ll x:co_prime)cout<<x<<" ";
	cout<<endl;

return 0;
}

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
using namespace std;

inline void Time() { cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s. \n";}

ll max(ll a,ll b)
{
	if(a>b)return a;
	else return b;
}
ll min(ll a,ll b)
{
	if(a<b)return a;
	else return b;
}
int main()
{

	int t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		std::vector<ll> v1;
		std::vector<ll> v2;
		ll up=INT_MAX,dn=INT_MAX;
		for(ll i=0;i<n;i++)
		{
			ll p;
			cin>>p;
			up=min(up,p);
			v1.pb(p);
		}
		for(ll i=0;i<n;i++)
		{
			ll p;
			cin>>p;
			dn=min(dn,p);
			v2.pb(p);
		}

		ll count =0;
		//cout<<up<<"  "<<dn<<endl;
		for(ll i=0;i<n;i++)
		{
			//cout<<v1[i]<<"   "<<v2[i]<<endl;
			ll mx=max(v1[i]-up,v2[i]-dn);
			count+=mx;

		}
		cout<<count<<endl;
		
	}


	//pf("\n\n"); Time();
	return 0;
}

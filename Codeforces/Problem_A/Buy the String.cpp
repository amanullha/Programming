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

inline void Time() { cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s. \n";}

int main()
{
	int t;
	cin >> t;
	//t*=2;
	while (t--)
	{
		ll n, k;
		cin >> n >> k;
		std::vector<ll> v(n * k);

		for (ll i = 0;i<n*k;i++)
		{
			cin >> v[i];
		}

		ll m=(n+1)/2;
		ll s=m-1;
		ll b=n-m;

		ll sum=0;

		while(!v.empty())
		{
			//ll siz=v.size();
			ll bb=b;
			while(bb--)v.pop_back();
			sum+=v[v.size()-1];
			ll ss=s;
			while(ss--)v.erase(v.begin()+0);

		}
		cout<<sum<<endl;

	}



//pf("\n\n\n\n");Time();
	return 0;
}

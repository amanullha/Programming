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


void solve()
{
	ll n;
	//sn(n);
	cin>>n;
	vector<int>v(n);
	for (ll i = 0; i < n; i++)
	{
		cin>>v[i];
	}
	for(int i=1;i<n-1;i++)
	{
		
		if(v[i]>v[i+1] && v[i]>v[i-1])
			{
				cout<<"YES\n";
				cout<<i<<" "<<i+1<<" "<<i+2<<endl;
				return;
			}	
	}
	cout<<"NO\n";
	
}
int main()
{
	int t;
	cin >> t;
	while (t--)solve();




	pf("\n\n\n\n"); Time();
	return 0;
}

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
	for(int i=0;i<n-2;i++)
	{
		
		for(int j=i+1;j<n-1;j++)
		{
			if(v[i]<v[j])
			{
				for(int k=j+1;k<n;k++)
				{
					if(v[j]>v[k] && i<j && j<k)
					{
						cout<<"YES\n";
						cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
						//cout<<v[i]<<" "<<v[j]<<" "<<v[k]<<endl;
						return;
					}
				}
			}
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

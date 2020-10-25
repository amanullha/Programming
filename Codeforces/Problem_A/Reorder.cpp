#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define M 10000007
#define sz 10000007
#define tc(cn) pf("Case %d: ",cn)
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,s=0;
		cin>>n>>m;
		while(n--)
		{
			int x;
			cin>>x;
			s+=x;

		}
		if(s==m)cout<<"YES\n";
		else cout<<"NO\n";
	}



return 0;
}

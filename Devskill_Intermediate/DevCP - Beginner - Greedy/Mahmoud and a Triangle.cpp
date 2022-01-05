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

/*
Non-degenerate triangle is sum of two sides geter then third side and area is geter then zero(0).
means , if side are A,B,C
				->A+B>C
				->B+C>A
				->A+C>B

*/
int main()
{
	ll n;
	sn(n);
	vector<int>v;


	for (int i = 0; i < n; i++)
	{
		ll x;
		sn(x);
		
			v.push_back(x);
		
	}


	sort(v.begin(), v.end());

	for(ll i=0;i<(ll)v.size()-2;i++)
	{
		if(v[i]+v[i+1]>v[i+2])
		{
			pf("YES\n");
			return 0;
		}
	}

pf("NO\n");

	return 0;
}

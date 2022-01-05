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

void solve()
{
	int l,r;
	cin>>l>>r;
	int a=r+1;
	float m=a/2;

	if(l*2>r && l%a>=m && r%a>=m)cout<<"YES\n";
	else cout<<"NO\n";

}

int main()
{
	int t;
	cin>>t;
	while(t--)solve();



return 0;
}

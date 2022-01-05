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

unordered_map<ll,bool>un;
int main()
{
	int n, i;
	cin >> n;
	while(un[n]==false)
	{
		un[n++]=true;
	while(n%10==0)n/=10;
}

cout<<un.size()<<endl;
	return 0;
}

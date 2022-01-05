#include<bits/stdc++.h>
#define pb push_back()
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long int
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
using namespace std;

ll GCD(ll a,ll b)
{
	return b==0?a:GCD(b,a%b);
}

int main()
{
fio;
	ll n1,n2,gcd;
	char x;
	int t, j = 1;
	cin >> t;
	while (t--) {

		//snn(n1,n2);
		cin>>n1>>x>>n2;

		gcd = GCD(n1, n2);

		pf("Case %d: %lld%c%lld\n",j++,n1/gcd,x,n2/gcd);
		//cout << "Case " << j++ << ":" << n1 / gcd << "/" << n2 / gcd << endl;
	}

	return 0;
}

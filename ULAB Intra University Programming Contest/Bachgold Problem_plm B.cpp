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


int main()
{
	int n, i;
	cin >> n;
	if (n % 2 == 0)
	{
		cout << (n / 2) <<endl;
		for (i = 1; i <= n / 2; i++) {
			cout << "2" << " ";
		}
	}
	// jor nah hole 
	else 
	{
		cout << n / 2 << '\n';
		int k=n-3;

		for (i = 1; i <= k/ 2; i ++) 
		{
			cout << "2" << ' ';
		}
		cout << "3" << '\n';
	}


	return 0;
}

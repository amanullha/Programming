#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

#define M 1000006
#define sz 10000007
#define tc(cn) pf("Case %d: ",cn)
//#define c cin>>
//#define co cout<<

using namespace std;
inline void Time() { cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s. \n";}


ll divs[M + 2];

void div_count(ll n)
{
	for (ll i = 1; i <= n; i++)
	{
		for (ll j = i; j <= M; j += i)
		{
			divs[j]++;
		}
	}
}



int main()
{

	ll n;
	cin >> n;
	div_count(n);
	ll ai[n];

	for (ll i = 1; i <= n; i++)
	{
		cin >> ai[i];
	}
	/*
	for (int i = 1; i <= n; i++)
	{
		cout<<ai[i]<<"  :  "<<divs[ai[i]]<<endl;
	}
	*/
	for (ll i = 1; i <= n; i++)
	{
		if (ai[i] % i == 0)
			cout << divs[ai[i]] - 1 << endl;
		else cout << divs[ai[i]] << endl;
	}




	//pf("\n\n\n\n"); Time();
	return 0;
}

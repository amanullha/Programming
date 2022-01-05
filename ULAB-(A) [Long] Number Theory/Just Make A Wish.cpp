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
#define mod 1000000007
#define tc(cn) pf("Case %lld: ",cn)
//#define c cin>>
//#define co cout<<

using namespace std;
inline void Time() { cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s. \n";}

ll cs = 1;
vector<ll>divc(M + 5, 1);
void Div_count()
{

	for (ll i = 2; i * i <= M; i++)
	{
		if (divc[i] == 1)
		{
			for (ll j = i; j <= M; j += i)
			{
				ll x = j;
				ll c = 0;
				while (x % i == 0)
				{
					c++;
					x /= i;
				}
				divc[j] *= (c + 1);
			}
		}
	}
}
void solve()
{
	/*
	for (ll i = 1; i < 20; i++)
	{
		cout << i << "  : " << divc[i] << endl;
	}
	cout<<endl;
	*/
	ll day, g;
	sn(day);
	ll start = 1;
	ll count = 0;
	while (day--)
	{
		sn(g);
		if (g > 0)start *= g;
		else start /= abs(g);
		count = ((count%mod)+(divc[start]%mod))%mod;


	}
	tc(cs++);
	pf("%lld\n", count);

}
int main()
{
	ll t;
	sn(t);
	Div_count();
	while (t--)solve();




	//pf("\n\n\n\n"); Time();
	return 0;
}

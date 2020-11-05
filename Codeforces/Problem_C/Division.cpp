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
ll max(ll x, ll y)
{
	if (x > y)return x;
	else return y;
}


void solve()
{
	ll p, q;
	cin >> p >> q;
	if (p % q == 0)
	{

		unordered_map<ll, ll>un, to;


		for (ll i = 2; i * i <= q; i++)
		{
			if (q % i == 0)
			{
				ll c = 0;
				ll s = 1;
				while (q % i == 0)
				{
					c++;
					q /= i;
					s *= i;
				}

				if (un.find(i) == un.end())un[i] = c;
				else un[i] += c;
				if (to.find(i) == to.end())to[i] = s;
				else to[i] *= s;
			}
		}

		if(q>1)
		{
			if (un.find(q) == un.end())un[q] = 1;
				else un[1] += 1;
				if (to.find(q) == to.end())to[q] = q;
				else to[q] *= q;

		}




		ll maxx = -1;

		/*for(auto v:un)
		{
			int x = v.first;
			int y = v.second;

			int t = to[x];
			cout<<"p : "<<x<<"  c : "<<y<<" t : "<<t<<endl;
		}*/

		for (auto v : un)
		{
			ll x = v.first;
			ll y = v.second;// div count na nia prime ar gonfol ta nile e hobe

			ll t = to[x];


			ll n = p;
			while (n % x == 0)n /= x;

			ll val = n * (t / x);
			//cout<<"\n val : "<<val<<endl;

			maxx = max(maxx, val);
		}


		cout << maxx << endl;


	}
	else cout << p << endl;

//123428936223493065

}

int main()
{
	int t;
	cin >> t;
	while (t--)solve();



	return 0;
}

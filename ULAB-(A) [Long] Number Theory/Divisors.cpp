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

vector<ll>p(M, 1);

void div_count_with_prime()
{
	for (ll i = 2;  i <= M; i++)
	{
		if (p[i] == 1)
		{
			for (ll j = i; j <= M; j += i)
			{
				ll count = 0;
				ll jj = j;

				while (jj % i == 0)
				{
					count++;
					jj /= i;
				}
				//if(j==2 && i==2)cout<<"count : "<<count<<"  pj "<<p[j]<<endl;

				p[j] *= (count + 1);
			}
		}
	}
}


ll two_prime(ll n)
{
	
	for (ll i = 2; i * i <= n; i++)
	{
		if(n%i==0&& p[i]==2)
		{
			if(i*i!=n && p[n/i]==2)return true;
		}
	}
	return false;
}




int main()
{
	div_count_with_prime();
	vector<ll>v;
	//for (ll i = 1; i <= 50; i++)cout << i << "  :  " << p[i] << endl;

	for (ll i = 1; i <= M; i++)
	{
		if (two_prime(p[i]))v.pb(i);
	}

	for (ll i = 8; i <v.size(); i+=9)cout  << v[i] << endl;





	//pf("\n\n\n\n"); Time();
	return 0;
}

#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define M 1000001
#define sz 10000007
#define tc(cn) pf("Case %d: ",cn)
using namespace std;



vector<ll>p(M + 2, 1);
vector<ll>ans;



void div_count_with_prime()
{
	for (ll i = 2;  i <= M; i++)
	{
		if (p[i] == 1)
		{
			for (ll j = i; j <= M; j += i)
			{
				if (p[j] > 3)continue;
				ll count = 0;
				ll jj = j;

				while (jj % i == 0)
				{
					count++;
					jj /= i;
				}

				p[j] *= (count + 1);
			}
		}
	}
}

void another_sieve()
{
	vector<bool>take(M + 2, 1);
	//vector<bool>take(M+2,0);

	for (ll i = 1; i < M; i++)
	{
		for (ll j = i; j < M; j += i)
		{
			if (p[j] <= 3 || p[j] % p[i] != 0)take[j] = false;
			/*
			jekono akta divisor ar div_count dia jodhi div_count of N ke
			 divide nah kora jay tahole e oii number ta neya jabe nah .
			 shudo tader ke e neya jabe jei Number ar div_count tar all divisor
			 ar div_count dia divides kora jabe*
			*/

			//if(p[j]>3 && p[j]%p[i]==0)take[j]=true;
		}
	}
	for (ll i = 1; i <= M; i++)if (take[i])ans.pb(i);




}

ll two_prime(ll n)
{

	for (ll i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			if (p[n] % p[i] != 0)return false;

			if (i * i != n )
			{
				if (p[n] % p[n / i] != 0)
					return false;
			}
		}
	}
	return true;
}




int main()
{
	div_count_with_prime();


	/*
	vector<ll>v;

	for (ll i = 1; i <= M; i++)
	{
		if (p[i]>3 && two_prime(i))v.pb(i);
	}
	*/
	//for (ll i = 0; i <100; i++)cout  << v[i] << endl;



// double sieve for check condition optimizely
	another_sieve();
	for (ll i = 107; i < (ll)ans.size(); i += 108)cout  << ans[i] << endl;


	return 0;
}

#include<bits/stdc++.h>
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long int

#define M 10000007
using namespace std;
/*
vector<ll>phi(M, 0);
void phi_cal()
{
	for (int i = 1; i < M; i++)phi[i] = i;


	for (int i = 2; i < M; i++)
	{
		if (phi[i] == i)
		{
			for (int j =  i; j < M ; j += i)
			{
				phi[j] -= phi[j] / i;;
			}
		}
	}
}
*/

ll po(ll a,ll b)
{
    ll ans=1;
    while(b--) ans*=a;
    return ans;
}
ll prime(ll a)
{
    for(int i=1; i*i<=a; i++)
    {
        if(a%i==0) return 1;
    }
    return 0;
}
 
ll phi(long long int n)
{
    ll i,mul=1,holder,fre=0;
    if(prime(n)==0) mul=n-1;
    else
    {
        for(i=2; i*i<=n; i++)
        {
            if(n%i==0)
            {
                while(n%i==0)
                {
                    n=n/i;
                    holder=i;
                    fre++;
 
                }
                mul*=(po(holder,fre-1)*(holder-1));
                fre=0;
            }
        }
        if(n!=1) {
 
                mul*=(n-1);
        }
 
    }
    return mul;
}
vector<ll>divv;
void fdiv(int n)
{

	for (ll i = 1; i * i <= n; i++)
	{
		if (n % i == 0)
		{

			if (n / i == i)
				divv.push_back(i);
			else
			{	divv.push_back(i);
				divv.push_back(n / i);
			}
		}
	}
}

ll solve(ll n)
{
	ll res = 0;
	for (ll i = 0; i <(ll) divv.size(); i++)
		res+= (divv[i] * (phi(n / divv[i])));
		
	return res;
}

int main()
{
	ll n;
	//phi_cal();
	cin >> n;
	fdiv(n);
	//for(ll x:divv)cout<<x<<"  ";
	cout << solve(n) << endl;


	return 0;
}

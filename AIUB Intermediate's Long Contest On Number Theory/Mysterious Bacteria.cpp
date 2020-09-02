#include<bits/stdc++.h>
#define pb push_back()
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define M 1000000
using namespace std;
inline void Time() { cerr << "Time elapsed : "<<1.0 *clock() / CLOCKS_PER_SEC << " s. \n";}


bool isprime[M];
vector<ll>prime;
void sieve_of_eratosthenes()
{
	for (ll i = 3; i * i <= M; i++)
	{
		if (!isprime[i])
		{
			for (ll j = i * i; j <= M; j += i)
				isprime[j] = true;
		}
	}

	prime.push_back(2);
	for (ll i = 3; i <= M; i += 2)
	{
		if (!isprime[i])prime.push_back(i);
	}

}

ll fac(ll n)
{
	ll final=INT_MAX;

	for(ll i=0;i<(ll)prime.size() && prime[i]*prime[i]<=n;i++)
	{
		if(n%prime[i]==0)
		{
			ll c=0;
			while(n%prime[i]==0)
			{
				c++;
				n/=prime[i];
			}

			final=min(final,c);
		}
	}
	//cout<<endl<<n<<"   "<<final<<endl;
	if(n>1)final=1;
	return final;
}

int main()
{
	sieve_of_eratosthenes();
	ll t,tc=1;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		bool flag=false;
		if(n<0){flag=true;n*=-1;}
		cout<<"Case "<<tc++<<": ";
		
		ll ans=fac(n);
		//cout<<endl<<"ans : "<<ans<<endl;



/// ai part ta ato akto bojhi nai
		if(flag && ans%2==0){
            while(ans%2 == 0)
                ans/= 2;
			
        }
        cout<<ans<<endl;
	}




//pf("\n\n");Time();
return 0;
}

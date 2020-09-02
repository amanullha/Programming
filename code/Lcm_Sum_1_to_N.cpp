#include<bits/stdc++.h>
#define pb push_back()
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long int
#define mod 4294967296

/*
Gcd and Lcm sum blog Link: http://shoshikkha.com/archives/5459?fbclid=IwAR3CvlnmynKL2FG3NGQhH_opkh4mmMvPvp__R65xn7yh4W-IE4gjPJtz1FU
problem expalaination link: https://www.youtube.com/watch?v=SKBjnm39Puk&t=119s
Note Link: https://github.com/amanullha/Number_theory/tree/master/Lcm_Sum_1_to_N/Note_image
*/

#define M 1000006
using namespace std;
vector<ll>lcmsum(M,0);
vector<ll>phi(M, 0);
void phi_cal()
{
	for (ll i = 1; i < M; i++)phi[i] = i;


	for (ll i = 2; i < M; i++)
	{
		if (phi[i] == i)
		{
			for (ll j =  i; j < M ; j += i)
			{
				phi[j] -= phi[j] / i;;
			}
		}
	}

for(ll i=1;i<M;i++)
{
	for(ll j=i;j<M;j+=i)
		lcmsum[j]+=(phi[i]*i);
}


}

ll solve(ll n)
{
	ll result=lcmsum[n]-1;// 1 minus korar karon hole 1 thake 11 porjonto loop
	// cholbe N=12 hole , karon logic findout korar somoy n ke right side a ane and n-1 ke left side 
	//a rekhe equation ber kora hisilo tai.
	result*=n;
	result/=2;
	result+=n;
	return result;
}

int main()
{

ll t;
phi_cal();
cin>>t;
while(t--)
{
	ll n;
	cin>>n;
	cout<<solve(n)<<endl;;
}
	

return 0;
}

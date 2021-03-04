
#include<iostream>
#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

#define M 32768+200
#define sz 10000007
#define tc(cn) pf("Case %d: ",cn)
using namespace std;

ll n;
ll dp[M][4];
ll coin[] = {1, 2, 3};

ll solve(ll pos, ll rem)
{
	if (rem < 0)return 0;

	//if (rem == 0)return pos <= n; // ar bananor moton kicho nai return korte hobe 1 karon aii ta o akta bananor akta way
	if (pos == 3)return rem == 0; 	// otirikto coin nia nichi tai r banano jabe ani so return korte hobe zero(0) .karon r banano jabe nah



	if (dp[rem][pos] != -1)return dp[rem][pos];


	ll next_value_nitesi = solve(pos,rem - coin[pos]);          // position change hoy nai.karon same coin bar bar neya jabe

	ll next_value_nitesi_nah = solve(pos+1,rem);             // position change hiose .karon pos tomo coin skip kora hiose

	return dp[rem][pos] = next_value_nitesi + next_value_nitesi_nah;
}


int main()
{
	
	memset(dp, -1, sizeof(dp));
	while(cin>>n)
	cout << solve(0, n) << endl;


	return 0;
}
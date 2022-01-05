#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define sn scanf
#define pn printf
#define M 10000007
using namespace std;

vector<ll>divc(M, 0);
vector<ll>prime;

void priem_check()
{
	for (ll i = 0; i < M; i++)prime.pb(i);

prime[0]=prime[1]=0;
	for (ll i = 2; i < M; i++)
	{
		if (prime[i] == i)
		{
			for (ll j = i + i; j < M; j += i)
			{
				prime[j] = i;
				divc[j]++;
			}
		}
	}

}



int main()
{
	priem_check();

		ll n,c=0;
		cin >> n;
		
	for (int i =0; i <=n; i++) {
		if (divc[i] == 2){//cout<<i<<endl;
			c++;}
	}
	
cout<<c<<endl;

	return 0;
}
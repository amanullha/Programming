#include<bits/stdc++.h>
#define ll long long
#define M 2000000
using namespace std;
std::vector<ll>phi(M);
void phic()
{
	for (int i = 2; i <= M; i++)phi[i] = i;

	for (int i = 2; i <= M; i++)
	{
		if (phi[i] == i)
		{
			for (int j = i; j <= M; j += i)
			{
				phi[j] -= (phi[j] / i);
			}
		}
	}
	phi[0] = 0;
	phi[1] = 2;


	for (int i = 1; i <= M; i++)
	{
		phi[i] += phi[i - 1];
	}
}


void solve(ll n)
{

	
	ll lb = lower_bound(phi.begin(), phi.end(), n) - phi.begin();
	//lb += 1;
	//cout << lb << endl;

	ll idx = n - (phi[lb - 1]);
	ll up = 1, du = lb;
	//cout<<" lb  "<<lb<<" idx  "<<idx<<"  ";
	while (idx)
	{
		ll p=__gcd(up, du) ;
		
		if (p== 1 && idx==1)
			{
				cout<<up<<"/"<<du<<endl;
				return ;
			}
		if(p==1)idx--;
		
		up++;
	}
	

}


int main()
{
	phic();
	//for (int i = 0; i <= 10; i++)cout << i << " " << phi[i] << endl;

	ll k;
	while (cin >> k && k)
	{
		//cout<<"K "<<k<<"    :  ";
		if(k==1)cout<<"0/1"<<endl;
		else if(k==2)cout<<"1/1"<<endl;
		else
		solve(k);
	}


	return 0;
}
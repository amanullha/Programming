#include<bits/stdc++.h>
#define M 10000000
#define ll long long
using namespace std;
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
				phi[j]-= phi[j] /i;;
			}
		}
	}
}

int main()
{
	phi_cal();
	int t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin>>n;
		cout<<phi[n]<<endl;

	}


	return 0;
}
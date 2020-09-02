#include<bits/stdc++.h>
#define ll long long
#define M 1000006
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
	phi[1] = 1;


}
int main()
{
	phic();
	
	ll t;
	cin >> t;
	while (t--)
	{
		
		ll n;
		cin >> n;
		

		cout << phi[n] << endl;
	}



	return 0;
}

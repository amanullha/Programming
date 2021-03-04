#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define sn scanf
#define pn printf
#define M 1500
using namespace std;

int div_count[1010];
int ans[1010];

vector<bool>is_prime(M);
vector<int>prime;

void prime_sieve()
{
	for (int i = 2; i * i <= M; i++)
	{
		if (!is_prime[i])
		{
			for (int j = i + i; j <= M; j += i)
			{
				is_prime[j] = 1;
			}
		}
	}
	is_prime[1] = is_prime[0] = 1;


	for (int i = 2; i <= M; i ++)
	{
		if (!is_prime[i])prime.push_back(i);
	}


}
int prime_fact(int n)
{
	int tot = 1;
	for (int i = 0; i < (int) prime.size() && prime[i]*prime[i] <= n; i++)
	{

		if (n % prime[i] == 0)
		{

			int c = 0;
			while (n % prime[i] == 0)
			{
				c++;
				n /= prime[i];
			}

			tot *= (c + 1);
		}



	}
	if (n > 1)tot *= 2;
	return tot;
}


void find_k_div()
{
	div_count[1] = 1;
	for (int i = 2; i < 1005; i++)
	{
		if (!is_prime[i])div_count[i] = 2;

		else
			div_count[i] = prime_fact(i);
	}
}

bool camp(int x, int y)
{
	if (div_count[x] == div_count[y])return x > y;

	return div_count[x] < div_count[y];
}


int main()
{
prime_sieve();
find_k_div();
	for (int i = 1; i <1010; i++)ans[i]=i;

	sort(ans,ans+1001, camp);

	int t;
	cin >> t;
	for(int tc=1;tc<=t;tc++)
	{
		int n;
		cin >> n;
		cout << "Case "<<tc<<": "<<ans[n] << endl;
	}


	return 0;
}
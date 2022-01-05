#include<bits/stdc++.h>
#define ll long long
#define M 10000007
using namespace std;

vector<bool>is_prime(M);
vector<int>prime;

void prime_sieve()
{
	for (int i = 3; i * i <= M; i++)
	{
		if (!is_prime[i])
		{
			for (int j = i + i; j <= M; j += i)
			{
				is_prime[j] = 1;
			}
		}
	}
	prime.push_back(2);

	for (int i = 3; i <= M; i+=2)
	{
		if (!is_prime[i])prime.push_back(i);
	}


}


int main()
{
	prime_sieve();
	
//print prime number from 1 to 100
	for (int i = 0; i <= 100; i++)
		cout << prime[i] << "  ";


	return 0;
}

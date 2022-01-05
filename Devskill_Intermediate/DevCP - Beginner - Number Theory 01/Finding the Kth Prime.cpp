#include<bits/stdc++.h>
#define lli long long int
#define M 100000000+2
using namespace std;

vector<bool>is_prime(M);
vector<lli>prime;

void prime_sieve()
{
	for (lli i = 2; i * i <= M; i++)
	{
		if (!is_prime[i])
		{
			for (lli j = i + i; j <= M; j += i)
			{
				is_prime[j] = 1;
			}
		}
	}

	is_prime[1] = is_prime[0] = 1;
	prime.push_back(2);
	for (lli i = 3; i < M; i += 2)
	{
		if (!is_prime[i])prime.push_back(i);
	}

}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	prime_sieve();
	//cout<<prime[0]<<endl;
	//cout<<prime[101]<<endl;
	lli t;
	cin>>t;
	while(t--)
	{
		
		lli n;
		cin>>n;
		cout<<prime[n-1]<<endl;
		
	}



	return 0;
}

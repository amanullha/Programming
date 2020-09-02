
/*
#include<bits/stdc++.h>
#define lli long long int
#define M 10000000+7
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


	for (lli i = 2; i <= M; i ++)
	{
		if (!is_prime[i])prime.push_back(i);
	}


}
lli prime_fact( lli n )
{
	lli count=1;

	for (lli i = 0; i < (lli)prime.size() && prime[i]*prime[i] <= n; i++)
	{

		if (n % prime[i] == 0)
		{
			
			lli c=0;
			while (n % prime[i] == 0)
			{
				c++;
				n /= prime[i];
			}
			count*=(c+1);
			if(count>3)return 0;
		}
	}

	if (n > 1) 
	{
		count*=2;
	}

	
if(count==3)return 1;
else return 0;
	
}



int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	prime_sieve();
	for(int i=1;i<=200;i++)
	{
		if(prime_fact(i))cout<<i<<endl;
	}

	return 0;
}
/*
/**
4
9
25
49
121
169
**/
//**


#include<bits/stdc++.h>
#define lli long long int
#define M 10000000+7
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


	


}
bool squirt_check(lli n)
{
	lli x=sqrt(n);
return (x*x)==n;
}


int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	prime_sieve();
	lli t;
	cin>>t;
	while (t--)
	{
		lli n;
		cin>>n;

		n = llabs(n);
		if(n==1)
		{
			cout<<"NO"<<endl;
			continue;
		}
		//cout<<"n "<<n<<" s "<<squirt_check(n)<<"   sss  "<<squirt_check(n)*squirt_check(n)<<endl;
		if(is_prime[sqrt(n)]==1 && squirt_check(n)==1)
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		

	}

	return 0;
}
/*


*/
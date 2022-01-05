#include<bits/stdc++.h>
#define ll long long
#define M 10000007
using namespace std;

bool isprime(int n)
	{	if (n < 2)return false;
		for (int i = 2; i * i <= n; i++)if (n % i)return false; //i<=root(n)
		return true;
	}



int main()
{
	int n;
	cin>>n;
	cout<<isprime(n)<<endl;


	return 0;
}
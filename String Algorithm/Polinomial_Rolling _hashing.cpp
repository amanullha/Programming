#include<bits/stdc++.h>
#define ll 					long long
#define M 					1000000007
using namespace std;


ll generate_hash_val(string s)
{
	ll prime=31;
	ll has_val=0;
	ll power_of_prime=1;

	for(int i=0;i<(int)s.size();i++)
	{
		has_val=(has_val+((s[i]-'a'+1)*power_of_prime%M))%M;
		power_of_prime=power_of_prime*prime%M;
	}
	return has_val;
}


void poly_hash()
{
	string s;
	cin>>s;
	cout<<generate_hash_val(s);

}

int main()
{ 

	poly_hash();


	return 0;
}

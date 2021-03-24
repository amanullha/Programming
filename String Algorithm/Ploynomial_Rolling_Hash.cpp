#include<bits/stdc++.h>
#define endl                 '\n'
#define ll                 long long int
#define MOD                1000000007
using namespace std;

const ll prime=31;

ll String_Hash_value(string T)
{
	ll intval=0;
	ll power=1;

	for(char c:T)
	{
		intval=(intval+(c-'a'+1)*power)%MOD;
		power=(power*prime)%MOD;
	}

	return intval;
}

int main()
{
	string Text;
	cin >> Text;

	cout << "Hash value is : " << Hash_value(Text) << endl;


	return 0;
}

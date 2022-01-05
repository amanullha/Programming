#include<bits/stdc++.h>
#define endl                 '\n'
#define ll                 long long int
#define MOD                1000000007
#define MAX                10000007
using namespace std;

const ll prime = 73;

ll Hash[MAX];
ll Inv_MOD[MAX];

ll expo(ll N, ll P)
{
	ll result = 1;

	while (P)
	{
		if (P & 1)result = (result * N) % MOD;
		P >>= 1;
		N = (N * N) % MOD;
	}

	return result;
}

void generate_substring_hashing(string T)
{
	ll P_Power = prime;

	Hash[0] = (T[0] - 'a' + 1);
	Inv_MOD[0] = 1;

	for (int i = 1; i < (ll)T.size(); i++)
	{
		Hash[i] = (Hash[i - 1] + (T[i] - 'a' + 1) * P_Power) % MOD;

		Inv_MOD[i] = expo(P_Power, MOD - 2);

		P_Power = (P_Power * prime) % MOD;

	}

}

ll SubString_Hash_value(ll L, ll R)
{
	ll result = Hash[R];
	if (L > 0)result = (result - Hash[L - 1] + MOD) % MOD;

	result = (result * Inv_MOD[L]) % MOD;

	return result;
}

ll String_Hash_value(string T)
{
	ll primes = prime;
	ll intval = 0;
	ll power = 1;

	for (char c : T)
	{
		intval = (intval + (c - 'a' + 1) * power) % MOD;
		power = (power * primes) % MOD;
	}

	return intval;
}

int main()
{

	/*

	string haystack , needle;
		int n , L , R , answer;
		bool flag = false;

		while(cin>>n)
		{
			cin>>needle;
			cin>>haystack;

			ll needleHash = String_Hash_value(needle);

			generate_substring_hashing(haystack);

			for(L=0 , R=needle.size()-1; R < haystack.size(); L++ , R++)
			{
				if(needleHash == SubString_Hash_value(L , R))
				cout<<L<<endl;
			}

			cout<<endl;
		}
	*/

	ll n, t = 0;
	while (cin >> n)
	{
		if (t)puts("");

		string pattern, text;
		cin >> pattern >> text;

		ll pattern_hash = String_Hash_value(pattern);

		generate_substring_hashing(text);

		ll ps = pattern.size(), ts = text.size();

		for (int i = 0; i < ts - ps + 1; i++)
		{
			//cout<<i<<" : "<<i+ps<<endl;
			if (pattern_hash == SubString_Hash_value(i, i + ps - 1))
			{

				cout << i << endl;
			}
		}
t++;
	}


	return 0;
}

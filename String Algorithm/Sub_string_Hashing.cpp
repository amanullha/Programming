/**
pre_calculate hash of whole string 				: O(N)
Modulo inverse preprocessing      				:O(NlogN)
Calculating Hash of any substring of the string : O(1)
*/
#include<bits/stdc++.h>
#define ll 					long long
#define MOD 				1000000007
#define M					10000007
using namespace std;

ll Hash_val[M];
ll Inv_mod[M];

ll BigMod(ll n, ll p)
{
	ll res = 1;
	while (p)
	{
		if (p & 1)res = res * n % MOD;
		p >>= 1;
		n = n * n % MOD;
	}
	return res;
}

void generate_string_hshing(string t)
{
	ll prime = 31;
	ll prime_power = 1;

	Hash_val[0] = t[0] - 'a' + 1;
	Inv_mod[0] = 1;


	for (ll i = 1; i < (ll)t.size(); i++)
	{
		prime_power = (prime_power * prime) % MOD;

		Hash_val[i] =(Hash_val[i-1]+( ((t[i] - 'a' + 1) * prime_power) % MOD))%MOD;
		Inv_mod[i] = BigMod(prime_power, MOD - 2);
	}
}

ll Sub_str_hash(ll l, ll r)
{

	ll ans = Hash_val[r];

	if (l > 0)
		ans -= Hash_val[l - 1];

	ans = (ans * Inv_mod[l]) % MOD;

	return ans ;
}

int main()
{

	string text;
	cin >> text;

	generate_string_hshing(text);
	ll l, r;
	while (cin >> l >> r)
	{
		cout << Sub_str_hash(l, r) << endl;
	}


	return 0;
}

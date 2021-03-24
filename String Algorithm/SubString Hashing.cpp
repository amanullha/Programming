#include<bits/stdc++.h>
#define endl                 '\n'
#define ll                 long long int
#define MOD                1000000007
#define MAX                10000007
using namespace std;

const ll prime = 31;

ll Hash[MAX];
ll Inv_MOD[MAX];

ll expo(ll N, ll P)
{
	ll result = 1;

	while (P)
	{
		if (P & 1)result = (result * N) % MOD;
		P >>= 1;
		result = (result * result) % MOD;
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

		Inv_MOD[i] = expo(P_Power, MOD - 1);

		P_Power = (P_Power * prime) % MOD;

	}

}
ll SubString_Hash_value(ll L, ll R)
{
	ll result = Hash[R];
	if (L > 0)result -= Hash[L - 1];

	result = (result * Inv_MOD[L]) % MOD;

	return result;
}

int main()
{
	string Text;
	cin >> Text;

	generate_substring_hashing(Text);

	ll q;
	cin >> q;
	while (q--)
	{
		ll L, R;
		cin >> L >> R;

		L--, R--;

		cout << SubString_Hash_value(L, R) << endl;
	}


	return 0;
}

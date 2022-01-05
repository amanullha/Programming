// With String Hashing with Robin krap


/*


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


*/








// With KMP
/*
#include<bits/stdc++.h>
#define endl                 '\n'
#define ll                 long long int
#define M 					10000007
using namespace std;




vector<ll>create_lps_array(string pattern)
{
	ll n = pattern.size();
	vector<ll>lps(n);

	ll sub_i = 0;
	for (ll i = 1; i < n;)
	{
		if (pattern[i] == pattern[sub_i])
		{
			lps[i] = sub_i + 1;
			sub_i++;
			i++;
		}
		else
		{
			if (sub_i)sub_i = lps[sub_i - 1];
			else lps[i] = sub_i, i++; // sub_i=0 here

		}
	}
	return lps;
}




void solve()
{
	string s;
	cin >> s;

	vector<ll>ans = create_lps_array(s);
	for (ll x : ans)cout << x << " ";
	cout << endl;

	unordered_map<ll, ll>un;
	set<ll>st;
	for (ll x : ans)
	{
		if (x)
		{
			for(int i=1;i<=x;i++)
			un[i]++;
			st.insert(x);
		}

	}


	cout << un.size() << endl;

	for (ll x : st)
	{
		cout << x << " " << un[x] << endl;
	}

}

int main()
{
	solve();

	return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	std::vector<string> v;

	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		v.push_back(s);
	}
	for(string s: v)cout<<s<<"\n";
}
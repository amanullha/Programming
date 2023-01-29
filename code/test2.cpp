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
cout<<endl<<T<<endl;
    for (char c : T)
    {
        intval = (intval + (c - 'a' + 1) * power) % MOD;
        power = (power * primes) % MOD;
        cout<<intval<<" ";
    }
cout<<endl;
    return intval;
}

int main()
{



    string pattern, text;
    cin >> pattern >> text;

    ll pattern_hash = String_Hash_value(pattern);

    generate_substring_hashing(text);

    ll ps = pattern.size(), ts = text.size();
    cout<<endl<<text<<endl;
    for(int i=0;i<ts;i++)cout<<Hash[i]<<" ";
    cout<<endl;
    cout<<"expo"<<endl;
		for(int i=0;i<10;i++){
			cout<<Inv_MOD[i]<<"  ";
		}
		cout<<"expo"<<endl;

    for (int i = 0; i < ts - ps + 1; i++)
    {
        ll subtot=SubString_Hash_value(i, i + ps - 1);
        cout<<pattern_hash<<" : "<<subtot<<endl;

        if (pattern_hash ==subtot)
        {

            cout <<endl<<i << endl;
        }
    }




    return 0;
}

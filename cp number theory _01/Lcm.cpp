#include<bits/stdc++.h>
#define M 1000000
#define mod 10
#define ll long long
#define fi ios_base::sync_with_stdio(0); cin.tie(0)
using namespace std;

vector<bool>is_prime(M);
vector<ll>prime;

/*
idea of the problem:

bola hoise sum of lcm 1 to N ber korte hobe and sum ar last non zero digit print korte hobe.

solution idea: 
1 thake N porjonto shob golar prime factorization kore prime ar big power ke nia sum of lcm korle 
dekha jay je, 1 thake N porjonto shokor prime number gola powya jay. and prime gola aktr certain 
prower a thake jeta N ke cross korbe nah jodhi Prime^power ber kora hoy.
so 1st a amder ke 1 thake N porjonto sokol prime and prime ar power ber korte hobe 
jate kore Prime^power<=N hoy . then jehe to bola hoise last non zero digit findout korar jnno 
so amra jani shodhu 2 and 5 ke multiply korle last digit zero pabo . tai age amder age 2 and 5 prime nia kahj korte hobe. 
2 and 5 ar modde 2 ar power e beshi thake most of the time . so age amader ke check korte hob 5 ar power kotho then 5 ar 
power ar soman kore 2 ar power o delete kore dite hobe ,karo 2 and 5 ke multiply korle amra just zero paro and amder zero need nai;
so amdr kaj completed , then shob priem ar power calculate kore multiply korle e 1 to N porjontho LCM peye jabo
*/

void prime_sieve()
{
    for (ll i = 2; i * i <= M; i++)
    {
        if (!is_prime[i])
        {
            for (ll j = i * i; j <= M; j += i)
            {
                is_prime[j] = 1;
            }
        }
    }
    is_prime[1] = is_prime[0] = 1;

    for (ll i = 2; i <= M; i++)
    {
        if (!is_prime[i])prime.push_back(i);
    }
}


ll power(ll n, ll p)
{
    ll ans = p;
    while (ans <= n)ans *= p;

    return ans / p;
}


void prime_fac(vector<ll>&fac, ll &n)
{
    for (ll i = 0; i < (ll) prime.size() && prime[i] <= n; i++)
    {

        ll c_Val = power(n, prime[i]);

        fac[prime[i]] = c_Val;

    }
    ll five_count = 0;


    while (fac[5] > 1)
    {

        fac[5] /= 5;
        five_count++;

    }

    while (five_count--)
    {
        fac[2] /= 2;
    }


}

int main()
{

    prime_sieve();
    ll n;

    while (scanf("%lld", &n) && n)
    {

        // for(ll i=0;i<M;i++)fac[i]=0;
        // fac[1] = 1;
        vector<ll>fac(M, 0);



        prime_fac(fac, n);


        ll ans = 1;
        for (int i = 1; i <= M; i++)
        {
            if (fac[i] != 0) ans = ((ans % mod) * (fac[i] % mod)) % mod;
        }
        printf("%lld\n", ans);
    }
    return 0;
}

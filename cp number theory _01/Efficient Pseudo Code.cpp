#include<bits/stdc++.h>
#define M 10000007
#define mod 1000000007
#define ll long long
using namespace std;
 
vector<bool>is_prime(M);
vector<ll>prime;
 
ll power(ll a, ll b)
{
    if (b == 0)
        return 1;
    if (b & 1)return ((a % mod) * (power(a, b - 1)) % mod) % mod;
    else
    {
        ll x = power(a, b / 2) % mod;
        return (x * x) % mod;
    }
 
}
ll mod_inverse(ll n)
{
    return power(n,mod-2);
}
 
 
void prime_sieve()
{
    for (ll i = 2; i * i <= M; i++)
    {
        if (!is_prime[i])
        {
            for (ll j = i + i; j <= M; j += i)
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
 
 
ll prime_fact(ll n, ll m)
{
    ll ans = 1,c=0;
    ll root=sqrt(n);
    for (int i = 0; prime[i]<=root; i++)
    {
        if (n % prime[i] == 0)
        {
             c = 0;
            while (n % prime[i] == 0)
            {
                c++;
                n /= prime[i];
            }
            root=sqrt(n);
            c *= m;
 
            ll up = power(prime[i], c + 1)-1;
            ll don = mod_inverse(prime[i] - 1);
            ll fn = (((up+mod)%mod)*((don+mod)%mod))%mod;
            ans = ((ans % mod) * (fn % mod)) % mod;
        }
    }
    if (n > 1) {
        ll up = power(n,m+1)-1;
        ll don = mod_inverse(n - 1);
        ll fn = (((up+mod)%mod)*((don+mod)%mod))%mod;
        ans = ((ans % mod) * (fn % mod)) % mod;
    }
 
    return ans;
}
 
 
int main()
{
  
    int t;
    scanf("%d",&t);
    prime_sieve();
    for(int tc=1;tc<=t;tc++)
    {
        ll n,p;
        cin>>n>>p;
        printf("Case %d: %lld\n",tc,prime_fact(n,p));
        
    }
    return 0;
}

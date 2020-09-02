#include<bits/stdc++.h>
using namespace std;
#define M 10000000
#define ll long long
vector<bool>is_prime(M);
vector<ll>prime;
 
void prime_sieve()
{
    for (int i = 2; i * i <= M; i++)
    {
        if (!is_prime[i])
        {
            for (int j = i + i; j <= M; j += i)
            {
                is_prime[j] = 1;
            }
        }
    }
    is_prime[1] = is_prime[0] = 1;
 
    for (int i = 2; i <= M; i++)
    {
        if (!is_prime[i])prime.push_back(1LL * i);
    }
 
 
}
ll gcd(ll a, ll b)
{
    if (a == 0)return b;
    else return gcd(b, b % a);
}
 
int main()
{
    ll a, b, l,t;
    cin >> t;
    prime_sieve();
 
 
    for (ll tc = 1; tc <= t; tc++)
    {
       
        cin >> a >> b >> l;
        //cout<<a<<b<<l<<endl;
        if (l % a != 0 || l % b != 0)
        {
            cout << "Case " << tc << ": " << "impossible" << endl;
            continue;
        }
 
        ll AB =(a*b)/ __gcd(a, b);
       
 
 
        ll pcl = 0, pcAB = 0, c = 1;
        for (ll i = 0; i <(ll) prime.size() && prime[i] <= l; i++)
        {
            //akane l porjnonto loop chalate hobe . jodhi prime[i]*prime[i]<=l use kori 
            // tahole ai range ar bahirer value ke amra pore catch korte parbo nah . 
            // karon akne 2 ta value a jnno prime factorization kora  hocche
            pcAB = 0; pcl = 0;
 
            if (l % prime[i] == 0)
            {
 
                while (l % prime[i] == 0)
                {
                    l /= prime[i];
                    pcl++;
                }
            }
 
            if (AB % prime[i] == 0)
            {
 
                while (AB % prime[i] == 0)
                {
                    AB /= prime[i];
                    pcAB++;
                }
            }
 
            if (pcl > pcAB)
            {
                for (ll k = 0; k < pcl; k++)
                    c *= prime[i];
 
            }
 
 
        }
       
 
        cout << "Case " << tc << ": " << c << endl;
    }
 
//*/
    return 0;
}
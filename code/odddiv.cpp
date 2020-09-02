#include<bits/stdc++.h>
using namespace std;

#define M  100005
#define pb push_back
#define ll long long
 #define quick ios_base::sync_with_stdio(false);cin.tie(NULL)


vector<ll>dv[M];
vector<ll>prime;
bitset < M + 5 > is_prime;

void Prime_sieve()
{
    is_prime.reset();
    for (int i = 2; i * i <= M; i++)
    {
        if (!is_prime[i])
        {
            for (int j = i + i; j <= M; j += i)
                is_prime[j] = 1;
        }
    }
    is_prime[1] = 1;
    for (int i = 2; i <= M; i++)
    {
        if (!is_prime[i])prime.pb(i);
    }
}
int div_count(int n)
{
    if (n<M && !is_prime[n])return 3;
    /*ar akane 3 return kore ai karone je, jekono prime ar div count 2 , amra prime*prime ar div cont store kortesi
    tar prime*prime ke prime dia bag korle akta div count pai , then baki thaake prime ar div count , r amra jani
    prime ar div count 2 .so total 3 hoy . */
    int tot_div = 1;

    for (int i = 0; i <(int)prime.size() && prime[i]*prime[i] <= n; i++)
    {
        if (n % prime[i] == 0)
        {
            int c = 0;
            while (n % prime[i] == 0)
            {
                c++;
                n /= prime[i];
            }
            tot_div *= (c * 2) + 1;
            /*akta number ar div count joto tar squre means number*number ar
            div count oii number ar div count ar double hobe, tai 'c'ar shathe 2 gon kora hoise. ar amra jani prime
            factorization ar shathe 1 jog kore total div count ber kora lage. */
        }

    }
    if (n > 1)tot_div *= 3;
    /* ata khob important part. akta number ke oprer niom a prime factorization korar por o jodhi
    n ar man 1 tahke beshi  hoy ,tar mane ata new prime. ar amra jani akta number prime hole jar prime*prime ar div count ar
    value 3 hobe; */

    return tot_div;

}


void k_div()
{
    for (int i = 1; i <= M; i++)
    {
        dv[div_count(i)].pb(1LL*i * i);
        // akane vector[div count] ar modde push_back hocche (i*i) assending order a .mane vector i-th a j-th hocche accending order a.
        // i-th hocche randonly mane div count ar opr depant kore
    }
}

int main()
{
    quick;
    Prime_sieve();
    k_div();

    /* vector ar moddhe i-th hocche 'k', means count of divisor of a number. ar j-th hocche 'k' amne div count ar modde kon kon number
    ar div count ar value k somon oi number gola accending order a ache tai vector[k] ar moddhe l thake r porjonto paoya jabe .
    main point is that, vector[k] ar moddhe onk value e ache jar div count k somon tai l thake r ar moddhe jey number gola ache oii gola e amder answer hobe.


    */
    int t;
    ll k,L,R;
    //scanf("%d",&t);
    cin>>t;
   
    while (t--)
    {
        cin>>k>>L>>R;
        //scanf("%lld%lld%lld",&k,&L,&R);
       // if(k>1323)puts("0");
       cout<<upper_bound(dv[k].begin(), dv[k].end(), R) - lower_bound(dv[k].begin(), dv[k].end(), L)<<endl;
    }

    return 0;
}
#include<bits/stdc++.h>
//#define M 100000005
///****************#####    بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم   #####******************
//http://sajibtalukder2k16.blogspot.com/2020/07/lightoj-1289-lcm-from-1-to-n-solution.html
#define mod 4294967296
#define M 1e8 + 1
#define ll long long
#define ui unsigned int
#define mx  100000001
using namespace std;

ll status[(mx / 64) + 2], n, t, cnt;

vector<ui>primes(5761558);
unsigned int v[5761558];

bool Check(int n, int pos)
{
    return (bool)(n & (1 << pos));
}
int Set(int n, int pos)
{
    return n = n | (1 << pos);
}
void seive()
{
    for (int i = 3; i <= sqrt(mx); i += 2)
    {
        if (!(status[i / 64] & (1LL << (i % 64))))
        {
            for (int j = i * i; j <= mx; j += 2 * i)
            {
                status[j / 64] |= (1LL << (j % 64));
            }
        }
    }


    cnt = 0;
    primes[cnt++] = 2;
    for (int i = 3; i <= mx; i += 2)
    {
        if (!(status[i / 64] & (1LL << (i % 64))))
        {
            primes[cnt++] = i;
        }
    }

    v[0] = 2;

    for (int i = 1; i < cnt; i++)
    {
        v[i] = ((v[i - 1] % mod) * ( primes[i] % mod)) % mod;
    }


    return;

}

ll po(ll n, ll p)
{
    n = n / p;
    ui ans = 1;
    while (n >= p)
    {
        n /= p;
        ans = ans * p % mod;
    }
    return ans;
}



ll power(ll n)
{
    unsigned int ans;
    ans = 1;

    for (int i = 0; primes[i] *primes[i] <= n; i++)
    {
        ans = ans * po(n, primes[i]) % mod;

    }
    return ans;
}

ui solve(ll n)
{
    ui ans;
    ans = power(n);

    ui idx = upper_bound(primes.begin(), primes.begin() + cnt, n) - primes.begin();
    idx--;
    ans = ans * v[idx] % mod;
    return ans;
}

int main()
{


    seive();

    cin >> t;

    for (ui tc = 1; tc <= t; tc++)
    {
        cin >> n;
        cout << "Case " << tc << ": ";
        cout << solve(n) << endl;





    }
    return 0;
}




#include <bits/stdc++.h>  
using namespace std;
typedef long long ll;
ll MOD = 1000000007;
ll M = 10000007;
#define ff                       first
#define ss                        second
#define pb                        push_back
#define VI                        vector<long long>
#define pr                        pair<long long,long long>
#define all(x)                    (x).begin(), (x).end()
#define endl                      "\n"
#define dbg(x)                    cout<<#x<<" = "<<x<<endl
#define INF 2e18
#define fio()                     ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x)                    (x).begin(), (x).end()
#define sz(x)                     ((ll)(x).size())
 

long long fast_power(long long base, long long power)
{
    long long result = 1;
    while (power > 0)
    {

        if (power % 2 == 1)
        { 
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        power = power / 2; 
    }
    return result;
}



int main()
{

#ifndef  ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
#endif

    fio();
   long long p, q, n, m;
   
    cin >> p >> q >> n >> m;
    long long sum = 0;

    long long k = 1;
    while (k <= n)
    {
        sum = sum + (fast_power(p, k) * fast_power(k, q));
        k++;
    }
   
    long long ans = sum % m;
    
    cout << ans;
    return 0;
}
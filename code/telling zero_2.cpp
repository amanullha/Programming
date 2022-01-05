#include<bits/stdc++.h>
#define ll long long
using namespace std;


ll printNcR(ll n, ll r) 
{ 
  
    // p holds the value of n*(n-1)*(n-2)..., 
    // k holds the value of r*(r-1)... 
    long long p = 1, k = 1; 
  
    // C(n, r) == C(n, n-r), 
    // choosing the smaller value 
    if (n - r < r) 
        r = n - r; 
  
    if (r != 0) { 
        while (r) { 
            p *= n; 
            k *= r; 
  
            // gcd of p, k 
            long long m = __gcd(p, k); 
  
            // dividing by gcd, to simplify product 
            // division by their gcd saves from the overflow 
            p /= m; 
            k /= m; 
  
            n--; 
            r--; 
        } 
  
        // k should be simplified to 1 
        // as C(n, r) is a natural number 
        // (denominator should be 1 ) . 
    } 
  
    else
        p = 1; 
  
    // if our approach is correct p = ans and k =1 
   return p;
} 

ll binpow(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

int main()
{
	//prime_sieve();
	ll t,n,c,p,q,r,tot=0;
	cin>>t;
	//scanf("%lld",&t);

	for (ll tc = 1; tc <= t; tc++)
	{
		cin>>n>>r>>p>>q;
		cout<<n<<r<<p<<q;
		
		tot=printNcR(n,r)*binpow(p,q);
		cout<<"Case "<<tc<<": "<<tot<<endl;
		//printf("Case %lld: %lld\n",tc,tot);


	}
	return 0;
}
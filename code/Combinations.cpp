#include <bits/stdc++.h>
#define M 1000003
#define ll long long
using namespace std;

ll binomial(int n, int r)
{
  
    long long p = 1, k = 1; 
  
 
    if (n - r < r) 
        r = n - r; 
  
    if (r != 0) { 
        while (r) { 
            p =((p%M)* n)%M; 
            k *= r; 
  
            
            long long m = __gcd(p, k); 
  
            p /= m; 
            k /= m; 
  
            n--; 
            r--; 
        } 
  
        
    } 
  
    else
        p = 1; 
  
    
   return p%M;

}

int main()
{
	int t;
	cin >> t;

	for(int tc=1;tc<=t;tc++){
		ll n, k;
		cin >> n >> k;
		cout<<"Case "<<tc<<": ";
		cout << binomial(n, k) << endl;
	}

	return 0;
}
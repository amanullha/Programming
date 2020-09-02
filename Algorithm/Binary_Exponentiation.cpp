#include<bits/stdc++.h>
#define pb push_back()
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define M 10000007
using namespace std;
inline void Time() { cerr << "Time elapsed : "<<1.0 *clock() / CLOCKS_PER_SEC << " s. \n";}


ll Binary_Exponentiation(ll n, ll p, ll m) {
    n %= m;
    long long res = 1;
    while (p> 0) {
        if (p & 1)
            res = res * n % m;
        n = n * n % m;
        p >>= 1;
    }
    return res;
}

int main()
{
	
int n,p,m;
cin>>n>>p>>m;
// find out->(1/n)%m
cout<<Binary_Exponentiation(n,p,m)<<endl;


pf("\n\n");Time();
return 0;
}

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

inline void Time() { cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s. \n";}

int euclidean_GCD (int a, int b) {
	if (b == 0)
		return a;
	else
		return euclidean_GCD (b, a % b);
}


int main()
{

int a,b;
cin>>a>>b;
cout<<euclidean_GCD(a,b)<<endl;



	pf("\n\n"); Time();
	return 0;
}

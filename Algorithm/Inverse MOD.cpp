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


ll Binary_Exponentiation(ll n, ll p, ll m) {
	n %= m;
	long long res = 1;
	while (p > 0) {
		if (p & 1)
			res = res * n % m;
		n = n * n % m;
		p >>= 1;
	}
	return res;
}

ll Inverse_MOD(ll n, ll m)
{


	/*
	find out->(1/n)%m

	explaination:

	-> (a*b)%m=((a%m)*(b%m))%m
	if be b is 1/b so,

	we know,
	-> a^m-1=a (mod m)
	divide both side by a, then
	-> (a^m-1)/a=a/a (mod m)
	-> a^m-1-1=a/a (mod m)
	-> a^m-2=1 (mod m)


	so, for (1/x)%m will be (x^m-2)%m;

	*/

	return Binary_Exponentiation(n, m - 2, m);

}

int main()
{

	int n, m;
	cin >> n >> m;
// find out->(1/n)%m
	cout << Inverse_MOD(n, m) << endl;


	pf("\n\n"); Time();
	return 0;
}

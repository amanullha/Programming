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

// help link: https://www.youtube.com/watch?v=jhqFJe6-Cnk

/*
Extended euclidean for small number

int x, y;
int g = extended_euclidean(a, m, x, y);
if (g != 1) {
    cout << "No solution!";
}
else {
    x = (x % m + m) % m;
    cout << x << endl;
}

*/




ll extended_euclidean(ll a, ll b, ll &x, ll &y)
{
	if (a == 0)
	{
		x = 0;
		y = 1;
		return b;

	}
	ll x1, y1;
	ll gcd = extended_euclidean(b % a, a, x1, y1);

	x = (-(b / a) * x1) + y1;
	y = x1;


	return gcd;
}


int main()
{

	ll a , b;
	cin >> a >> b;
	ll x, y;



	cout << "gcd is : " << extended_euclidean(a, b, x, y) << endl;
	cout << "x is : " << x << endl;
	cout << "y is : " << y << endl;


	pf("\n\n"); Time();
	return 0;
}

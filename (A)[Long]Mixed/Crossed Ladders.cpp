/*
ld calculate_h(ld a,ld b,ld mid_h)
{
	ld A=0.0,B=0.0;
	A=((a*a)-(mid_h*mid_h));
	B=((b*b)-(mid_h*mid_h));
	ld new_h=(mid_h*(A*B))/(mid_h*(A+B));
	return new_h;
}
*/
#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf              scanf
#define sn(a)           scanf("%lld",&a)
#define snn(a,b)        scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ld double
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

#define M 1000007
#define sz 10000007
#define tc(cn) pf("Case %d: ",cn)


using namespace std;
inline void Time() { cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s. \n";}

int ts = 1;

ld calculate_h(ld a, ld b, ld mid)
{
	ld A = sqrt((a * a) - (mid * mid));
	ld B = sqrt((b * b) - (mid * mid));
	ld new_h = (A * B) / (A + B);
	return new_h;
}


void solve()
{



	ld a, b, h, ans = 0.0, low, high;
	cin >> a >> b >> h;

	low = 0.0;
	high = min(a, b);

	int cholbe = 150;

	while (cholbe--)
	{
		ld mid = low+(high-low)/2;

		ans = calculate_h(a, b, mid);


		if (ans > h)low = mid;
		else high=mid;
		
	}

	cout << "Case " << ts++ << ": ";
	//tc(ts++);

	cout << fixed << setprecision(10);
	cout << low << endl;




}

int main()
{
	fio;
	int t;
	cin >> t;
	while (t--)solve();

	return 0;
}

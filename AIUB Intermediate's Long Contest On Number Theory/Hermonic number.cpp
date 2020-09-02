#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define M 100000008
#define Mc 3333350
#define L 100 // 30 dia o AC hoy
#define EulerGamma 0.57721566490153286060651209;
using namespace std;
//inline void Time() { cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s. \n";}

double v[Mc + 5];
void harmonic()
{
	int i;


	double ans = 0.0;
	for (i = 1; i <= M; i++)
	{
		ans += ((1.0 / (double(i)))) * 1.0;
		if (i % L == 0)
			v[i / L] = ans;
	}


}


int main()
{
	harmonic();
	int t, tc = 1;
	//sf("%d", &t);
	cin >> t;
	while (t--)
	{
		int n;
		//sf("%d", &n);
		cin >> n;

		double d = 0.0;

		d = v[n / L];

		for (int i = ((n / L) * L )+ 1; i <= n; i++)
		{
			d += 1.0 / i;
		}


		pf("Case %d: ", tc++);
		pf("%.10lf\n", d);

	}




	return 0;
}

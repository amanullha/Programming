#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

#define M 10000007
#define sz 10000007
#define tc(cn) pf("Case %d: ",cn)
//#define c cin>>
//#define co cout<<

using namespace std;
inline void Time() { cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s. \n";}



void solve()
{
	int n, m;
	cin >> n >> m;
	int ar[n + 1];
	for (int i = 1; i <= n; i++)
	{
		cin >> ar[i];
	}
	int idx = 0;
	for (int i = n; i >= 1; i--)
	{
		if (ar[i] != i)
		{
			idx = i;
			break;
		}
	}
//cout<<"idx : "<<idx<<endl;
	int f = true;
	double yes = 0, no = 0;
	while (m--)
	{
		int r;
		double p;
		cin >> r >> p;
		if (r >= idx)
		{
			if (f)
			{
				yes = p;
				no = 1.0 - p;
				f = false;
			}
			else
			{
				yes += (no * p);
				no = 1.0 - yes;

			}
		}

	}
	if (idx != 0)
		cout << setprecision(6) << fixed << yes << endl;
	else
		cout << "1.000000" << endl;



}

int main()
{
	int t;
	cin >> t;
	while (t--)solve();




	//pf("\n\n\n\n"); Time();
	return 0;
}

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


using namespace std;

inline void Time() { cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s. \n";}


void solve()
{
	int n, m;
	cin >> n >> m;
	int sum = 0;
	int minn = INT_MAX;
	int neg = 0;

	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < m; j++)
		{
			int x;
			cin >> x;
			if (x < 0)neg++;
			sum += abs(x);
			minn = min(minn, abs(x));
		}

	}
	
	if(neg&1)
	{
		cout<<sum-(minn+minn)<<endl; // akbr count thake bad dilam and then count ar shathe add korlm. mane count thake minus korlm . karon all sell max count ans

	}
	else
	{
		cout<<sum<<endl;
	}






}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();



	pf("\n\n\n\n"); Time();
	return 0;
}

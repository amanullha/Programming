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

inline void Time() { cerr << "Time elapsed : "<<1.0 *clock() / CLOCKS_PER_SEC << " s. \n";}




int main()
{
	//fio;
	int t;
	//sf("%d", &t);
	cin >> t;
	while (t--)
	{
		int n, k;
		//sf("%d%d", &n, &k);
		cin >> n >> k;
		vector<int>v(n);
		for (int i = 0; i < n; i++)cin >> v[i]; //sf("%d", &v[i]);

		k -= 1;

		int val = v[k];
		sort(v.begin(), v.end());

		/*for (int i = 0; i < n; i++)
		{
			
			if (v[i] == val)
			{
				pf("%d\n", i + 1);
				break;
			}
		}
*/

		int idx = lower_bound(v.begin(), v.end(), val) - v.begin();
		pf("%d\n", idx + 1);





	}

//pf("\n\n\n\n");Time();

	return 0;
}

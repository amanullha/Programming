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

int main()
{

	int t;
	cin >> t;
	for (int tc = 1; tc <= t; tc++)
	{
		int n, m;
		cin >> n >> m;
		int v[n];
		int k = 0;

			string ans="";
		for (int i = 0; i < n; i++)
		{
			int minn = INT_MAX;

			for (int j = 0; j < m; j++)

			{
				int x;
				cin >> x;
				minn = min(minn, x);

			}
			if(i%2==0)ans="Alice";
			else ans="Bob";

			if(minn==0)
			{
				if(ans=="Alice")ans="Bob";
				else ans="Alice";
			}
			//k += minn; //v[i]=minn;
		}

		cout << "Case " << tc << ": ";
		cout<<ans<<endl;
		//if (k % 2 == 1)cout << "Bob" << endl;
		//else cout << "Alice" << endl;

	}

	return 0;
}

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
using namespace std;

inline void Time() { cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s. \n";}

int main()
{

	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		std::vector<int> v;
		for(int i=0;i<n;i++)
		{
			int p;
			cin>>p;
			v.pb(p);
		}
		if (n == 1){cout << "YES" << endl;continue;}

		bool f = 1;
		sort(v.begin(), v.end());

		for (int i = 0; i < n - 1; i++)
		{
			//cout<<v[i+1]<<"  "<<v[i]<<endl;
			if ((abs(v[i+1] - v[i])) > 1)f = 0;
		}

		if (f)cout << "YES" << endl;
		else cout << "NO" << endl;

	}


	pf("\n\n"); Time();
	return 0;
}
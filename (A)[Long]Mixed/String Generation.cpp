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
	int n, k;
	cin >> n >> k;
cout<<endl<<n<<" "<<k<<endl;
	if (k == 1)
	{
		int x = 0;
		while (n--)
		{
			if (x%3 == 0)cout << 'a';
			else if (x%3 == 1)cout << 'b';
			else if (x%3 == 2)cout << 'c';
			x++;
		}

	}
	else if (k == 2)
	{
		int cholbe = n / k;
		int x = 1;
		while (cholbe--)
		{
			if (x & 1)cout << "ab";
			else cout << "bc";
			x++;


		}
		if (n & 1)cout << 'a';

	}
	else
	{
		int cholbe = n / 3;

		while (cholbe--)
		{
			cout << "abc";
		}
		if (n % 3 == 2)cout << "ab";
		else if (n % 2 == 1)cout << "a";
	}





	cout << endl;

}

int main()
{
	int t;
	cin >> t;
	while (t--)solve();




	//pf("\n\n\n\n"); Time();
	return 0;
}

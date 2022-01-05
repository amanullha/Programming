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
	while (t--)
	{
		int n;
		cin >> n;
		int one = 0, zero = 0;
		while (n--)
		{
			int x;
			cin >> x;
			if (x == 1)one++;
			else zero++;
		}

		if (zero >= one)
		{
			cout <<zero << endl;
			for (int i = 0; i < zero; i++)cout << '0' << " ";
			cout << endl;
		}
		else {
			if (one & 1)one--;
			cout <<one << endl;
			for (int i = 0; i < one; i++)cout <<'1' << " ";
			cout << endl;
		}


	}
	return 0;
}

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
	int x, y;
	cin >> x >> y;
	if (x > y)swap(x, y);


	if (x == y)cout << x + x << endl;
	else if(x==0 || y==0)cout<<max(x,y)+max(x,y)-1<<endl;
	else {
		int sm = x + x;
		int d = y - x;
		sm += d + d;
		//if (d & 1)
			sm -= 1;

		cout << sm << endl;
	}

}


int main()
{
	int t;
	cin >> t;
	while (t--)solve();



//pf("\n\n\n\n");Time();
	return 0;
}

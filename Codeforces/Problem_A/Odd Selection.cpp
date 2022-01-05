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
	int n, x, p;
	cin >> n >> x;
	int nn=n;
	int odd = 0, even = 0;
	while (n--)
	{
		cin >> p;
		if (p & 1)odd++;
		else even++;
	}

//	if (x == 1 && odd)cout << "YES\n";
//	if (x == 2 && odd && even)cout << "YES\n";
	//cout<<endl<<n<<"  : "<<x<<endl;
	//cout << "odd : " << odd << "  even : " << even << endl << endl;
	

	if (odd == 0)
	{
		cout << "No\n";
		return;
	}
	x--;
	odd--;
	while(x!=0)
	{
		if (odd<=1 || x<2)break;
		x-=2;
		odd-=2;
	}
	if(x==0 || x<=even)
	
		cout<<"Yes\n";
	else cout<<"No\n";
		
	





}


int main()
{
	int t;
	cin >> t;
	while (t--)solve();

	//pf("\n\n\n\n"); Time();
	return 0;
}

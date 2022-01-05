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
	ll x, y, z;
	cin >> x >> y >> z;


	if ((x == y && z <= x) || (x == z && x >= y) || (z == y && x <= z))
	{
		ll minn=min({x,y,z});
		ll maxx=max({x,y,z});
		cout << "YES\n" << minn << " " << maxx<< " " << minn << endl;
	}
	else
		cout << "NO\n";
}
int main()
{
	int t;
	cin >> t;
	while (t--)solve();




	//pf("\n\n\n\n"); Time();
	return 0;
}



/*


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
	ll x, y, z;
	cin >> x >> y >> z;

	ll ar[]={x,y,z};
	sort(ar,ar+3);
	if(ar[1]==ar[2])
	{
		cout<<"YES"<<endl;
		cout<<ar[0]<<" "<<ar[1]<<" "<<ar[0]<<endl;
	}
	else cout<<"NO"<<endl;


	
}
int main()
{
	int t;
	cin >> t;
	while (t--)solve();




	//pf("\n\n\n\n"); Time();
	return 0;
}



*/

#include<bits/stdc++.h>
#define endl                 '\n'
#define PI              	acos(-1.0)
#define pf              	printf
#define sf            		scanf
#define ff 					first
#define ss					second
#define pb 					push_back
#define mk 					make_pair
#define ll 					long long
#define VI              	vector<long long>
#define pr 					pair<long long,long long>

#define sf1(a)              scanf("%d", &a)
#define sf2(a,b)            scanf("%d %d",&a, &b)
#define sf3(a,b,c)          scanf("%d %d %d", &a, &b, &c)

#define sl1(a)              scanf("%I64d", &a)
#define sl2(a,b)            scanf("%I64d %I64d", &a, &b)
#define sl3(a,b,c)			scanf("%I64d %I64d %I64d", &a, &b, &c)

#define SET(a,x)          	memset( a, x,    sizeof(a) )
#define SETV(a,x)         	memset(a.begin(), a.end(),x )
#define REP(i,a,b)       	for(long long i=a;i<b;i++)
#define all(x)              (x).begin(), (x).end()
#define sz(x)      			((int)x.size())
#define tc(cn) 				pf("Case %d: ",cn)

#define M 					10000007
#define INF                 2147483647

#define sqr(x)           	(x)*(x)
#define gcd(a, b)        	__gcd(a, b)
#define lcm(a, b)        	((a)*((b)/gcd(a,b)))

#define fio 				ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
using namespace std;
inline void Time() { cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s. \n";}





void solve()
{

	ll r, c;
	cin >> r >> c;

	ll s = max(r, c);
	ll start;
	if (s & 1)
	{
		ll age = s - 1;
		age = (age * age);

		start = age;
		//cout<<endl<<" s  "<<start<<endl;
		//c-=1;
		if (c == r)
		{
			cout << start + r << endl;
		}
		else if (c < r)cout << start + c << endl;
		else cout << start + c + (c - r) << endl;


	}
	else
	{
		ll age = s - 1;
		start = age * age;

		//cout<<endl<<"start  "<<start<<endl;
		if (r == c)cout << start + r << endl;
		else if (r < c)cout << start + r << endl;
		else cout << start + r + (r - c) << endl;

	}

}

int main()
{	//fio;


	int t ;
	cin >> t;
	//sf1(t);
	while (t--)solve();


	//pf("\n\n\n\n"); Time();
	return 0;
}


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
	ll n;
	cin >> n;
	priority_queue<pr>q;

	ll t = 0;
	for (ll i = 1; i <= n; i++)
	{
		ll x;
		cin >> x;
		t += x;
		if (x)q.push({x, i});
	}

	if (t & 1)
	{
		cout << "no" << endl;
		return;
	}
	if (q.size() == 0)
	{
		cout << "yes" << endl;
		return;
	}
	vector<pr>v;
	while (!q.empty())
	{
		if (q.size() == 1)
		{
			cout << "no" << endl;
			return;
		}

		auto x = q.top();
		q.pop();
		auto y = q.top();
		q.pop();

		v.pb({x.ss, y.ss});

		x.ff -= 1;
		y.ff -= 1;

		if (x.ff)q.push(x);
		if (y.ff)q.push(y);




	}

	cout << "yes" << endl;

	for (ll i = 0; i < v.size(); i++)
	{
		cout << v[i].ff << " " << v[i].ss << endl;
	}






}

int main()
{
	solve();


	//pf("\n\n\n\n"); Time();
	return 0;
}

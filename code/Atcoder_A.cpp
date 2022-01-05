/*
 *************** BISMILLAH HIR RAHMANIR RAHIM ***************

     AUTHOR: MD.AMANULLHA
     UNIVERSITY OF LIBERAL ARTS BANGLADESH
     DATE: / / 2021
*/
#include<iostream>
#include <string>       // std::string
#include <iostream>     // std::cout
#include <sstream>
#include <algorithm>    // std::sort
#include <vector>
#define endl                 '\n'
#define PI              	acos(-1.0)
#define pf              	printf
#define sf            		scanf
#define ff 					first
#define ss					second
#define pb 					push_back
#define mk 					make_pair
#define ll 					long long int
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

#define M 					1e18
#define INF                 2147483647

#define sqr(x)           	(x)*(x)
#define gcd(a, b)        	__gcd(a, b)
#define lcm(a, b)        	((a)*((b)/gcd(a,b)))

#define fio 				ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
using namespace std;
inline void Time() { cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s. \n";}

/*------------------------------Graph Moves----------------------------*/
//const int fx[]={+1,-1,+0,+0};
//const int fy[]={+0,+0,+1,-1};
//const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
//const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
//const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*---------------------------------------------------------------------*/

ll pow(ll a, ll b) {
	ll res = 1;
	while (b > 0) {
		if (b & 1)
			res = res * a;
		a = a * a;
		b >>= 1;
	}
	return res;
}

ll convert(string str, ll b)
{

	ll ans = str[str.size() - 1] - '0';
	ll bb = b;
	for (ll i = str.size() - 2; i >= 0; i--)
	{
		//cout<<" bb : "<<bb<<" str[i] : "<<str[i]<<"  ans  : "<<ans<<endl;
		ll aa = str[i] - '0';
		ans += (bb * aa);
		bb *= b;
	}
	return ans;
}


long  long MAP(long  long i) {
	if (i >= '0' && i <= '9') return i - 48;
	else if (i >= 'a' && i <= 'z') return i - 87;
	else return -1;
}
long  long ToDd(string s, long  long radix) {
	long  long current, exp, ans = 0;
	for (int i = s.size() - 1; i >= 0; i--) {
		current = MAP(s[i]);
		exp = s.size() - i - 1;
		if (current >= 0 && current < radix) {
			ans += current * pow(radix, exp);
		} else return -1;
	}
	return ans;
}


ll ToD(string x, ll mid)
{
	ll val = 0;
	ll n = x.size();
	for (ll j = 0; j < n; j++) {
		ll num = x[n - 1 - j] - '0';
		val += num * pow(mid, j);
	}
	return val;
}
void solve()
{

	//cout << "amsn";
	string s;
	ll k;
	cin >> s >> k;
	//cout << s << " : " << k << endl;

	if (s.size() == 1)
	{
		ll p = s[0] - '0';
		if (p <= k)cout << "1\n";
		else cout << "0\n";
		return;
	}


	ll mx = -1000000009;
	for (ll i = 0; i < s.size(); i++)
	{
		ll x = s[i] - '0';
		mx = max(mx, x);
	}
	//cout << s << " : " << k << " mx " << mx << endl;



	ll l = mx + 1, r = k + 1;
	ll cc = 0;
	while (1)
	{	cc++;
		ll mid = l + (r - l) / 2;

		cout << l << " : " << mid << " : " << r << endl;
		ll kk = ToD(s, mid);
		if (kk > k)r = mid;
		else l = mid;



		if (ToD(s, l) <= k && ToD(s, l + 1) > k)
		{
			cout << k << " end " << k << endl;
			cout << ToD(s, l) << " end " << ToD(s, l + 1) << endl;
			break;
		}
	}

	cout << cc << endl;
	cout << l - mx << endl;

	cout << ToD(s, 2) - k << endl;
	cout << ToD(s, 3) - k << endl;

	//cout << convert("1101", 2);

}

int main()
{	//fio;


	solve();


	//pf("\n\n\n\n"); Time();
	return 0;
}

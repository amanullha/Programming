
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

/*------------------------------Graph Moves----------------------------*/
//const int fx[]={+1,-1,+0,+0};
//const int fy[]={+0,+0,+1,-1};
//const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
//const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
//const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*---------------------------------------------------------------------*/
bool on(ll mask, ll i) {return mask & (1 << i);}


void df(VI &arr, VI &ans, ll pos, ll sum)
{

	if (pos > (ll)arr.size())return;
	if (sum)
		ans.pb(sum);

	df(arr, ans, pos + 1, sum + arr[pos]);
	df(arr, ans, pos + 1, sum);

}

void dfs(VI &arr, VI &ans)
{
	ll n = arr.size();
	for (ll mask = 0; mask <(1 << n); mask++)
	{

		ll sub = 0;
		for (ll i = 0; i < n; i++)
		{

			if (on(mask, i))sub += arr[i];
		}
		ans.pb(sub);
		//cout<<sub<<" ";
	}

}


void solve()
{

	ll n, a, b;
	cin >> n >> a >> b;
	ll hf1 = n/2;
	ll hf2 = n-hf1;
	VI v, vv;

	for (ll i = 0; i < hf1; i++)
	{
		ll x;
		cin >> x;
		v.pb(x);
	}

	for (ll i = 0; i <hf2; i++)
	{
		ll x;
		cin >> x;
		vv.pb(x);
	}



	VI aa, bb;

	dfs(v, aa);
	dfs(vv, bb);

	sort(all(aa));

	ll c = 0;
	for (ll i = 0; i < (ll)bb.size(); i++)
	{
		ll x = lower_bound(all(aa), a - bb[i]) - bb.begin();
		ll y = upper_bound(all(aa), b - bb[i]) - bb.begin();

		c += y - x;
	}
	cout <<c << endl;




}

int main()
{

	solve();

	//cout << endl << endl;
	//pf("\n\n\n\n"); Time();
	return 0;
}

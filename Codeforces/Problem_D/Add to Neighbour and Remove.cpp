/*
 *************** BISMILLAH HIR RAHMANIR RAHIM ***************

     AUTHOR: MD.AMANULLHA
     UNIVERSITY OF LIBERAL ARTS BANGLADESH
     DATE:16/Dec/2021
*/
#include<bits/stdc++.h>
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

#define sl1(a)              scanf("%lld", &a)
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


ll equal(ll k, VI v, ll n, ll tsum)
{
	ll segment = n - k;
	//if(tsum%segment!=0)return false;
	ll ssum =tsum/segment;
	
	


	ll ts = 0;
	REP(i, 1, n + 1)
	{
		ts += v[i];
		if(ts==ssum)ts=0;
		if (ts > ssum)return false;
		
	}
	if (ts == 0)
		return true;
	else return false;
}


void solve()
{
	ll n;
	
	cin>>n;
	VI v(n+1);
	v[0]=INT_MIN;
	ll tsum = 0;
	
	REP(i, 1, n + 1)
	{
		
		cin>>v[i];
		tsum += v[i];
	}

	

	REP(i, 1, n + 1)
	{
		if (equal(i-1, v, n, tsum))
		{
			
			pf("%lld\n", i-1);
			return;
		}
	}


}

int main()
{
	int t;
	cin >> t;
	
	while (t--)solve();



	return 0;
}

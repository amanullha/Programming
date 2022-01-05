/*
 *************** BISMILLAH HIR RAHMANIR RAHIM ***************

     AUTHOR: MD.AMANULLHA
     UNIVERSITY OF LIBERAL ARTS BANGLADESH
     DATE: / / 2021
*/
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

#define M 					100007
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

/*

int dp[M];
vector<ll>two;

bool f(ll n)
{
	if (n == 0)return 0;


	if (dp[n] != -1)return dp[n];

	bool fg = 1;

	for (int i = 0; i < two.size() && two[i] <= n; i++)
	{
		if (n - two[i] >= 0)
			if (f(n - two[i]) == 0)
			{
				dp[n] = 1 ;
				fg = 0;
				break;
			}
	}

	if (fg)
		dp[n] = 0;

	return dp[n];



}


*/

void solve()
{

	ll n=0;

	string s;
	cin>>s;
	for(char x:s)
	{
		n+=(int)x-48;
	}


	//sl1(n);
	//cin >> n;

	if(n%3==0)cout<<"2"<<endl;
	else 
		{
			cout<<"1"<<endl;

			// Find the first move
		}


/*
	two.pb(1);
	two.pb(2);
	ll x = 2;

	memset(dp, -1, sizeof dp);
	//dp[1] = false;
	//dp[2] = false;


	for (int i = 2; i < 15; i++)
	{
		x = x << 1;
		//dp[x] = false;
		two.pb(x);
	}
	for (ll i = 0; i < 20; i++)
	{
	//ll i = 7;
	ll n = i;
	cout << n << " : ";
	if (f(n))cout << "1" << endl;
	else cout << "2" << endl;
	}

	//for(ll i=0;i<=n;i++)cout<<i <<"  : "<<dp[i]<<endl;
	*/
}

int main()
{
	solve();

	return 0;
}

/**

n : (1=win,2=lose)
0 : 2
1 : 1
2 : 1
3 : 2
4 : 1
5 : 1
6 : 2
7 : 1
8 : 1
9 : 2
10 : 1
11 : 1
12 : 2
13 : 1
14 : 1
15 : 2
16 : 1
17 : 1
18 : 2
19 : 1



 **/
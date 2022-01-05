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

#define M 					110
#define INF                 2147483647

#define sqr(x)           	(x)*(x)
#define gcd(a, b)        	__gcd(a, b)
#define lcm(a, b)        	((a)*((b)/gcd(a,b)))

#define fio 				ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
using namespace std;
inline void Time() { cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s. \n";}



int n;
int dp[M][M];

int calculate(int l, int r, vector<int>&v)
{
	if (l > r)return 0;
	if (dp[l][r] != INF)return dp[l][r];

	int ans = -INF, add = 0;

	for (int i = l; i <= r; i++)
	{
		add += v[i];

		ans = max(ans, add - calculate(i + 1, r, v));
	}
	add = 0;
	for (int i = r; i >= l; i--)
	{
		add += v[i];
		ans = max(ans, add - calculate(l, i - 1, v));
	}

	return dp[l][r] = ans;
}


void solve()
{

	vector<int>v(n);

	for (int &x : v)cin >> x;


	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < M; j++)dp[i][j] = INF;
	}

	cout << calculate(0, n - 1, v) << endl;



}

int main()
{



	while (cin >> n && n)
	{
		solve();
	}




	return 0;
}

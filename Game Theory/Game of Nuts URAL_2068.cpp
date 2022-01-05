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

#define M 					54321+100
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



vector<int>odd;
int dp[M];
int f(int n)
{

	if (n == 1 || n % 2 == 0)return false;

	if (dp[n] != -1)return dp[n];

	for (int i = 0; i < (int) odd.size() && odd[i] <= n; i++)
	{
		for (int j = 0; j < (int) odd.size() && odd[j] <= n; j++)
		{
			for (int k = 0; k < (int) odd.size() && odd[k] <= n; k++)
			{
				int x = odd[i], y = odd[j], z = odd[k];

				if (x + y + z == n && x && y && z && !f(x) && !f(y) && !f(z))
				{
					return dp[n] = 1;

				}
			}
		}
	}

	return dp[n] = 0;

}


void solve()
{


int n;
cin>>n;
bool ans=0;

while(n--)
{
	int x;
	cin>>x;
	int p=x/2;

	if(x==1)ans^=0;
	else if(p&1)ans^=1;
	else ans^=0;

	


}
if (ans)cout << "Daenerys" << endl;
	else cout << "Stannis" << endl;

/*
	memset(dp, -1, sizeof dp);
	int x = 1;
	while (x <= 54321)
	{
		odd.pb(x);
		x += 2;
	}
	for (int i = 1; i < 100; i+=2)
	{
		cout << i << " : " << f(i) << endl;
	}

*/



	/*int n;
	cin >> n;
	vector<int>v(n);
	for (int &x : v)cin >> x;
	memset(dp, -1, sizeof dp);

	int x = 1;
	while (x <= 54321)
	{
		odd.pb(x);
		x += 2;
	}


	bool ans = 0;

	for (int x : v)
		ans ^= f(x);

	if (ans)cout << "Daenerys" << endl;
	else cout << "Stannis" << endl;

	*/


}

int main()
{	//fio;


	solve();


	//pf("\n\n\n\n"); Time();
	return 0;
}


/**
 
 1 : 0
3 : 1
5 : 0
7 : 1
9 : 0
11 : 1
13 : 0
15 : 1
17 : 0
19 : 1
21 : 0
23 : 1
25 : 0
27 : 1
29 : 0
31 : 1
33 : 0
35 : 1
37 : 0
39 : 1
41 : 0
43 : 1
45 : 0
47 : 1
49 : 0
51 : 1
53 : 0
55 : 1
57 : 0
59 : 1
61 : 0
63 : 1
65 : 0
67 : 1
69 : 0
71 : 1
73 : 0
75 : 1
77 : 0
79 : 1
81 : 0
83 : 1
85 : 0
87 : 1
89 : 0
91 : 1
93 : 0
95 : 1
97 : 0
99 : 1


 **/
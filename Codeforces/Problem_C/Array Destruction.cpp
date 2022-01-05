/*

 *************** BISMILLAH HIR RAHMANIR RAHIM ***************

     AUTHOR: MD.AMANULLHA
     UNIVERSITY OF LIBERAL ARTS BANGLADESH
     DATE: 21/01/ 2021
     
 ************************************************************

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






void solve()
{
	int n;
	cin >> n;
	n += n;
	VI v(n);
	for (auto &x : v)cin >> x;



	sort(all(v));
	int maxval = v[n - 1];

	//bool p = true;

	for (int i = 0; i < n-1; i++)
	{
		

		multiset<int, greater<int>>set;
		vector<pr>pair;

		for (int x : v)set.insert(x);

		int positiveint = maxval + v[i];


		bool setempty = true;
		while (!set.empty())
		{
			int set_max = *set.begin();
			set.erase(set.find(set_max));

			int small = positiveint - set_max;


			if (set.find(small) == set.end() && set.size() != 0)
			{

				setempty = false;

				break;
			}

			pair.push_back({set_max, small});
			positiveint = max(set_max, small);

			set.erase(set.find(small));

		}
		if (setempty)
		{
			cout << "YES" << endl;
			cout << maxval + v[i] << endl;
			for (auto x : pair)cout << x.ff << " " << x.ss << endl;
			///p = 0;
			return;
		}


	}
	//if (p)
		cout << "NO" << endl;

}

int main()
{	//fio;


	int t;
	cin >> t;
	//sf1(t);
	while (t--)solve();


	//pf("\n\n\n\n"); Time();
	return 0;
}

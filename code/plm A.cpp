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
	ll n;
	cin >> n;
	vector<string>v(n);

	vector<int> p, q;
	for (int i = 0; i < n; i++)
	{
		stringstream geek(v[i]);
		int x;
		geek >> x;
		p.pb(x);
	}
	q = p;
	sort(all(q));

	if (p != q)
	{
		for (string &x : v)cout << x << " ";
	}

	for (string &x : v)cin >> x;
	bool f = 1;
	for (int i = 0; i < n - 1; i++)
	{

		int j = i + 1;

		string a = v[i];
		string b = v[j];

		if (a.size() == b.size())
		{
			cout << a << " : " << b << endl;

			for (int k = 0; k < (int)a.size(); k++)
			{
				if (a[k] == b[k] && a[k] == '1')
				{
					//cout << " e1"  << i << "  " << a << " : " << b << endl;

					a[k] = '9';
					if (b < a)
					{
						v[i] = a;
						f = 0;
						for (string &x : v)cout << x << " ";
						return;
					}

				}
				else if (a[k] == b[k] && a[k] != '1')
				{
					//cout << " e2"  << i << "  " << a << " : " << b << endl;

					b[k] = '1';
					if (b < a)
					{
						v[j] = b;
						f = 0;
						for (string &x : v)cout << x << " ";
						return;
					}

				}

				else if (a[k] < b[k] && b[k] != '9')
				{
					//cout << " if1"  << i << "  " << a << " : " << b << endl;
					a[k] = '9';

					if (b < a)
					{
						v[i] = a;
						f = 0;
						for (string &x : v)cout << x << " ";
						return;
					}
				}
				else if (a[k] < b[k] && a[k] != '1')
				{
					//cout << " if2"  << i << "  " << a << " : " << b << endl;
					b[k] = '1';

					if (b < a)
					{
						v[j] = b;
						f = 0;
						for (string &x : v)cout << x << " ";
						return;

					}
				}




			}

		}
	}

	cout << "impossible" << endl;

	//for (string &x : v)cout << x << " ";


}

ll s1, s2, s3;
int main()
{
	ll n;
	cin >> n;

	for (ll i = 0; i < n; i++)
	{
		ll x;
		cin >> x;

		if (x == 1)++s1;
		else if (x == 2) s2 += s2 + s1;
		else if (x == 3)s3 += s2;

		cout<<s1<<" "<<s2<<" "<<s3<<endl;
	}
	cout << s3 << endl;
	//pf("\n\n\n\n"); Time();
	return 0;
}


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

void replace(string & s,char c,char r)
{
	for (int i = 0; i <(int)s.size(); ++i)
	{
		s[i]==c?(s[i]=r):s[i]=s[i];
	}
}
bool valid(string s, char a,char b,char c)
{
	replace(s,'A',a);
	replace(s,'B',b);
	replace(s,'C',c);

	int val=0;

	for (int i = 0; i < s.size(); ++i)
	{
		if(s[i]==')')val++;
		else val--;
		if(val<0)return 0;
	}

	return val==0;
}



void solve()
{
	string s;
	cin >> s;
	
	string x="()",y="()",z="()";

	for(char p:x)
	{
		for(char q:y)
		{
			for(char r:z)
			{
				if(valid(s,p,q,r))
				{
					cout<<"YES"<<endl;
					return;
				}
			}
		}
	}

cout<<"NO"<<endl;
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

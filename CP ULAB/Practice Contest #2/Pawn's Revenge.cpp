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

#define M 					1010
#define INF                 2147483647

#define sqr(x)           	(x)*(x)
#define gcd(a, b)        	__gcd(a, b)
#define lcm(a, b)        	((a)*((b)/gcd(a,b)))

#define fio 				ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
using namespace std;
inline void Time() { cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s. \n";}


char arr[M][M];
bool atk[M][M];

int movex[8] = {0, 0, +1, -1, -1, +1, -1, +1};
int movey[8] = { -1, +1, 0, 0, -1, -1, +1, +1};

bool valid(int i, int j, int n)
{
	if (i >= 0 && i <= n && j >= 0 && j <= n)return true;
	else return false;
}


void pt(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << arr[i][j] << " " ;

		} cout << endl;
	}
}
void ppt(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << atk[i][j] << " " ;

		} cout << endl;
	}
}
void solve()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> arr[i][j];

		}
	}


	//pt(n);
	//ppt(n);


	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (arr[i][j] == 'K')
			{
				atk[i - 1][j - 1] = 1;
				atk[i - 1][j] = 1;
				atk[i - 1][j + 1] = 1;
				atk[i][j - 1] = 1;
				atk[i][j + 1] = 1;
				atk[i + 1][j - 1] = 1;
				atk[i + 1][j] = 1;
				atk[i + 1][j + 1] = 1;

			}
		}
	}
	//pt(n);
	//ppt(n);

	int sum = 0;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (arr[i][j] == '*' && atk[i][j] == 0)
			{
				if (valid(i + 1, j + 1, n) && arr[i + 1][j + 1] == '-')
				{
					arr[i + 1][j + 1] = '1';
					atk[i][j] = 1;

					if (valid(i, j + 2, n))
					{
						atk[i][j + 2] = 1;
					}
					sum++;
				}
				else if (valid(i + 1, j - 1, n) && arr[i + 1][j - 1] == '-')
				{
					arr[i + 1][j - 1] = '1';
					atk[i][j] = 1;
					sum++;
				}
			}
		}
	}


	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{

			if(arr[i][j]=='*'&& atk[i][j]!=1)
			{
				cout<<"-1"<<endl;
				return;
			}

		}
	}

	cout<<sum<<endl;

}

int main()
{	solve();



	return 0;
}

#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define M 10000007
#define sz 10000007
#define tc(cn) pf("Case %d: ",cn)
using namespace std;

int ans = 0;
string s, ss;
int dp[1010][1010];

int f(int i, int j)
{
	if (i >= (int)s.size() || j >= (int) ss.size())return 0;// length ar increase hobe nah 

	if (dp[i][j] != -1)return dp[i][j];
	int x=0, y=0;

	if (s[i] == ss[j])  x = f(i + 1, j + 1) + 1;// some hole length 1 add hobe

	else
	{
		int l1 = f(i + 1, j);
		int l2 = f(i, j + 1);
		y = max(l1, l2);
	}
	return dp[i][j] = max(x, y);


}


int main()
{

	while (getline (cin,s))
	{
		getline (cin,ss);

		memset(dp, -1, sizeof(dp));
		cout << f(0, 0) << endl;
	}



	return 0;
}



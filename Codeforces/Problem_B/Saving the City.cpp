#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

#define M 100005
#define sz 10000007
#define tc(cn) pf("Case %d: ",cn)


using namespace std;
bool bist[100055];

int cost = 0;
int mine, actived;
string ss, s;
/*\
  while (i < s.size() && s[i] == '0')
        i++;
*/

void solve()
{

	int mine, actived;
	cin >> actived >> mine;
	cin >> s;

	int first=-5,last=-5;
	for(int i=0;i<(int)s.size();i++)
	{
		if(s[i]=='1' && first==-5)first=i;
		if(s[i]=='1')last=i;
	}

if(first==-5 && last==-5)
{
	//cout<<s<<endl;
	cout<<'0'<<endl;
	return;
}

	cost = actived;
	for (int i = first; i <= last; i++)
	{
		int zero = 0;
		while (s[i] == '0')
		{
			zero++;
			i++;
		}



		int x = (zero * mine);
		int y = actived;
		cost += min(x, y);




	}
	cout << cost << endl;



}


int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();


	return 0;
}

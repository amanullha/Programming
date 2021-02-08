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
//#define c cin>>
//#define co cout<<

using namespace std;
inline void Time() { cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s. \n";}



void solve()
{
	string s;
	cin>>s;
	int v=0, b=0,ans=0;
	for (char c : s)
	{
		if(c=='(')v++;
		else if(c==')' && v>0)v--,ans++;
		else if(c=='[')b++;
		else if(c==']' && b>0)b--,ans++;

	}
	cout<<ans<<endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)solve();




	//pf("\n\n\n\n"); Time();
	return 0;
}

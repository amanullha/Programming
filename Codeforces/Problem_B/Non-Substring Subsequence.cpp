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
#define c cin>>
#define co cout<<

using namespace std;
inline void Time() { cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s. \n";}



void solve()
{
	int n, q;
	cin >> n >> q;
	string s;
	cin >> s;
	//cout<<s<<endl;
	while (q--)
	{
		int l, r;
		cin >> l >> r;

		string ss = "";
		for (int i = l; i <= r; i++)ss += s[i - 1];


		bool bf = 0, af = 0;
		for (int i = 0; i < l - 1; i++)	if (ss[0] == s[i]) {bf = 1; break;}


		for (int i = r; i < s.size(); i++)if (ss[ss.size() - 1] == s[i]) {af = 1; break;}

		if (af || bf)cout << "YES" << endl;
		else cout << "NO" << endl;






	}

}

int main()
{
	int t;
	cin >> t;
	while (t--)solve();




	//pf("\n\n\n\n"); Time();
	return 0;
}

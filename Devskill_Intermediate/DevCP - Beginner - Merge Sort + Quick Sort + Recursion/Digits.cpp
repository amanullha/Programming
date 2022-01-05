#include<bits/stdc++.h>
#define pb push_back()
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

#define M 10000007
using namespace std;

inline void Time() { cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s. \n";}

ll d(string s, ll l)
{
	ll length=s.size();
	string n_s=to_string(length);
	if(s==n_s)return l+1;

	return d(n_s,l+1);


}



int main()
{

	string s;
	while (cin >> s && s != "END")
	{
		int l=0;
		cout<<d(s,l)<<endl;
	}
	//pf("\n\n"); Time();
	return 0;
}

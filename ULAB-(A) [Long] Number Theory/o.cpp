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

int re(int n)
{
	if(n==1)return 1;
	else if(n==2)return 3;
	else if(n==3)return 2;
	else if (n==4)return 3;
	else if (n==5)return 4;
	else return 1+re(n-1);

}

void solve()
{
	int n;
	cin>>n;
	/*if(n==1)cout<<'1'<<endl;
	else if(n==2)cout<<'3'<<endl;
	else cout<<n-1<<endl;
	*/
	cout<<re(n)<<endl;

}

int main()
{
	int t;
	cin >> t;
	while (t--)solve();




	//pf("\n\n\n\n"); Time();
	return 0;
}

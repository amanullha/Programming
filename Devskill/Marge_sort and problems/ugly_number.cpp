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
inline void Time() { cerr << "Time elapsed : "<<1.0 *clock() / CLOCKS_PER_SEC << " s. \n";}



map<ll,bool>un;

void ugly(ll n)
{
	if(n>M)return ;
	if(un.find(n)!=un.end())return;

un[n]=true;
if(un.size()>100)return;
ugly(n*2);
ugly(n*3);
ugly(n*5);

}



int main()
{
ugly(1);
//un.sort(un.begin(), un.end());
for(auto x: un)
	cout<<x.first<<"   ";


//pf("\n\n");Time();
return 0;
}

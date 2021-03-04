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

ll a,b,c,d,e;
bool f;
ll co;
void find(ll t)
{
	if(t==23){f=1;return;}
	if(t<0 || t>23){co++;return;}

	find(t*a);
	find(t*b);
	find(t*c);
	find(t*d);
	find(t*e);

	find(t-a);
	find(t-b);
	find(t-c);
	find(t-d);
	find(t-e);

	find(t+a);
	find(t+b);
	find(t+c);
	find(t+d);
	find(t+e);
}

int main()
{
ll a,b,c,d,e;
cin>>a>>b>>c>>d>>e;
f=0;
co=0;
ll target=23;
find(1);
if(f)cout<<"p";
else cout<<"n";



//pf("\n\n\n\n");Time();
return 0;
}

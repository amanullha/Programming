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


void solve()
{
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)cin>>v[i];

	int f=0,e=n-1;
while(v[f]>=v[f+1])f++;
while(v[e]>=v[e-1])e--;

cout<<"f "<<f<<"  e  "<<e<<endl;




if(e-f==2 || e-f==0|| e-f<0)cout<<"YES\n";




else cout<<"NO\n";

}

int main()
{
	int t;
	cin>>t;
	while(t--)solve();



return 0;
}

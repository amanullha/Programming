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


int main()
{
	
int k;
string s;
cin>>s>>k;

ll sum=0;
for(char x:s)
{
	sum+=(x-'0');
}

sum*=k;


if(sum%9==0)cout<<'9'<<endl;
else cout<<sum%9<<endl;

return 0;
}

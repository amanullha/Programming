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


void permutation(string s,int l,int r)
{
	if(l==r)
	{
		cout<<s<<endl;
		return;
	}
	for(int i=l;i<=r;i++)
	{
		swap(s[l],s[i]);
		permutation(s,l+1,r);
		swap(s[l],s[i]);
	}
}

int main()
{
	string s;
	cin>>s;
	permutation(s,0,s.size()-1);



return 0;
}

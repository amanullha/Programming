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
	ll n;
	cin >> n;
	string s, ss;
	cin >> s;
	int change=0;


	for (int i = 0; i < n-1; i++)
	{
		if(s[i]==s[i+1])
		{
			change++;
			if( s[i]=='B' && s[i+1]=='B')s[i+1]='R';
			if(s[i]!='R' && s[i+2]!='R')s[i+1]='R';
			else if(s[i]!='G' && s[i+2]!='G')s[i+1]='G';
			else if(s[i]!='B' && s[i+2]!='B')s[i+1]='B';
			


		}
	}
	cout<<change<<endl;
	cout<<s<<endl;


	return 0;
}

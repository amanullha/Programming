#include<bits/stdc++.h>
#define pb push_back()
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long

#define M 10000007
using namespace std;

void lcs(string s)
{
	ll dp[26]={0};

	for(char x:s)dp[x-'a']++;

	int minn=INT_MAX;
	for(int x:dp)minn=min(minn,x);
		cout<<minn<<endl;


	

}



int main()
{
	int t,tc=1;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		cout<<"Case "<<tc++<<": ";
		lcs(s);
	}

return 0;
}

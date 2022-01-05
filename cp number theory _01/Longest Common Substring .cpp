#include <bits/stdc++.h>
#define ll long long


using namespace std;

int main()
{
string s1,s2;
cin>>s1>>s2;

if(s1.size()==0 || s2.size()==0)cout<<"0"<<endl;

int dp[s1.size()+1][s2.size()+1];

for(int i=0;i<=s1.size()+1;i++)dp[i][0]=0;
for(int i=0;i<=s2.size()+1;i++)dp[0][i]=0;
// first row and first column are zero(0)for if s1 or s2 be a empty string 

int maxlen=INT_MIN;

for(int i=1;i<=s1.size()+1;i++)
{
	for(int j=1;j<=s2.size()+1;j++)
	{

		if(s1[i-1]==s2[j-1])
		{
			dp[i][j]+=dp[i-1][j-1]+1;
		}
		else dp[i][j]=0;
		maxlen=max(maxlen,dp[i][j]);

	}
}




cout<<maxlen<<endl;

return 0;

}
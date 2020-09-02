// longest common subs string 
#include <bits/stdc++.h>
#define M 2500
using namespace std;

int dp[M][M];// all sell are zero(0) in dp

int main()
{
string s1,s2;
cin>>s1>>s2;

// first row and first column are zero(0)for if s1 or s2 be a empty string 

int maxlen=0;
int maxindex_i=0,maxindex_j=0;
for(int i=1;i<=s1.size();i++)
{
	for(int j=1;j<=s2.size();j++)
	{

		if(s1[i-1]==s2[j-1])
		{
			dp[i][j]=dp[i-1][j-1]+1;
		}
		else dp[i][j]=0;

		if(dp[i][j]>maxlen){
			maxlen=dp[i][j];
			maxindex_i=i-1;
			maxindex_j=j-1;
		}
	}
}


for(int i=0;i<=s1.size();i++)
{
	for(int j=0;j<=s2.size();j++)
	{
cout<<dp[i][j]<<"   ";
}cout<<endl<<endl;
}


cout<<maxlen<<endl;
cout<<maxindex_i<<endl;
cout<<maxindex_j<<endl;
string s;
while(maxlen--)
{
	s+=s1[maxindex_i];
	maxindex_i--;
}
reverse(s.begin(), s.end());
cout<<s1<<endl;
cout<<s2<<endl;
cout<<s;

return 0;

}


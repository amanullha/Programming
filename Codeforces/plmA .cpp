#include<bits/stdc++.h>

using namespace std;


int main()
{
	
int t;
cin>>t;
while(t--)
{
	int n,x;
	cin>>n;
	string s;
	char c;
	cin>>s;
	if(s.size()>3)c=s[1];
	else c=s[0];
	x=c-'0';

	if(x&1)cout<<'1'<<endl;
	else cout<<'2'<<endl;
}

return 0;
}

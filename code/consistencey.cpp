#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
set<string>trac;
string s[n];
for(int i=0;i<n;i++)
{
cin>>s[i];
trac.insert(s[i]);
}

sort(s,s+n);
int l=s[0].size();
cout<<l;
for(int i=0;i<n;i++)
{
string p;
for(int j=0;j<l+(s[i].size-l);j++)
{
p+=


}


}



return 0;
}

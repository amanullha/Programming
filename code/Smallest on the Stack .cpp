#include<bits/stdc++.h>
using namespace std; 
vector<int>v,vv;
int main()
{
	int t,mn=INT_MAX;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		if (s=="PUSH")
		{
			int n;
			cin>>n;
			

			v.push_back(n);
		}
		else if (s=="MIN")
		{
			vv=v;
			sort(vv.begin(),vv.end());
			cout<<vv[0]<<endl;
		}
		else if (s=="POP")
		{
			int l=v.size();
			v.erase(v.begin()+l);
		}
	}



return 0;
}
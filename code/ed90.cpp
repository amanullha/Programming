#include<bits/stdc++.h>
#define cp_io ios_base::sync_with_stdio(0);cin.tie(0)
#define M 1000002
#define ll long long
using namespace std;

int main()
{

	cp_io;
	int t;
	cin >> t;
	while (t--) {

		string s;
		cin >> s;
		int one=0,zero=0;
		int l = s.size();
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='1')one++;
			else zero++;

		}
		if(one==0 or zero ==0){
			cout<<"NET"<<endl;continue;
		}
		int c=0;
		
			for(int i=0;i<s.size()-1;i+=2)
			{
				
				if((s[i]=='1' && s[i+1]=='0') || (s[i]=='0' && s[i+1]=='1'))
				{
					c++;	
					
				}
			}
		
		
cout<<c<<endl;
		//if(c&1)cout<<"DA"<<endl;
		//else cout<<"0NET"<<endl;
		//cout<<s<<endl;
	}
	return 0;
}
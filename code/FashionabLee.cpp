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
	while (t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;

		bool f=1;
		cout<<" f s "<<s<<endl;
		while(f)
		{
			bool fg=1;
			for(int i=0;i<s.size();i++)
			{
				if(s[i]=='1' && s[i+1]=='0')
				{
					
					fg=0;
					if(s[0]=='1' && s[1]=='0' && s.size()>3)
					{
						s.erase(s.begin()+(i+1));
					}

					else if(s[0]=='1' && s[1]=='0' && s.size()<=3)
					{
						s.erase(s.begin()+i);
					}

					else if(s[i+2]=='0')
					{
						s.erase(s.begin()+(i+1));
					}
					else if (s[i+2]=='1' && s[i-1]=='1')
					{
						s.erase(s.begin()+i);
					}
					else if(s[i+2]=='1' && s[i-1]=='0')
					{
						s.erase(s.begin()+i);
					}
			}
			
		}
	if(fg)f=0;



	}


cout<<"output "<<s<<endl;
}

	return 0;
}
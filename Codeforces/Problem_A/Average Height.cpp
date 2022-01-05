
#include<bits/stdc++.h>

using namespace std;



void solve()
{
	int total;
	cin>>total;
	std::vector<int> v(total);
	for(int &x:v)cin>>x;

	for(int i=0;i<total;i++)
	{
		if(v[i]&1)cout<<v[i]<<" ";
	}

	for(int i=0;i<total;i++)
	{
		if(v[i]&1){}
			else cout<<v[i]<<" ";
	}
cout<<endl;
}

int main()
{ 


	int c;
	cin>>c;

	while (c--)solve();
	
	return 0;
}

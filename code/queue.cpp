#include<bits/stdc++.h>
#define cp_io ios_base::sync_with_stdio(0);cin.tie(0)
#define M 1000002
#define ll long long
using namespace std;

int main()
{

	cp_io;
	int n,t;
	cin>>n>>t;

	queue<pair<string,int> >q;
	while(n--)
	{
		string s;
		int n;
		cin>>s;
		cin>>n;

		q.push(make_pair(s,n));

	}
	int c=0;
while(!q.empty())
{
	auto p=q.front();

	int x=p.second;
	string y=p.first;

	if(x>t){
		x=x-t;
		c+=t;
		q.push(make_pair(y,x));
	}
	else
	{
		c+=x;
		cout<<y<<" "<<c<<endl;
	}





	//cout<<p.first<<"   "<<p.second<<endl;
	q.pop();
}
	
	return 0;
}
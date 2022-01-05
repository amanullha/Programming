#include<bits/stdc++.h>
#define ll long long
#define M 10000000
#define cp_io ios_base::sync_with_stdio(0);cin.tie(0)
using namespace std;


stack<int>st;
multiset<int>q;

int main()
{
	cp_io;
	ll an=0;
	cp_io;
	ll a,b;
	while(cin>>a>>b)
	{
		if (a==0 && b==0)return 0;
		vector<ll>cd(M,0);
	while(a--)
	{
		ll x;
		cin>>x;
		cd[x]++;

	}
an=0;
while(b--)
	{
		ll x;
		cin>>x;
		cd[x]++;
		if(cd[x]>=2)an++;

	}
	

	cout<<an<<endl;
}
	

return 0;
}
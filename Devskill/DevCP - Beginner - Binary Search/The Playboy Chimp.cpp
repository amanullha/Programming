#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int>v;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	
	//for(int x:v)cout<<x<<" ";
	//	cout<<endl<<endl;

std::vector<int>::iterator lo;
std::vector<int>::iterator up;

	int q;
	cin>>q;
	while(q--)
	{
		int x;
		cin>>x;

		lo=lower_bound(v.begin(), v.end(),x);
		up=upper_bound(v.begin(), v.end(),x);

		int st=lo-v.begin();
		int tl=up-v.begin();
		//cout<<endl<<"x "<<x<<" lo "<<st<<"  up  "<<tl<<endl;

		if(st==tl)
		{

		if(st==0)cout<<"X ";
		else 
		cout<<v[st-1]<<" ";

		if(tl==n)cout<<"X"<<endl;
		else
		cout<<v[tl]<<endl;


		}
	else
	{

		if(st==0)cout<<"X ";

		else 
		cout<<v[st-1]<<" ";

		if(tl==n)cout<<"X"<<endl;
		else
		cout<<v[tl]<<endl;

	}


	}

return 0;
}
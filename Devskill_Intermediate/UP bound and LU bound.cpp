#include <bits/stdc++.h>
#define MX 10000
#define ll long long 

using namespace std;


int Upper_b(vector<int>v,int targate_val)
{
	int L=0,R=v.size(),M;

	while(L<R)
	{
		M=L+(R-L)/2;
		if(v[M]<=targate_val)L=M+1;
		else R=M;
	}
	return L;
}

int Lower_b(vector<int>v,int targate_val)
{
	int L=0,R=v.size(),M;

	while(L<R)
	{
		M=L+(R-L)/2;
		if(v[M]<targate_val)L=M+1;
		else R=M;
	}
	return L;
}


int main()
{
	random_device rd;
	vector<int>v;
	/// input value in the array with rand() function
	for(int i=0;i<1000;i++)
	{
		int val=rd()%1000;
		v.push_back(val);
	}
	int loop=1000;
	while(loop--)
	{
		int targate_val=rd()%1000;

		int code_ub=Upper_b(v,targate_val);

		int stl_ub=upper_bound(v.begin(),v.end(),targate_val)-v.begin();

		int code_lb=Lower_b(v,targate_val);

		int stl_lb=lower_bound(v.begin(),v.end(),targate_val)-v.begin();

		if(code_lb!=stl_lb)cout<<"lb"<<endl;
		if(code_ub!=stl_ub)cout<<"ub"<<endl;
	}


return 0;
}
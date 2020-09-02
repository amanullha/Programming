#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll GCD(ll a,ll b)
{
	return b==0?a:GCD(b,a%b);
}


int main()
{
	ll a,b;
	cin>>a>>b;
	cout<<GCD(a,b)<<endl;
	


return 0;
}
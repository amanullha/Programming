#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x,y;
	cin>>x>>y;
	if(x<y)swap(x,y);
	cout<<x<<"   "<<y<<endl;
	bitset<31>a(x);
	bitset<31>b(y);
	int c=0;
	for(int i=0;i<31;i++)
	{
		if(a[i]!=b[i])c++;
	}
cout<<c<<endl;


return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)cin >> a[i];

	int maxx = INT_MIN,minn=INT_MAX;
	int end = 0,endd=0,asum=0;;
	

	for (int x:a)
	{
		asum+=x;

		end += x;
		maxx = max(maxx, end);
		if (end < 0)end = 0;


		endd+=x;
		minn=min(minn,endd);
		if(minn>0)minn=0;




	}

cout<<maxx<<endl;
cout<<minn<<endl;
	

	return 0;
}
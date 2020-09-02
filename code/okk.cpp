#include<bits/stdc++.h>

using namespace std;
double pi = 2 * acos (0.0);
int main()
{


	int test;
	cin >> test;
	for (int i=1;i<=test;i++)
	{
	double r;
	scanf("%lf",&r);
	printf("Case %d: ",i);
	// ans = r*r*(4-pi)
	printf("%.02lf\n",(r*r)*(4-pi));
	}
	return 0;
}
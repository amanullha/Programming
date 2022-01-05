#include<bits/stdc++.h>
#define ll long long int
#define M 10000007

using namespace std;
double pi = 2 * acos (0.0);


int main()
{
	int test;
	cin>>test;
	for(int tc=1;tc<=test;tc++)
	{
		double r;
		scanf("%lf",&r);

		printf("Case %d: %.02lf\n",tc,(r*r)*(4-pi));
	}
	return 0;
}
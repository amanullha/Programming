#include<bits/stdc++.h>
using namespace std;
std::vector<int> v;
int main()
{
	int t;
	scanf("%d",&t);

	for(int i=1;i<=t;i++)
	{
		v.clear();

		int n,q;
		scanf("%d%d",&n,&q);

		while(n--)
		{
			int x;
			scanf("%d",&x);
			v.push_back(x);
		}
		printf("Case %d:\n", i);
		std::vector<int>::iterator lo;
		std::vector<int>::iterator upr;
		while(q--)
			{
				int a,b;
				scanf("%d%d",&a,&b);
				lo=lower_bound(v.begin(),v.end(),a);
				upr=upper_bound(v.begin(),v.end(),b);

				printf("%d\n",(upr-v.begin())-(lo-v.begin()));


			}

	}
}
#include <bits/stdc++.h>
#define s scanf
using namespace std;
vector<int>v;
int main()
{
	int n;
	s("%d", &n);

	while (n--)
	{
		int x;
		s("%d", &x);
		v.push_back(x);

	}
	
	for (int i = 1; i < v.size(); i++)
	{
		v[i] += v[i - 1];
	}

	int q;
	s("%d", &q);

	std::vector<int>::iterator lo;


	while (q--)
	{
		int p;
		s("%d", &p);
		lo = lower_bound(v.begin(), v.end(), p);
		printf("%d\n", (lo - v.begin()) + 1);
	}


	return 0;
}
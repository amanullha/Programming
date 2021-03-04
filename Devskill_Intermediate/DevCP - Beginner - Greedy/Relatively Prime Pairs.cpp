#include<stdio.h>
#define ll long long int



int main()
{

	ll l, r;
	scanf("%lld%lld", &l, &r);

	ll mid = (r - l + 1) / 2;
	if (!mid)
	{
		printf("NO\n");
		return 0;
	}
	printf("YES\n");
	ll x = l + 1;
	while (mid--)
	{
		printf("%lld %lld\n", l, x);
		l += 2;
		x += 2;
	}

	return 0;
}

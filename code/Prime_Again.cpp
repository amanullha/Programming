#include<bits/stdc++.h>
#define ll long long
#define s scanf
using namespace std;

using u64 = uint64_t;
using u128 = __uint128_t;

u64 binpower(u64 base, u64 e, u64 mod) {
    u64 result = 1;
    base %= mod;
    while (e) {
        if (e & 1)
            result = (u128)result * base % mod;
        base = (u128)base * base % mod;
        e >>= 1;
    }
    return result;
}

bool check_composite(u64 n, u64 a, u64 d, int s) {
    u64 x = binpower(a, d, n);
    if (x == 1 || x == n - 1)
        return false;
    for (int r = 1; r < s; r++) {
        x = (u128)x * x % n;
        if (x == n - 1)
            return false;
    }
    return true;
};

bool MillerRabin(u64 n, int iter=5) { // returns true if n is probably prime, else returns false.
    if (n < 4)
        return n == 2 || n == 3;

    int s = 0;
    u64 d = n - 1;
    while ((d & 1) == 0) {
        d >>= 1;
        s++;
    }

    for (int i = 0; i < iter; i++) {
        int a = 2 + rand() % (n - 3);
        if (check_composite(n, a, d, s))
            return false;
    }
    return true;
}


int main()
{
	ll t;
	s("%lld", &t);
	while (t--)
	{
		ll n;
		s("%lld", &n);
		if (n == 3)
		{
			puts("2");
			continue;
		}

		if (n % 2 == 0)n--;
		else n -= 2;

		for (ll i = n;; i -= 2)
		{
			if (i < 1)break;
			if (MillerRabin(i))
			{
				printf("%lld\n", i);
				break;
			}
		}
	}

	return 0;
}
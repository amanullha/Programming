#include<bits/stdc++.h>
#define ll long long int
using namespace std;
/*
bola hoise 1 thake N porjonto koyta number ache jader divisor sum even.

akane just oii number golar diviso sum e odd jara holo squire number
and 2*suire number. tahole amra total number means N thake jodhi
squire+2*squire number gola minus kore dei tahole e dicisor sum
even number gola powya  jabe.

*/

int main()
{

	int t, tc = 1;;

	scanf("%d", &t);

	while (t--) {

		ll n;
		scanf("%lld", &n);
		

		
		printf("Case %d: ",tc++);

		ll s = sqrt(n) ;
		ll s2 = sqrt(n / 2);

		ll ans = n - (s + s2);
		printf("%lld\n", ans);
		

	}

	return 0;
}
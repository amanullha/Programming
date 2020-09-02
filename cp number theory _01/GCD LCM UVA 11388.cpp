#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll GCD(ll a, ll b)
{
	return b == 0 ? a : GCD(b, a % b);
}


int main()
{
	int t;
	cin >> t;
	while (t--)
	{

		ll gcd, lcm, a, b;
		cin >> gcd >> lcm;
		// amra jani gcd(a,b)=G.so 'a' and 'b' can be divided by 'G'
		//jeheto bola hoise "output the pair for which 'a' is minimized"
		// so 'G' eh shob shatke choto shonkha jeita dara 'a' divide kora jabe;
		// tat amra 'G' ke e 'a' bolte pari
		a = gcd;

		//amra jani gcd(a,b)×lcm(a,b)=a×b, jeheto a=G
		// so, b=(G×L)/G ai equation thake amra likte pari
		//∴b=L jodhi L ke G dara divide kora jay.
		if (lcm % gcd == 0)b = lcm;
		else
		{
			cout << "-1" << endl;
			continue;
		}
		cout << a << " " << b << endl;
	}





	return 0;
}
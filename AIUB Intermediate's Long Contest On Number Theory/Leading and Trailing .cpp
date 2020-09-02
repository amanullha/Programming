#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf              scanf
#define sn(a)           scanf("%lld",&a)
#define snn(a,b)        scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long int
#define ld long double
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

#define M 10000007
#define sz 10000007
#define tc(cn) printf("Case %lld: ",cn)
using namespace std;
/*
Method 1:
1) To find the last 3 digits, use %1000 and fast exponentiation of POWER(n,k);
2) To find the first digits? . We can write n^k as 10 pow( klog10n ). Klog10n has an integer part i and a decimal part d.
Since n^k is pow(10,i)*pow(10,d) , pow(10,i) cannot give you the first 3 digits ( Why? ) . The first 3 digitsis the first 3 digits of pow(10,d)!




Method 2: The next method involves using logarithms to calculate the first k digits. The method and steps are explained below:

Let product = nn. Take logarithm base 10 on both sides of the equation. We get log10(product) = log10(nn), which we can also write as n*log10(n)
In this example, we get log10(product) = 3871.137516. We can split the RHS as 3871 + 0.137516, so our equation can now be written as log10(product) = 3871 + 0.137516
Raise both sides with base 10, and using the above example, we get product = 10^3871 x 10^0.137516. 10^3871 will not make a difference to our first k digits as it only shifts decimal points. We are interested in the next part, 100.137516, as this will determine the first few digits.
In this case, the value of 10^0.137516 is 1.37251.
Hence our required first 5 digits would be 1.37251*(pow(10,k-1) = 13725.// converted to integer from decimal
filter_none



*/
inline void Time() { cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s. \n";}
ll binary_expo(ll n, ll p)
{
	n %= 1000;
	ll ans = 1;
	while (p > 0)
	{
		if (p & 1)ans = ans * n % 1000;
		p = p >> 1;
		n = n * n % 1000;
	}
	return ans;
}

ll first_three_digit(ll n, ll p)
{

	ld rhs = (1.0 * p) * log10(n);

	ll integer_part = rhs;

	ld decimal_part = rhs - integer_part;

	ld first_three_digit_is = pow(10.0, decimal_part);
	//cout<<endl<<"dis  "<<first_three_digit_is<<endl;

	first_three_digit_is *= 100;//3 ta digit hoyar karone 1 ar por 2 ta zero dia multiply kora hoise

	return (ll)first_three_digit_is;// just integer value ta return kora hoise


}



int main()
{
	ll t, ts = 1;
	//cin >> t;
	sn(t);
	while (t--)
	{
		ll n, p;
		snn(n, p);
		//cin >> n >> p;
		tc(ts++);


		printf("%lld ", first_three_digit(n, p));
		// cout<< setfill('0') << setw(3) << binary_expo(n, p) << endl;
		//cout << setfill('0') << setw(3) << binary_expo(n, p) << endl;

		printf("%03lld\n", binary_expo(n, p));
		/*

		"%03d" is a formatting string, which specifies how 7 will be printed.

		d stands for decimal integer (not double!), so it says there will be no floating point or anything like that, just a regular integer.
		3 shows how many digits will the printed number have. More precisely, the number will take at least 3 digits: 7 will be __7 (with spaces instead of underscores), but 1000 will remain 1000, as there is no way to write this number with just 3 digits.
		0 before 3 shows that leading spaces should be replaced by zeroes. Try experimenting with sprintf("%+3d", 7), sprintf("%-3d", 7) to see other possible modifiers (they are called flags).
		That being said, the output from sprintf("%03d", 7) will be 007.
		*/
	}


	return 0;
}

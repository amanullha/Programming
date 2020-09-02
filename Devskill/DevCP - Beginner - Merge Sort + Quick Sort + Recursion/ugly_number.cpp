#include<bits/stdc++.h>
#define pb push_back()
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define M 100000000911
using namespace std;
inline void Time() { cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s. \n";}



//map<ll, bool>un;
/*
void ugly(ll n)
{
	if (n > M)return ;
	if (un.find(n) != un.end())return;

	un[n] = true;
	if (un.size() > 1503)return (void)"Doesn't Print";
	ugly(n * 2);
	ugly(n * 3);
	ugly(n * 5);

}
*/
bool check_ugly(ll n)
{

	while (n % 2 == 0)n /= 2;
	while (n % 3 == 0)n /= 3;
	while (n % 5 == 0)n /= 5;

	if (n == 1)return true;
	else return false;
}



int main()
{

	ll uglyNumber = 1, cholbe = 1;

	ll ans = 0;
	while (cholbe <= 1505)
	{
		if (check_ugly(uglyNumber))
		{
			if(cholbe==1500)ans=uglyNumber;
			//cout << cholbe << "  :  " << uglyNumber << endl;
			cholbe++;
		}
		
		uglyNumber++;

	}

	printf("The 1500'th ugly number is %lld.\n", ans);


	/*ugly(1);

	cout << un.size() << endl << endl;
	ll ok = 1;
	for (auto x : un)
	{
		//ok++;

		if (ok == 1500) {
			cout<<"\n\nok\n\n";
			//ok = x.first; //break;

		}
		cout<<ok++<<"  :  ";
		cout << x.first << "   ";
		cout<<endl;
	}*/




//pf("\n\n");Time();
	return 0;
}

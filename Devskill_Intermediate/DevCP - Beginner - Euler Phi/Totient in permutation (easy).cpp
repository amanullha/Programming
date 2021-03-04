#include<bits/stdc++.h>
#define ll long long
#define d double
#define pb push_back
#define sn scanf
#define pn printf
//#define M 10000007
using namespace std;
/*
vector<ll>phi(M, 0);
void phi_cal()
{
	for (int i = 1; i < M; i++)phi[i] = i;


	for (int i = 2; i < M; i++)
	{
		if (phi[i] == i)
		{
			for (int j =  i; j < M ; j += i)
			{
				phi[j] -= phi[j] / i;;
			}
		}
	}
}




bool match(ll n)
{
	string x = to_string(n);
	string y = to_string(phi[n]);
	sort(x.begin(), x.end());
	sort(y.begin(), y.end());

	return x == y;

}


void solve(ll n)
{
	if (n < 21)cout << "No solution\n";

	double  mx = 1.00 * INT_MAX;
	for (ll i = 21; i < n; i++)
	{
		if (match(i))
		{

			if (mx >= (1.0 * i / phi[i])) {
				mx = (1.0 * i / phi[i]);

				cout << i << ",";
			}
		}
	}
}
*/
int mainarray[] = {21,63,291,2817,2991,4435,20617,45421,69271,75841,162619,176569,284029,400399,474883,732031,778669,783169,1014109,1288663,1504051,1514419,1924891,1956103,2006737,2044501,2094901,2239261,2710627,2868469,3582907,3689251,4198273,4696009,5050429,5380657,5886817,6018163,6636841,7026037,7357291,7507321,8316907,8319823};

	  //int res[] = {21,63,291,2817,2991,4435,20617,45421,69271,75841,162619,176569,284029,400399,474883,732031,778669,783169,1014109,1288663,1504051,1514419,1924891,1956103,2006737,2044501,2094901,2239261,2710627,2868469,3582907,3689251,4198273,4696009,5050429,5380657,5886817,6018163,6636841,7026037,7357291,7507321,8316907,8319823};



int main()
{
	//ios_base::sync_with_stdio(false);
	int t,n;
	//phi_cal();
	//cin >> t;
	scanf("%d",&t);
	while (t--)
	{
		
		//cin >> n;
			scanf("%d",&n);

		 if(n < 22) puts("No solution.");
		else 
		{
			int idx = lower_bound(mainarray,mainarray+44,n)-mainarray;

			printf("%d\n",mainarray[idx-1] );
		}
		//solve(n);

	}


	return 0;
}
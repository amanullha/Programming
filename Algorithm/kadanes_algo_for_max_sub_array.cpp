#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

#define M 10000007
#define sz 10000007
#define tc(cn) pf("Case %d: ",cn)
using namespace std;
inline void Time() { cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s. \n";}


ll kadanes(vector<ll>&array)
{
	int l = array.size();
	ll ans = array[0];

	ll maxval[l + 2];
	maxval[0] = ans;

	for (int i = 1; i < l; i++)
	{
		maxval[i] = max(maxval[i - 1] + array[i], array[i]);
		ans = max(maxval[i], ans);
	}

	return ans;
}

ll kadanes_no_extra_space(vector<ll>&array)
{
	int l = array.size();
	ll ans = array[0];

	ll cur = ans;
	ll pre = ans;

	for (int i = 1; i < l; i++)
	{
		cur = max(pre + array[i], array[i]);
		pre = cur;
		ans = max(ans, cur);
	}

	return ans;
}



int main()
{

	vector<ll>v{ -2, 1, -3, 4, -1, 2, 1, -5, 4};
	cout << kadanes(v) << endl;
	cout << kadanes_no_extra_space(v) << endl;


	pf("\n\n\n\n"); Time();
	return 0;
}

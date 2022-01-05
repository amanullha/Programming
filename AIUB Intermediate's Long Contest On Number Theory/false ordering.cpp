///****************#####    بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم   #####******************

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
using namespace std;
inline void Time() { cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s. \n";}

vector<ll>dib(1005,0);



bool camp(ll x, ll y)
{
	if (dib[x] == dib[y])
		return x > y;
	else
		return dib[x] < dib[y];
}

void cal()
{
	for (ll i = 1; i <= 1000; i++)
	{
		for (ll j = i; j <= 1000; j += i)
			dib[j]++;
	}
}

int main()
{
	cal();
	vector<ll>ans(1001);
	for(ll i=1;i<1001;i++)ans[i]=i;
	sort(ans.begin(), ans.begin()+1001, camp);
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		ll n;
		cin >> n;
		cout << "Case " << i << ": ";
		cout << ans[n] << endl;
	}

	//pf("\n\n"); Time();
	return 0;
}

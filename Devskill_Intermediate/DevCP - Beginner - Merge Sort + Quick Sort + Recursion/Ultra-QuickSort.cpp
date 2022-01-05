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

ll inversio_count;


void MargeLtoR(vector<ll> &v, ll l, ll mid, ll r)
{
	ll l_size = mid - l + 1;
	ll r_size = r - mid;

	std::vector<ll>lv(l_size);
	std::vector<ll>rv(r_size);

	for (ll i = 0; i < l_size; i++)lv[i] = v[i + l];
	for (ll i = 0; i < r_size; i++)rv[i] = v[i + mid + 1];

	ll i = 0;
	ll j = 0;
	ll k = l;

	while (i < l_size && j < r_size)
	{
		if (lv[i] < rv[j])v[k++] = lv[i++];
		else
		{
			v[k++] = rv[j++];
			inversio_count += (l_size - i);
		}
	}

	while (i < l_size )
	{
		v[k++] = lv[i++];

	}

	while (j < r_size)
	{

		v[k++] = rv[j++];
	}


}


void Marge_sort(vector<ll>& v, ll l, ll r)
{
	if (l >= r)return;

	//ll mid = (l + r) >> 1;
	ll mid = l + (r - l) / 2;

	Marge_sort(v, l, mid);
	Marge_sort(v, mid + 1, r);



	MargeLtoR(v, l, mid, r);

}



int main()
{


	ll n;

	while (cin >> n && n)
	{
		vector<ll>v;
		while (n--)
		{
			ll p;
			cin >> p;
			v.pb(p);
		}


		inversio_count = 0;
		Marge_sort(v, 0, v.size() - 1);


		cout << inversio_count << endl;

	}


pf("\n\n");Time();
	return 0;
}

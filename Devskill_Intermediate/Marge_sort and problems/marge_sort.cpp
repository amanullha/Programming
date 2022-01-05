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

void Marge_Left_and_Right(vector<ll>& v, ll l, ll mid, ll r)
{

// 1st approach for Marge data

ll temp_size=r-l+1;

vector<ll>temp;

ll i=l;
ll j=mid+1;

while(i<=mid && j<=r)
{
	if(v[i]<v[j])temp.pb(v[i++]);
	else temp.pb(v[j++]);
}
while(i<=mid)temp.pb(v[i++]);
while(j<=r)temp.pb(v[j++]);

for(ll i=l,j=0;i<=r;i++)
{
	v[i]=temp[j++];
}





/*
// 2nd approach for Marge data
	ll left_size = mid - l + 1;
	ll right_size = r - mid; // r-(mid+1)+1=r-mid-1+1=r-mid;

	vector<ll>left_sub_array;
	vector<ll>right_sub_array;

	for (ll i = 0; i < left_size; i++)
	{
		left_sub_array.push_back(v[l + i]);
	}

	for (ll i = 0; i < right_size; i++)
	{
		right_sub_array.push_back(v[i + mid + 1]);
	}

	ll i = 0;
	ll j = 0;
	ll k = l;

	while (i < left_size && j < right_size)
	{
		if (left_sub_array[i] < right_sub_array[j])
		{
			v[k++] = left_sub_array[i++];
		}
		else v[k++] = right_sub_array[j++];
	}

	while (i < left_size)v[k++] = left_sub_array[i++];

	while (j < right_size)v[k++] = right_sub_array[j++];
*/

}


void Marge_sort(vector<ll>& v, ll l, ll r)
{
	if (l >= r)return;

	ll mid = l + (r - l) / 2;

	Marge_sort(v, l, mid);
	Marge_sort(v, mid + 1, r);


	Marge_Left_and_Right(v, l, mid, r);


}


int main()
{
	int n;
	cin >> n;
	vector<ll>v;
	while (n--)
	{
		ll p;
		cin >> p;
		v.pb(p);
	}
	for (ll x : v)cout << x << "  ";


	Marge_sort(v, 0, v.size() - 1);

	cout << "\n\nAfter sorted_ _ _ _\n\n";
	for (ll x : v)cout << x << "  ";






//pf("\n\n");Time();
	return 0;
}

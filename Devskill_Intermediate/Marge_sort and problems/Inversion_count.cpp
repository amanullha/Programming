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

ll inversion_count = 0;




void Marge_Left_and_Right(vector<ll>& v, ll l, ll mid, ll r)
{


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
		else
		{
			v[k++] = right_sub_array[j++];
			/*
			left_array_size-i count ar shathe add hoyer karon
			->
			mane zero(0) index ar value ta bor hoyer karon baki shob gola o boro hobe , karon left and right array ta sorted , tai left a jekono
			akta value ar boro hole right array ar akta value thake tohon oii left array ar oii index ar porer mane oii value ar porer value gola
			oo boro holbe right sub array ar point kora value thaek.tai kotho gola value ache oii 
			left sub array te oii ta count ar shathe add hobe. 

			like--->
			3,4,5  1,6,7;

			so akhane 3 jeheto to boro 1 thake tai amra bolte pari 3 ar porer shob value gola oo boro hobe 1 thake .karon left and right sub array 
			both are sorted.

			*/
			inversion_count+=left_size-i;
		}
	}






	while (i < left_size)v[k++] = left_sub_array[i++];

	while (j < right_size)v[k++] = right_sub_array[j++];


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

cout<<"\n\n inversion_count is: "<<inversion_count<<endl;




//pf("\n\n");Time();
	return 0;
}

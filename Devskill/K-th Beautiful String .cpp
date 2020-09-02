#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll tc;
	cin>>tc;
	while(tc--)
	{
		ll n,k;
		cin>>n>>k;
	
	string ans(n,'a');
	
	

	for (ll i = n - 1; i >= 0; i--)
	{
		//"b "ar valid position equal to k or k theake choto hobe,
		//karon 'b' akei position a s.size()-k bar thakbe;
		//ar  jodhi condition na mane tar mane 'b ' ar position cange hobe
		// ar akne n-1 mane string ar last position kinto size()-1 a thake tai
		//and n-1-i hole 'b'ar right position afer kth opration
		ll b_ar_right_position = (n - 1) - i;

		if (k <= b_ar_right_position)
		{
			// 'b'ar right position a b_ar_right_position bar 'b' same position a thakbe
			// and second 'b' thakbe string size-k position a
			ans[i] = 'b';
			ans[n - k] = 'b';
			cout << ans << endl;
			break;// answear peye gechi tai ar operation chalano drkr nai, karon baki lool
			// chalale o amra r kono valid position pabo nah 'b'ar jnno
		}
		//'b' ar position change korear por koto bar 'b' abr same position a thakbe k thake b_ar_right_position mines korle ta paoya jabe
		k-=b_ar_right_position;
	}
}
return 0;
}
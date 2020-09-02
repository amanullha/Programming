#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 bool sq( ll n)
 {
 	ll x=sqrtl(n);
 	return (x*x)==n;
 }

int main()
{


	int t;
	scanf("%d",&t);
	//cin>>t;
	while (t--)
	{
		ll n;
		bool f = true;
		scanf("%lld",&n);
		//cin>>n;
		for (ll i = 0; i * i<= n; i++)
		{
			ll x = n - (i * i);
			if(sq(x))
			{
				printf("Yes\n");
				//cout<<"Yes"<<endl;
				f=0;
				break;
			}
		}
		if (f)
		printf("No\n");
		//cout<<"No"<<endl;

	}



	return 0;
}

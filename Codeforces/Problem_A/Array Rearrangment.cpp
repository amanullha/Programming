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

void solove()
{
	int n,x;
	cin>>n>>x;
	vector<int>a(n),b(n);

	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++)cin>>b[i];

		sort(a.begin(), a.end());
	sort(b.begin(), b.end(),greater<int>());
	//sort(b.begin(), b.end());
	//reverse(b.begin(), b.end());
	for(int i=0;i<n;i++)
	{
		if(a[i]+b[i]>x)
		{
			cout<<"No\n";
			return;
		}
	}

cout<<"Yes\n";

}

int main()
{

	int t;
	cin>>t;
	while(t--)solove();


return 0;
}

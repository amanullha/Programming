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
#define pr pair<int,int>
#define tc(cn) pf("Case %d: ",cn)


using namespace std;


void solve()
{
	int n;
	cin>>n;
	vector<int>rest(n);
	for(int i=0;i<n;i++)cin>>rest[i];

		vector<pr>v;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		v.push_back({rest[i],x});

	}

	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());

	//for(int i=0;i<n;i++)cout<<v[i].first<<" : "<<v[i].second<<endl;

	int ami=0,courier=0;

	for(int i=0;i<n;i++)
	{
		ami+=v[i].second;

		if(ami<v[i].first)continue;
		 else if(ami>v[i].first)
		{
			courier=v[i].first;
			ami-=v[i].second;
			break;
		}
		else
		{
			break;
		}
	}
//cout<<ami<<"  c  "<<courier<<endl;
	cout<<max(ami,courier)<<endl;


}

int main()
{

int t;
cin>>t;
while(t--)
	solve();




return 0;
}

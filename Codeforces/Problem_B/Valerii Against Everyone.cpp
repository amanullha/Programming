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

inline void Time() { cerr << "Time elapsed : "<<1.0 *clock() / CLOCKS_PER_SEC << " s. \n";}


void solve()
{
	int n;
	cin>>n;
	vector<ll>v(n);
	unordered_map<int, int>un;
	for(int i=0;i<n;i++)
		{
			cin>>v[i];
			if(un.find(v[i])==un.end())un[v[i]]=1;
			else un[v[i]]++;
		}

		for(auto x:un)
		{
			if(x.second>=2)
			{
				cout<<"YES"<<endl;
				return;
			}
		}

		if(v.size()==2)
		{
			if(v[0]!=v[1])cout<<"No"<<endl;
			else cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;



}
int main()
{
	
int t;
cin>>t;
while(t--)solve();


pf("\n\n\n\n");Time();
return 0;
}

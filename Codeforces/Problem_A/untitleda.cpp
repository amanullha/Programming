/*
 *************** BISMILLAH HIR RAHMANIR RAHIM ***************

     AUTHOR: MD.AMANULLHA
     mapppIVERSITY OF LIBERAL ARTS BANGLADESH
     DATE: / / 2021
*/
#include<bits/stdc++.h>
#define endl                 '\n'
#define PI              	acos(-1.0)
#define pf              	printf
#define sf            		scanf
#define ff 					first
#define ss					second
#define pb 					push_back
#define mk 					make_pair
#define ll 					long long
#define VI              	vector<long long>
#define pr 					pair<long long,long long>

#define sf1(a)              scanf("%d", &a)
#define sf2(a,b)            scanf("%d %d",&a, &b)
#define sf3(a,b,c)          scanf("%d %d %d", &a, &b, &c)

#define sl1(a)              scanf("%I64d", &a)
#define sl2(a,b)            scanf("%I64d %I64d", &a, &b)
#define sl3(a,b,c)			scanf("%I64d %I64d %I64d", &a, &b, &c)

#define SET(a,x)          	memset( a, x,    sizeof(a) )
#define SETV(a,x)         	memset(a.begin(), a.end(),x )
#define REP(i,a,b)       	for(long long i=a;i<b;i++)
#define all(x)              (x).begin(), (x).end()
#define sz(x)      			((int)x.size())
#define tc(cn) 				pf("Case %d: ",cn)

#define M 					10000007
#define INF                 2147483647

#define sqr(x)           	(x)*(x)
#define gcd(a, b)        	__gcd(a, b)
#define lcm(a, b)        	((a)*((b)/gcd(a,b)))

#define fio 				ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
using namespace std;




void solve()
{
	int totalllll;
	cin>>totalllll;
	int ar[totalllll];
	set<float>noooo;
	for(int i=0;i<totalllll;i++)
	{
		cin>>ar[i];
	}
	for(int i=0;i<totalllll-1;i++)
	{
		for(int j=i+1;j<totalllll;j++)
		{
			float result=(float)abs(ar[i]-ar[j])/(float)2;
			noooo.insert(result);
		}
	}
cout<<noooo.size()<<endl;
}

int main()
{ 


	int t;
	cin >> t;

	while (t--)solve();



	return 0;
}

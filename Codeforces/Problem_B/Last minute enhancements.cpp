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


unordered_map<int,bool>mappp;

void okk()
{
	mappp.clear();
	int total;
	int comapppt=0;
	cin>>total;
	while(total--)
	{
		int x;
		cin>>x;

		if(mappp.find(x)==mappp.end())
		{
			comapppt++;
			mappp[x]=true;
		}
		else 
		{
			if(mappp.find(x+1)==mappp.end())
				{
					comapppt++;
					mappp[x+1]=true;
				}
		}


	}
	cout<<comapppt<<endl;

}

int main()
{ //fio;


	int t;
	cin >> t;
	//sf1(t);
	while (t--)okk();


	//pf("\n\n\n\n"); Time();
	return 0;
}

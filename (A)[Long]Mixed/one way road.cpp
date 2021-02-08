#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

#define M 115
#define sz 10000007
#define tc(cn) pf("Case %d: ",cn)
//#define c cin>>
//#define co cout<<

using namespace std;
inline void Time() { cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s. \n";}

int ts=1;

void solve()
{
	int n;
	cin >> n;
	
	/*
	
	ring ar moddhe forward redirecting ar jnno akta node thake arekta node a w weight w jete 
	hole oii first node ar right side and next node ar left side faka thakte hobe, jata a->b bosar 
	por o circle fill up hoy clock_wisely. otherwise anticlock_wisely.

	*/
	vector<bool>node_ar_right_side(M,1);
	vector<bool>node_ar_left_side(M,1);

	int forward_circle_value=0;
	int backward_circle_value=0;

	for (int i = 0; i < n; i++)
	{
		int a,b,w;
		cin>>a>>b>>w;
		if(node_ar_right_side[a] && node_ar_left_side[b])
			{
				node_ar_right_side[a]=false;
				node_ar_left_side[b]=false;

				forward_circle_value+=w;
			}
		else 
			{
				backward_circle_value+=w;

				node_ar_right_side[b]=false;
				node_ar_left_side[a]=false;
			}
		
	}
	tc(ts++);
	cout<<min(backward_circle_value,forward_circle_value)<<endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)solve();




	//pf("\n\n\n\n"); Time();
	return 0;
}

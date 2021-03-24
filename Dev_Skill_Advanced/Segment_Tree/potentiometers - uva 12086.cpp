/*
 *************** BISMILLAH HIR RAHMANIR RAHIM ***************

     AUTHOR: MD.AMANULLHA
     UNIVERSITY OF LIBERAL ARTS BANGLADESH
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

#define M 					800500
#define INF                 2147483647

#define sqr(x)           	(x)*(x)
#define gcd(a, b)        	__gcd(a, b)
#define lcm(a, b)        	((a)*((b)/gcd(a,b)))

#define fio 				ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
using namespace std;
inline void Time() { cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s. \n";}

/*------------------------------Graph Moves----------------------------*/
//const int fx[]={+1,-1,+0,+0};
//const int fy[]={+0,+0,+1,-1};
//const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
//const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
//const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*---------------------------------------------------------------------*/


ll tree[M + 2];
ll arr[M + 2];

void build(ll start, ll end, ll node)
{
	if (start == end)
	{
		tree[node] = arr[start];
		return;
	}

	ll mid = (start + end) / 2;
	build(start, mid, node + node);
	build(mid + 1, end, node + node + 1);

	tree[node] = tree[node + node] + tree[node + node + 1];
}

void update(ll start, ll end, ll node, ll index, ll value)
{
	if (end < index || start > index)return;
	if (start == end)
	{
		tree[node] = value;
		return;
	}

	ll mid = (start + end) / 2;
	update(start, mid, node + node,index,value);
	update(mid + 1, end, node + node + 1,index,value);

	tree[node] = tree[node + node] + tree[node + node + 1];
}

ll query(ll start, ll end, ll node, ll l, ll r)
{
	if (start > r || end < l)return 0;

	if (start >= l && end <= r)return tree[node];

	ll mid = (start + end) / 2;
	ll left = query(start, mid, node + node, l , r);
	ll right = query(mid + 1, end, node + node + 1, l, r);

	//return tree[node] = left+right;
	return left + right;
}

void clr(ll n)
{
	for (ll i = 0; i < n + 2; i++) arr[i] = 0;

	for (ll i = 0; i <= 4 * n + 5; i++)tree[i] = 0;
}
int t = 1;
int main()
{

	ll n;
	while (cin >> n && n)
	{
		clr(n);
		if(t>1)cout<<endl;
		cout << "Case " << t++ << ":\n";
		for (ll i = 0; i < n; i++)cin >> arr[i];

		build(0, n - 1, 1);

		string s;
		while (cin >> s && s != "END")
		{
			if (s == "S")
			{
				ll index, value;
				cin >> index >> value;
				index--;
				update(0, n - 1, 1, index, value);

				//cout << endl;
				//cout << "up  " << index << "  : " << value << endl;
				//for (ll i = 0; i < 6; i++)cout << i << "  :  " << tree[i] << endl;
				//cout << endl;
				
			}
			else if (s == "M")
			{
				ll l, r;
				cin >> l >> r;
				l--, r--;
				//cout << endl << l << " : " << r << endl;
				cout << query(0, n - 1, 1, l, r) << endl;
			}
		}
	}


	return 0;
}

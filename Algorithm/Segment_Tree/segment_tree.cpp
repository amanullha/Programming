#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define M 100001
#define sz 10000007
#define nleft node*2
#define nright (node*2)+1
using namespace std;

// node=starting point of the tree or root
// b=begining point of the array
// e=ending point of the array

ll arr[M + 1];
ll tree[M * 3];


void build(ll node, ll b, ll e)
{

	if (b == e)
	{
		tree[node] = arr[b];
		return ;
	}

	ll mid = b + (e - b) / 2;

	build(nleft, b, mid);
	build(nright, mid + 1, e);

	tree[node] = tree[nleft] + tree[nright];

}

// b=root node ar begining point
// e=root node ar ending point
// i and j is range to find for operation
ll query(ll node, ll b, ll e, ll i, ll j)
{
	if (i > e || j < b)return 0;

	if (i <= b && j >= e) return tree[node];

	ll mid = b + (e - b) / 2;

	ll nl = query(nleft, b, mid, i, j);
	ll nr = query(nright, mid + 1, e, i, j);

	return nl + nr;
}
void update(ll node, ll b, ll e, ll idx, ll value)
{
	if (idx > e || idx < b)return ;

	if (idx <= b && idx >= e)
	{
		tree[node] = value;
		return;
	}

	ll mid = b + (e - b) / 2;

	update(nleft, b, mid, idx, value);
	update(nright, mid + 1, e, idx, value);

	tree[node] = tree[nleft] + tree[nright];

}

int main()
{
	ll n;
	cin >> n;
	
	
	for (ll i = 1; i <= n; i++)
	{
		cin >> arr[i];
		
	}

	

	build(1, 1, n);
	//for(ll i=1;i<20;i++)cout<<"i : "<<i<<"   :  "<<tree[i]<<endl;

	ll queryy;
	cin >> queryy;
	
	while (queryy--)
	{
		char c;
		cin >> c;
		if (c == 'q')
		{
			ll i, j;
			cin >> i >> j;
			cout << query(1, 1, n, i, j)<<endl;
		}
		else
		{
			ll idx, value;
			cin >> idx >> value;
			update(1, 1, n, idx, value);
		}
	}



	return 0;
}

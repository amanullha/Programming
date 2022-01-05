#include <bits/stdc++.h>
#define ll long long int
#define M 400004
#define inf 1<31
#define left start,(start+end)/2,node+node
#define right (start+end)/2+1, end,node+node+1
using namespace std;


struct type
{
	ll lazy, zero, one, two;
};

type tree[M * 4];

void divisible(ll n)
{

	ll t = tree[n].two;
	tree[n].two = tree[n].one;
	tree[n].one = tree[n].zero;
	tree[n].zero = t;

}
void build(ll start, ll end, ll node)
{
	if (start == end)
	{
		cout<<"\n s=e N : "<<node<<endl;
		tree[node].zero = 1;
		tree[node].one = 0;
		tree[node].two = 0;
		return;
	}


	build(left);
	build(right);

	tree[node].zero = tree[node + node].zero + tree[node + node + 1].zero;
	tree[node].one = tree[node + node].one + tree[node + node + 1].one;
	tree[node].two = tree[node + node].two + tree[node + node + 1].two;
}

void update(ll start, ll end, ll node, ll L, ll R)
{
	if (tree[node].lazy != 0)
	{
		ll increase = tree[node].lazy;
		tree[node].lazy = 0;

		if (start != end)
		{
			tree[node + node].lazy += increase;
			tree[node + node + 1].lazy += increase;
		}
		increase %= 3;
		while (increase--)
		{
			divisible(node);
		}
	}

	if (start > R || end < L)return;

	if (start >= L && end <= R)
	{
		divisible(node);
		if (start != end)
		{
			tree[node + node].lazy += 1;
			tree[node + node + 1].lazy += 1;
		}
		return;
	}

	update(left, L, R);
	update(right, L, R);


	tree[node].zero = tree[node + node].zero + tree[node + node + 1].zero;;
	tree[node].one = tree[node + node].one + tree[node + node + 1].one;;
	tree[node].two = tree[node + node].two + tree[node + node + 1].two;;
}

ll query(ll start, ll end, ll node, ll L, ll R)
{
	if (tree[node].lazy)
	{
		ll increase = tree[node].lazy;
		tree[node].lazy = 0;

		if (start != end)
		{
			tree[node + node].lazy += increase;
			tree[node + node + 1].lazy += increase;
		}
		increase %= 3;
		while (increase--)
		{
			divisible(node);
		}
	}

	if (start > R || end < L)return 0;

	if (start >= L && end <= R)
	{
		return tree[node].zero;
	}

	return query(left, L, R) + query(right, L, R);
}


int main()
{
	ll n, q;
	cin >> n >> q;

	build(0, n, 1);
	for(int i=0;i<16;i++)cout<<i<<" : "<<tree[i].zero<<endl;
	

	while (q--)
	{
		ll code, A, B;
		cin >> code >> A >> B;;
		if (code == 0);
		{
			update(0, n - 1, 1, A, B);
		}
		else
		{
			cout << query(0, n - 1, 1, A, B) << endl;
		}
	}
	

	return 0;
}
/*
#include <bits/stdc++.h>
#define ll int
#define M 400004
#define inf 1<31
#define left start,(start+end)/2,node+node
#define right (start+end)/2+1, end,node+node+1
using namespace std;

struct type
{
	ll lazy, zero, one, two;
};

type tree[M];

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
		tree[node].zero = 1;
		tree[node].one = 0;
		tree[node].two = 0;
		return;
	}


	build(start,(start+end)/2,node+node);
	build((start+end)/2+1, end,node+node+1);

	tree[node].zero = tree[node + node].zero + tree[node + node + 1].zero;
	tree[node].one = tree[node + node].one + tree[node + node + 1].one;
	tree[node].two = tree[node + node].two + tree[node + node + 1].two;
}

void update(ll start, ll end, ll node, ll L, ll R)
{
	if (tree[node].lazy != 0)
	{
		ll increase = tree[node].lazy%3;

		tree[node].lazy = 0;

		if (start != end)
		{
			tree[node + node].lazy += increase;
			tree[node + node + 1].lazy += increase;
		}

		for(int i=0;i<increase;i++)
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

	update(start,(start+end)/2,node+node, L, R);
	update((start+end)/2+1, end,node+node+1, L, R);

	tree[node].zero = tree[node + node].zero + tree[node + node + 1].zero;;
	tree[node].one = tree[node + node].one + tree[node + node + 1].one;;
	tree[node].two = tree[node + node].two + tree[node + node + 1].two;;
}

ll query(ll start, ll end, ll node, ll L, ll R)
{
	if (tree[node].lazy)
	{
		ll increase = tree[node].lazy%3;

		tree[node].lazy = 0;

		if (start != end)
		{
			tree[node + node].lazy += increase;
			tree[node + node + 1].lazy += increase;
		}

		for(int i=0;i<increase;i++)
		{
			divisible(node);
		}
	}

	if (start > R || end < L)return 0;

	if (start >= L && end <= R)
	{
		return tree[node].zero;
	}

	return query(start,(start+end)/2,node+node, L, R) + query((start+end)/2+1, end,node+node+1, L, R);
}


int main()
{
	ll N, Q;
	scanf("%d%d",&N,&Q);

	build(0, N - 1, 1);

	while (Q--)
	{
		ll dis, L, R;
		scanf("%d%d%d",&dis,&L,&R);

		if (dis == 0) update(0, N - 1, 1, L, R);

		else printf("%d\n",query(0, N - 1, 1, L, R) );

	}

	return 0;
}

*/

// for light oj

#include <bits/stdc++.h>
#define ll int
#define M 400004
#define inf 1<31
#define left start,(start+end)/2,node+node
#define right (start+end)/2+1, end,node+node+1
using namespace std;

struct type
{
	ll lazy, zero, one, two;
};

type tree[M];

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
		tree[node].zero = 1;
		tree[node].one = 0;
		tree[node].two = 0;
		return;
	}


	build(start, (start + end) / 2, node + node);
	build((start + end) / 2 + 1, end, node + node + 1);

	tree[node].zero = tree[node + node].zero + tree[node + node + 1].zero;
	tree[node].one = tree[node + node].one + tree[node + node + 1].one;
	tree[node].two = tree[node + node].two + tree[node + node + 1].two;
}

void update(ll start, ll end, ll node, ll L, ll R)
{
	if (tree[node].lazy != 0)
	{
		ll increase = tree[node].lazy % 3;

		tree[node].lazy = 0;

		if (start != end)
		{
			tree[node + node].lazy += increase;
			tree[node + node + 1].lazy += increase;
		}

		for (int i = 0; i < increase; i++)
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

	update(start, (start + end) / 2, node + node, L, R);
	update((start + end) / 2 + 1, end, node + node + 1, L, R);

	tree[node].zero = tree[node + node].zero + tree[node + node + 1].zero;;
	tree[node].one = tree[node + node].one + tree[node + node + 1].one;;
	tree[node].two = tree[node + node].two + tree[node + node + 1].two;;
}

ll query(ll start, ll end, ll node, ll L, ll R)
{
	if (tree[node].lazy)
	{
		ll increase = tree[node].lazy % 3;

		tree[node].lazy = 0;

		if (start != end)
		{
			tree[node + node].lazy += increase;
			tree[node + node + 1].lazy += increase;
		}

		for (int i = 0; i < increase; i++)
		{
			divisible(node);
		}
	}

	if (start > R || end < L)return 0;

	if (start >= L && end <= R)
	{
		return tree[node].zero;
	}

	return query(start, (start + end) / 2, node + node, L, R) + query((start + end) / 2 + 1, end, node + node + 1, L, R);
}

void clr(int N)
{
	for (int i = 0; i <= N * 4; i++)
	{
		tree[i].lazy = 0;
		tree[i].zero = 0;
		tree[i].one = 0;
		tree[i].two = 0;

	}
}

int main()
{
	int t, tc = 1;
	scanf("%d", &t);
	while (t--)
	{
		printf("Case %d:\n", tc++ );

		ll N, Q;
		scanf("%d%d", &N, &Q);
		clr(N);

		build(0, N - 1, 1);

		while (Q--)
		{
			ll dis, L, R;
			scanf("%d%d%d", &dis, &L, &R);

			if (dis == 0) update(0, N - 1, 1, L, R);

			else printf("%d\n", query(0, N - 1, 1, L, R) );

		}
	}
	return 0;
}
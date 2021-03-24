#include<bits/stdc++.h>
#define ll 					long long
#define M 					100005
#define VI        			vector<long long>
#define left 				start,(start+end)/2,node+node
#define right				(end+start)/2+1,end,node+node+1
using namespace std;

VI tree(4 * M);
VI lazy(4 * M);

VI arr(M + 5);
/*
ll arr[M];
ll tree[4 * M];
ll lazy[4 * M];
*/
void Tree_build(ll start, ll end, ll node)
{
	if (start == end)
	{
		tree[node] = arr[start];
		return;
	}

	Tree_build(left);
	Tree_build(right);

	tree[node] = tree[node + node] + tree[node + node + 1];
}

void update(ll start, ll end, ll node, ll L, ll R, ll value)
{
	if (lazy[node] != 0)
	{
		tree[node] += (end - start + 1) * lazy[node];

		if (start != end)
		{
			lazy[node + node] += lazy[node];
			lazy[node + node + 1] += lazy[node];
		}
		lazy[node] = 0;
	}

	if (start > R || end < L)return;

	if (start >= L && end <= R)
	{
		tree[node] += (end - start + 1) * value;

		if (start != end)
		{
			lazy[node + node] += value;
			lazy[node + node + 1] += value;
		}
		return;
	}

	update(left, L, R, value);
	update(right, L, R, value);

	tree[node] = tree[node + node] + tree[node + node + 1];
}

ll query(ll start, ll end, ll node, ll L , ll R)
{
	if (start > R || end < L)return 0;

	if (lazy[node] != 0)
	{
		tree[node] += (end - start + 1) * lazy[node];
		if (start != end)
		{
			lazy[node + node] += lazy[node];
			lazy[node + node + 1] += lazy[node];
		}
		lazy[node] = 0;
	}



	if (start >= L && end <= R)
	{
		return tree[node];
	}

	return query(left, L, R) + query(right, L, R);

}

int main()
{
    int t,tc=1;
    cin>>t;
    while(t--)
    {
        cout<<"Case "<<tc++<<":\n";
        fill(tree.begin(), tree.end(),0);
        fill(lazy.begin(), lazy.end(),0);

       // memset(tree,0,sizeof(tree));
       // memset(lazy,0,sizeof(lazy));
        
	ll n, q;
	cin >> n >> q;

	while (q--)
	{
		int dis;
		cin >> dis;
		if (dis == 0)
		{
			ll l, r, v;
			cin >> l >> r >> v;
			update(0, n - 1, 1, l, r, v);
		}
		else if (dis == 1)
		{
			ll l, r;
			cin >> l >> r;
			cout << query(0, n - 1, 1, l, r) << endl;
		}
	}

    }
	
	return 0;
}

/*
int main()
{
	ll n, q;
	cin >> n >> q;

	while (q--)
	{
		int dis;
		cin >> dis;
		if (dis == 0)
		{
			ll l, r, v;
			cin >> l >> r >> v;
			update(0, n - 1, 1, l, r, v);
		}
		else if (dis == 1)
		{
			ll l, r;
			cin >> l >> r;
			cout << query(0, n - 1, 1, l, r) << endl;
		}
	}

	return 0;
}
*/
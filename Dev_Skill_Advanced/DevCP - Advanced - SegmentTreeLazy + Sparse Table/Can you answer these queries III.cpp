#include<bits/stdc++.h>
#include <cstdio>
using namespace std;
#define ll 					long long int
#define VI              	vector<long long>
#define pr 					pair<long long,long long>
#define M 					50000+500
#define INF                 (1<<31)
#define fio 				ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define left start,(start+(end-start)/2),n_node+n_node
#define right (start+(end-start)/2)+1,end,n_node+n_node+1
ll n, k;

ll arr[M + 5];

ll MaxPreffix[4 * M + 5];
ll MaxSuffix[4 * M + 5];
ll MaxSubArray[4 * M + 5];
ll TotalSum[4 * M + 5];

struct type
{
	ll Msubarray, Mpreffix, Msuffix, Tsum;
};


void build_tree(ll start, ll end, ll n_node)
{
	if (start == end )
	{
		MaxPreffix[n_node] = MaxSuffix[n_node] = MaxSubArray[n_node] = TotalSum[n_node] = arr[start];
		return;
	}

	build_tree(left);
	build_tree(right);

	MaxPreffix[n_node] = max(TotalSum[n_node + n_node] + MaxPreffix[n_node + n_node + 1], MaxPreffix[n_node + n_node]);
	MaxSuffix[n_node] = max(TotalSum[n_node + n_node + 1] + MaxSuffix[n_node + n_node], MaxSuffix[n_node + n_node + 1]);
	MaxSubArray[n_node] = max({ MaxSuffix[n_node + n_node] + MaxPreffix[n_node + n_node + 1], MaxSubArray[n_node + n_node], MaxSubArray[n_node + n_node + 1] });
	TotalSum[n_node] = TotalSum[n_node + n_node] + TotalSum[n_node + n_node + 1];
}


void update(ll start, ll end, ll n_node, ll index, ll value)
{
	if (start > index || end < index) return ;

	if (start == end && start == index)
	{
		arr[start] = value;
		MaxPreffix[n_node] = MaxSuffix[n_node] = MaxSubArray[n_node] = TotalSum[n_node] = arr[start];

		return;
	}

	update(left,index,value);
	update(right,index,value);

	MaxPreffix[n_node] = max(TotalSum[n_node + n_node] + MaxPreffix[n_node + n_node + 1], MaxPreffix[n_node + n_node]);
	MaxSuffix[n_node] = max(TotalSum[n_node + n_node + 1] + MaxSuffix[n_node + n_node], MaxSuffix[n_node + n_node + 1]);
	MaxSubArray[n_node] = max({ MaxSuffix[n_node + n_node] + MaxPreffix[n_node + n_node + 1], MaxSubArray[n_node + n_node], MaxSubArray[n_node + n_node + 1] });
	TotalSum[n_node] = TotalSum[n_node + n_node] + TotalSum[n_node + n_node + 1];

}

type query(ll start, ll end, ll n_node, ll l, ll r)
{
	type node;

	if (start > r || end < l)
	{
		node.Msubarray = node.Mpreffix = node.Msuffix = node.Tsum = -1 * 1 << 31;
		return node;
	}

	if (l <= start && r >= end)
	{
		node.Mpreffix = MaxPreffix[n_node];
		node.Msuffix = MaxSuffix[n_node];
		node.Msubarray = MaxSubArray[n_node];
		node.Tsum = TotalSum[n_node];
		return node;

	}

	type n_left, n_right;


	n_left = query(left, l, r);
	n_right = query(right, l, r);


	node.Tsum = n_left.Tsum + n_right.Tsum;
	node.Mpreffix = max(n_left.Mpreffix, n_left.Tsum + n_right.Mpreffix);
	node.Msuffix = max(n_right.Msuffix, n_right.Tsum + n_left.Msuffix);
	node.Msubarray = max({n_left.Msubarray, n_right.Msubarray, n_left.Msuffix + n_right.Mpreffix});


	return node;

}

int main()
{
	cin >> n;
	for (ll i = 0; i < n; i++)cin >> arr[i];
	build_tree(0, n - 1, 1);

	cin >> k;
	while (k--)
	{
		int dis;
		cin >> dis;
		if (dis == 1)
		{
			ll l, r;
			cin >> l >> r;
			l--, r--;
			type ans;
			ans = query(0, n - 1, 1 , l, r);

			cout << ans.Msubarray << endl;
		}
		else
		{
			ll idx, v;
			cin >> idx >> v;
			idx--;
			update(0,n-1,1,idx,v);

		}
	}

	return 0;
}
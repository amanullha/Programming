#include<bits/stdc++.h>
using namespace std;
#define ll 					long long int
#define VI              	vector<long long>
#define pr 					pair<long long,long long>
#define M 					50000+500
#define INF                 (1<<31)
#define fio 				ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

ll n, k;
VI arr(M + 5);

VI MaxPreffix(4 * M);
VI MaxSuffix(4 * M);
VI MaxSubArray(4 * M);
VI TotalSum(4 * M);

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

	ll mid = start + (end - start) / 2;

	build_tree(start, mid, n_node + n_node);
	build_tree(mid + 1, end, n_node + n_node + 1);

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
		node.Msubarray = node.Mpreffix = node.Msuffix = node.Tsum = -1 * INF;
		return node;
	}

	if (l <= start && r >= end)
	{
		node.Msubarray = MaxSubArray[n_node];
		node.Mpreffix = MaxPreffix[n_node];
		node.Msuffix = MaxSuffix[n_node];
		node.Tsum = TotalSum[n_node];
		return node;
	}

	type n_left, n_right;
	ll mid = start + (end - start) / 2;

	n_left = query(start, mid, n_node + n_node, l, r);
	n_right = query(mid + 1, end, n_node + n_node + 1, l, r);


	node.Tsum = n_left.Tsum + n_right.Tsum;
	node.Mpreffix = max(n_left.Mpreffix, n_left.Tsum + n_right.Mpreffix);
	node.Msuffix = max(n_right.Msuffix, n_right.Tsum + n_left.Msuffix);
	node.Msubarray = max({n_left.Msuffix + n_right.Mpreffix, n_left.Msubarray, n_right.Msubarray});

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
		ll l, r;
		cin >> l >> r;
		l--, r--;

		type ans;
		ans = query(0, n - 1, 1 , l, r);

		cout << ans.Msubarray << endl;
	}
	return 0;
}

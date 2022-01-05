#include<bits/stdc++.h>
#define endl                 '\n'
#define pb 					push_back
#define mk 					make_pair
#define ll 					long long
#define VI              	vector<long long>
#define left_child          node+node
#define right_child         node+node+1
#define M 					10000007
#define INF                 2147483647
#define fio 				ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
using namespace std;



ll Tree[4 * M + 2];
ll arr[M + 2], n;

void seg_build(ll start, ll end, ll node)
{
	if (start == end)
	{
		Tree[node] = arr[start];
		return;
	}

	seg_build(start, (start + end) / 2, left_child);
	seg_build((start + end) / 2 + 1, end, right_child);

	Tree[node] = Tree[left_child] + Tree[right_child];
}

ll query(ll l, ll r, ll N_start, ll N_end, ll node)
{

	if (l <= N_start && N_end <= r) // inside the range
	{
		return Tree[node];
	}

	if (l > N_end || r < N_start) // out of range
	{
		return 0;
	}

	ll left_side = query(l, r, N_start, (N_start + N_end) / 2, left_child);
	ll Right_side = query(l, r, (N_start + N_end / 2) + 1, N_end, right_child);

	return left_side + Right_side;

}

void update(ll start, ll end, ll node, ll index, ll val)
{
	if (index > end || index < start) // out of range
	{
		return ;
	}
	if (start == end && start==index)
	{
		Tree[node] += val;
	}

	seg_build(start, (start + end) / 2, left_child);
	seg_build((start + end) / 2 + 1, end, right_child);

	Tree[node] = Tree[left_child] + Tree[right_child];

}

int main()
{
	ll q;
	cin >> n;

	for (ll i = 0; i < n; i++)cin >> arr[i];

	seg_build(0, n - 1, 1);//O(4*N)
	cin >> q;

	while (q--)
	{
		int c;
		cin >> c;
		if (c == 0)
		{
			ll idx, val;
			cin >> idx >> val;
			update(0, n - 1, 1, idx, val);
		}
		if (c == 1)
		{
			ll l, r;
			cin >> l >> r;
			ll ans = query(0, n - 1, l, r, 1);
			cout << ans << endl;
		}
	}

	return 0;
}

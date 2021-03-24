#include<bits/stdc++.h>
#define endl                 '\n'
#define ll 					long long int
#define VI              	vector<ll>
#define M 					105000
#define fio 				ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
using namespace std;

ll arr[M + 5];
ll Sparse_Table[25][M + 5];

ll logs[M + 5];

void computeLogs(ll n)
{
	logs[1] = 0;

	for (ll i = 2; i <= n; i++)
	{
		logs[i] = logs[i / 2] + 1;
	}
}

void Sparse_Table_Construct(ll n)
{
	computeLogs(n);
	for (ll i = 0; i <= logs[n]; i++)
	{
		ll length = 1 << i; // 2^i

		for (ll j = 0; j + length <= n; j++)
		{
			if (length == 1)
			{
				Sparse_Table[i][j] = arr[j];
			}
			else
			{
				ll a = Sparse_Table[i - 1][j];
				ll b = Sparse_Table[i - 1][j + (1<<(i-1))];

				Sparse_Table[i][j] = max(a, b);
			}
		}
	}
}

ll query(ll L, ll R)
{
	ll length=R-L+1;

	ll Sub_Length=logs[length];

	ll a = Sparse_Table[Sub_Length][L];
	ll b = Sparse_Table[Sub_Length][R-(1<<Sub_Length)+1];

	return max(a,b);
}
void solve()
{
	ll N;
	cin >> N;

	for (ll i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	Sparse_Table_Construct(N);

	ll q;
	cin >> q;

	while (q--)
	{
		int l, r;
		cin >> l >> r;

		cout << query(l, r) << endl;
	}
}

int main()
{
	solve();
	return 0;
}

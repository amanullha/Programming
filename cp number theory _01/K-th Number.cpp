#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define M 100000
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

using namespace std;
vector<ll>tree[M * 3];
vector<ll>ary(M);



void buid(ll node, ll b, ll e)
{

	if (b == e)
	{
		tree[node].pb(ary[b]) ;
		return ;
	}

	ll middle = b + (e - b) / 2;
	ll leftN = node * 2;
	ll rightN = (node * 2) + 1;
	buid(leftN, b, middle);
	buid(rightN, middle + 1, e);



	ll i = 0;
	ll j = 0;

	while (i < (ll)tree[leftN].size() && j < (ll)tree[rightN].size())
	{
		if (tree[leftN][i] <= tree[rightN][j])
			tree[node].pb(tree[leftN][i++]);
		else tree[node].pb(tree[rightN][j++]);
	}

	while (i < (ll)tree[leftN].size())
		tree[node].pb(tree[leftN][i++]);
	while (j < (ll)tree[rightN].size())
		tree[node].pb(tree[rightN][j++]);

}


ll query(ll node, ll b,ll e,ll i,ll j,ll k)
{
	if(b > j || e < i) return 0;

	if(b<=i && j<=e)
	{
		ll idx=i+k;

		ll val=tree[node][idx];
		return val;
	}

ll middle = b + (e - b) / 2;
	ll leftN = node * 2;
	ll rightN = (node * 2) + 1;
	ll k1=query(leftN, b, middle,i,j,k);
	ll k2=query(rightN, middle + 1, e,i,j,k);


if(k1)return k1;
else return k2;
}

int main()
{

	ll n, q,nn;
	cin >> n >> q;
	nn=n;
	//snn(n,q);
	
	while (n--)
	{
		ll p;
		cin >> p;
		//sn(p);
		ary.pb(p);
	}
	buid(1,1,nn);
	while (q--)
	{
		ll i,j,k;
		cin >> i >> j >> k;
		//snnn(l,r,k);

		
		cout<<query(1,1,nn, i, j,k)<<endl;


	}



//pf("\n\n");Time();
	return 0;
}














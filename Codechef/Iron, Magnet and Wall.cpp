#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

#define sz 10000007
#define tc(cn) pf("Case %d: ",cn)


using namespace std;



void solve()
{
	ll n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	queue<char>I, M;

	int i = 0;
	int total = 0;
	while (1)
	{
		if (i == (int)s.size())break;
		char c = s[i++];
		if (c == 'X')
		{
			total += min(I.size(), M.size());
			while (!I.empty())I.pop();
			while (!M.empty())M.pop();

		}
		else if (c == 'I')
			{
				I.push(c);
				//cout<<"i "<<i<<" Isize "<<I.size()<<endl;
			}
		else if (c == 'M')
			{
				M.push(c);
				//cout<<"i "<<i<<" Msize "<<M.size()<<endl;

			}

	}
	total += min(I.size(), M.size());
	cout<<total<<endl;

}

int main()
{
	int t;
	cin >> t;
	while (t--)solve();



	return 0;
}

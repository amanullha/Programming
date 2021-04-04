#include<bits/stdc++.h>
#define endl                 '\n'
#define PI              	acos(-1.0)
#define ll 					long long
#define VI              	vector<long long>
#define M 					10000007
#define fio 				ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
using namespace std;



void solve()
{
	int n;
        cin>>n;
 
        unordered_map<int,int>mp;
        int mx=0;
        for (int i = 0; i < n; i++)
        {
        	ll x;
            cin>>x;
            mp[x]++;
            mx=max(mp[x],mx);
        }

	if (n & 1)
	{

		if (mx <= n / 2)cout << '1' << endl;
		else
		{
			cout <<n-((n-mx)+(n-mx)) << endl;
		}
	}
	else
	{
		if (mx <= n / 2)cout << '0' << endl;

		else
		{
			cout <<n-((n-mx)+(n-mx)) << endl;
		}
	}

}

int main()
{	//fio;

	int t;
	cin >> t;

	while (t--)solve();

	return 0;
}

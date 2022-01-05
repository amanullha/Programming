#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

#define M 5*1001
#define sz 10000007
#define tc(cn) pf("Case %d: ",cn)


using namespace std;


int main()
{
	fio;
	int child;
	cin >> child;
	int total, yarn;
	cin >> total >> yarn;

	vector<int>color;
	for (int i = 0; i <= total; i++)color.push_back(i);

	int cholbe = yarn;
	while (cholbe--)
	{

		int u, v;
		cin >> u >> v;
		int x = min(u, v);
		int y = max(u, v);

		if (color[x] == x)
		{
			if (color[y] == y)color[y] = color[x];

			else color[x] = color[y];
		}
		else
		{
			if (color[y] == y)color[y] = color[x];

			//else if(color[x]==color[y])continue;
		}
	}

//for(int i;i<color.size();i++)cout<<i<<"   :  "<<color[i]<<endl;
	//cout << endl;

	unordered_map<int, int>un;

	for (int i = 1; i <= total; i++)
	{
		int x = color[i];

		if (un.find(x) == un.end())
		{
			un[x] = 1;
		}
		else un[x]++;
	}
	int minn = INT_MAX;

	//for (auto x : un)cout << x.first << "   :  " << x.second << endl;
	//cout << endl;
	for (auto x : un)
	{

		minn = min(minn, x.second);
	}

	int difcolor = un.size();
	//cout << "dif " << difcolor << endl;
	//cout << "min  " << minn << endl;

	if (child <= difcolor)
	{
		cout << "YES" << endl;
		cout << minn << endl;
	}
	else cout << "NO" << endl;

	return 0;
}

#include<bits/stdc++.h>
#define pb push_back()
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

#define M 10000007
using namespace std;


ll sub(string s, string c)
{
	
	ll count = 0;

	string tc = "";
	ll cz = c.size();

	for (ll i = 0; i < cz; i++)
	{
		tc += s[i];
	}
	if (tc == c)count++;
	

	for (ll i = tc.size(); i < (ll)s.size(); i++)
	{
		
		tc.erase(0,1);
		
		tc += s[i];
		if (tc == c)count++;
	}

	return count;
}

string subs(string s, ll a, ll b)
{
	string ss = "";
	for (ll i = a; i <= b; i++)ss += s[i];
	return ss;
}
int main()
{
	fio;
	ll t;
	
	cin>>t;
	while (t--)
	{
		string s;
		cin>>s;

		ll q;
		cin>>q;
		while (q--)
		{
			ll a, b, c, d;
			
			cin>>a>>b>>c>>d;
			
		
			string X = subs(s, a - 1, b - 1);
			string Y = subs(s, c - 1, d - 1);
			//string X=s.substr(a-1,b-1);
			//string Y=s.substr(b-1,d-1);

			

			cout << sub(X, Y) << endl;

		}
	}




	return 0;
}
/*
1
1
0
0
1
4*/
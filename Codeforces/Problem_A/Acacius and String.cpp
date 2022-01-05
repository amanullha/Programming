#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

#define in cin>>
#define out cout<<
#define sz 10000007
#define tc(cn) pf("Case %d: ",cn)


using namespace std;

int counts(string s, string p)
{
	int count = 0;
	for (int i = 0; i < (int)s.size() - 6; i++)
	{
		string cs = s.substr(i, 7);
		if (cs == p)count++;
	}
	return count;
}


void solve()
{
	int n;
	in n;
	string ss,s, p = "abacaba";
	cin>>ss;


	for (int i = 0; i+p.size()<=n; i++)
	{
		s=ss;
		bool pari = 1;
		
			for (int j = 0; j < 7; j++)
			{
				if (s[j + i] != '?' && s[j + i] != p[j])
				{
					pari=0;
					break;
				}	
			}
		

		if(pari)
		{
			for (int j = 0; j < 7; j++)
			{
				s[i+j]=p[j];
			}
			if(counts(s,p)==1)
			{
				cout<<"Yes\n";
				for(int k=0;k<(int)s.size();k++)
				{
					if(s[k]=='?')cout<<'d';
					else cout<<s[k];
				}
				cout<<endl;
				return;
			}

		}

	}



cout<<"No\n";




}

int main()
{
	int t;
	cin >> t;
	while (t--)solve();



	return 0;
}

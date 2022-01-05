#include<bits/stdc++.h>
#define pb push_back
#define pf              printf
#define sf            	scanf
#define sn(a)          	scanf("%lld",&a)
#define snn(a,b)       	scanf("%lld %lld",&a,&b)
#define snnn(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll long long
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

#define M 10000007
#define sz 10000007
#define tc(cn) pf("Case %d: ",cn)


using namespace std;

void solve()
{
	int len;
	cin >> len;
	string s;
	cin >> s;

	int one = 0, zero = 0;

	for (int i = 0; i < (int) s.size(); i++)
	{
		//cout << "i " << i << endl;
		if (s[i] == '1')
		{
			//cout << "i " << i << endl;

			int tone = 0;
			while (s[i] == '1')
			{
				tone++;
				i++;
			}
			i--;
			//cout << "i " << i << " one " << tone << endl;
			one += tone - 1;
		}
		else
		{
			//cout << "i " << i << endl;

			int tzero = 0;
			while (s[i] == '0')
			{

				tzero++;
				i++;
			}
			i--;
			//cout << "i " << i << " zero " << tzero << endl;

			zero += tzero - 1;
		}
	}
	cout << max(one, zero) << endl;

}

int main()
{
	int t;
	cin >> t;
	while (t--)solve();



	return 0;
}

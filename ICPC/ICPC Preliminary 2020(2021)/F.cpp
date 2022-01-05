#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int tt=1;
const ll prime = 313;

const ll BASE = 313;
const ll MOD = 1e9 + 7;	// ensure this is a prime
const ll MAX = 1e6 + 7;

ll hpsum[MAX], basep[MAX];

// precomputation O(|s|)
void generate_substring_hashing(const string& s) {
	hpsum[0] = 0, basep[0] = 1;
	for(ll i=0; i<(ll) s.size(); ++i) {
		hpsum[i + 1] = (1LL * hpsum[i] * BASE + s[i]) % MOD;
		basep[i + 1] = (1LL * basep[i] * BASE) % MOD;
	}
}

// query substring hash value O(1)
ll SubString_Hash_value(ll l, ll r) {
	ll sub = (hpsum[r + 1] - 1LL * hpsum[l] * basep[r - l + 1]) % MOD;
	if(sub < 0) sub += MOD;
	return sub;
}

ll String_Hash_value(const string& s)
{
	int ret = 0, cur_base = 1;
	for(int i=0; i<(int) s.size(); ++i) {
		int cur = (1LL * s[i] * cur_base) % MOD;
		ret = (ret + cur) % MOD;
		cur_base = (1LL * cur_base * BASE) % MOD;
	}
	return ret;
}


int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		cout<<"Case "<<tt++<<": ";
		int n;
		cin >> n;

		vector<ll> str(n);
		vector<string> strr(n);
		for (int i = 0; i < n; i++)
		{
			string fuck;
			cin>>fuck;
			strr[i]=fuck;
			str[i] = String_Hash_value(fuck);
		}

		string chk;
		cin >> chk;
		//cout<<" chk size "<<chk.size()<<endl;


		int flag = 0;

		generate_substring_hashing(chk);

		


		ll noo = hpsum[chk.size()-1];

		for (int i = 0; i < n; i++)
		{
			if (str[i] == noo)
			{
				flag = 1;
				break;
			}
		}

		if (flag == 1) cout << 1 << endl;
		else
		{
		


			ll c=0,sum=0;

			for (int i = 0; i < chk.size(); i++)
			{
				for (int len = 0; len+i < chk.size(); len++)
				{
					ll L=i,R=i+len;

					//cout<<"L "<<L <<" R  "<<R<<endl;

					ll ii=SubString_Hash_value(L,R);

					//cout<<" up ii : "<<ii<<endl;



					for(ll k=0;k<str.size();k++)
					{
						//cout<<"ola ii "<<ii<<"   str[k] "<<str[k]<<endl;
						if(ii==str[k])
						{
						//	cout<<"ii "<<ii<<"   str[k] "<<str[k]<<endl;
							c++;
							sum+=strr[k].size();
							break;
						}
					}

				}
			}

		//	cout<<"sum "<<sum<<" chk size "<<chk.size()<<endl;

			if (sum ==(ll)chk.size()) cout << c << endl;
			else cout << "impossible" << endl;


		}



	}

	return 0;
}
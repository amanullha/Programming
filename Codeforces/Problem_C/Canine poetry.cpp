
#include<bits/stdc++.h>


#define fio 				ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
using namespace std;
inline void Time() { cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " s. \n";}


int id=0;
bool cr[26];
void ok()
{

	for (int i = 0; i < 26; i++)
	{
		cr[i] = 0;

	}
}
bool pl(string s) {
	if (s.size() <= 1) {
		return true;
	}
	auto it1 = s.begin();
	auto it2 = s.end();
	--it2;

	while (it1 != it2) {
		while (false == isalnum(*it1) && (it1 != it2))   ++it1;
		while (false == isalnum(*it2) && (it1 != it2))   --it2;

		// Check if both iterators are at same
		if (it1 == it2) return true;

		if (tolower(*it1) == tolower(*it2)) {
			if (++it1 != it2--) {
				continue;
			}
			return true;
		} else {
			return false;
		}
	}
	return true;
}

char nbr()
{
	for (int i = 0; i < 26; i++)
	{

		if (cr[i] == false)
		{
			char rr = (char)(i + 'a');
			return rr;
		}
	}
return '0';
}

void solve()
{
	ok();
	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++)
	{

		cr[s[i] - 'a'] = true;
	}
	string s1;
	s1 = s[0];
	int c = 0;
	for (int i = 1; i < s.size(); i++)
	{
		char x = s[i];

		s1 += x;
		if (pl(s1) == 1)
		{
			//cout<<"i  " <<i<<endl;
			char nn=nbr();
			if(nn=='0')
			{
				nn=s1[id++];
			}
			s1[s1.size() - 1] = nn;
			cr[nn-'a']=true;
			c++;
		}

	}
	//cout<<c<<endl;

	char p = s1[s1.size() - 1];
	string s2;
	s2 = p;
	for (int i = s1.size() - 2; i >= 0; i--)
	{

		char x = s1[i];

		s2 += x;
		if (pl(s2) == 1)
		{
			char nn=nbr();
			if(nn=='0')
			{
				nn=s2[id++];
			}
			s2[s2.size() - 1] = nn;
			cr[nn-'a']=true;
			c++;
		}

	}

cout<<c<<endl;


}

int main()
{	fio;


	int t;
	cin >> t;
	//sf1(t);
	while (t--)solve();


	//pf("\n\n\n\n"); Time();
	return 0;
}

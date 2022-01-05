#include<bits/stdc++.h>
#define ull unsigned long int
using namespace std;
int main()
{
	ull k;

	string s, p;
	cin >> s;
	cin >> k;

	if (s.empty())cout<< "0";
	if (s.size() == k)cout<< "0";


	while (k != 0)
	{	cout << k << endl << endl;
		for (long long i = 0; i < s.size(); i++)
		{
			stringstream si, spi;

			si << s[i];
			spi << s[i + 1];
			int xi, xii;
			si >> xi;
			spi >> xii;

			if (xi > xii)
			{
				// 10 ar por thake 8 ta characture delete
				cout << "before : " << s << endl;
				s.erase (s.begin() + i);
				cout << "after : " << s << endl;
				break;

			}
			else if (xii > xi && i == s.size() - 1)s.erase (s.begin() + i);
			else continue;
			//cout<<s<<endl;



		}
		k--;
	}

	if (s[0] == '0') {
		long long i = 0, j = 0;
		for (long long i = 0; i < s.size(); i++)
		{
			if (s[i] == '0')j = i;
			else break;
		}

		s.erase(i, j + 1);
	}


	cout << " final  " << s << endl;















	/*k-=1;
	bool f=true;
	for(int i=0;i<s.size();i++)
	{
		stringstream si,spi;
		si << s[i];
		spi<<s[i+1];
		int x,y;
		si>>x;
		spi>>y;
		if(f &&x>y&&i+k<s.size()){i+=k;f=false;}
		else
		p+=s[i];//cout<<s[i];

	}
	stringstream sp;
	sp<<p;
	int d;
	sp>>d;
	cout<<d;

	string dd;
	dd=to_string(d);
		cout<<endl<<"  dd "<<dd<<endl;*/
	return 0;
}
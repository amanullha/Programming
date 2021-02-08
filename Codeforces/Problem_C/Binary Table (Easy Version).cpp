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
int x, y, countt;
char m[105][105];
int mx[] = {0, +1};
int mxx[] = {0, -1};

int my[] = { +1, +1};
int myy[] = { +1, +1};


std::vector<string> ans;


void sp(int i, int j)
{
	string s = "";
	s = to_string(i + 1);
	s += " ";
	s += to_string(j + 1);
	s += " ";
	m[i][j] = '0';

	for (int ii = 0; i < 2; i++)
	{
		int a = i + mx[ii];
		int b = j + my[ii];
		if (a >= 0 && a < x && b >= 0 && b < y)
		{
			m[a][b] = '0';

			s += to_string(a);
			s += " ";
			s += to_string(b);
			s += " ";
		}


	}
	cout << endl << "s1 : " << s << endl;

	ans.push_back(s);
}


void spp(int i, int j)
{
	string s = "";
	s = to_string(i + 1);
	s += " ";
	s += to_string(j + 1);
	s += " ";
	m[i][j] = '0';

	for (int ii = 0; i < 2; i++)
	{
		int a = i + mxx[ii];
		int b = j + myy[ii];
		m[a][b] = '0';

		s += to_string(a);
		s += " ";
		s += to_string(b);
		s += " ";

	}
	cout << endl << "s2 : " << s << endl;
	ans.push_back(s);
}



void clr()
{
	for (int i = 0; i < 104; i++)
	{
		for (int j = 0; j < 104; j++)
		{
			m[i][j] = 'x';
		}
	}
}

void p()
{

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			cout << m[i][j] << " ";

		} cout << endl;
	}

}


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cout << endl;
		cin >> x >> y;
		clr();
		countt = 0;
		for (int i = 0; i < x; i++)
		{
			for (int j = 0; j < y; j++)
			{
				cin >> m[i][j];
			}
		}

		for (int i = 0; i < x - 1; i++)
		{
			for (int j = 0; j < y; j++)
			{


				if (m[i][j] == '1')
				{

					m[i][j] = '0';
					m[i][j + 1] = '0';
					m[i + 1][j + 1] = '0';

					string s = "";
					s = to_string(i + 1);
					s += " ";
					s += to_string(j + 1);
					s += " ";

					s += to_string(i + 1);
					s += " ";
					s += to_string(j + 2);
					s += " ";

					s += to_string(i + 2);
					s += " ";
					s += to_string(j + 2);
					ans.push_back(s);
					//s += " ";

					//sp(i,j);
					countt++;

				}


			}
		}

		int ii = x - 1;
		for (int j = 0; j < y; j++)
		{


			if (m[ii][j] == '1')
			{

				m[ii][j] = '0';
				m[ii][j + 1] = '0';
				m[ii - 1][j + 1] = '0';

				string s = "";
					s = to_string(ii + 1);
					s += " ";
					s += to_string(j + 1);
					s += " ";

					s += to_string(ii + 1);
					s += " ";
					s += to_string(j + 2);
					s += " ";

					s += to_string(ii );
					s += " ";
					s += to_string(j + 2);
					ans.push_back(s);

				//spp(ii,j);
				countt++;

			}


		}


		cout << countt << endl;
		for (int i = 0; i < (int)ans.size(); i++)cout << ans[i] << endl;
		cout << endl << endl;



















	}



	return 0;
}

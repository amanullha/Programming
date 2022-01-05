#include<bits/stdc++.h>
#define cp_io ios_base::sync_with_stdio(0);cin.tie(0)
#define M 1000002
#define ll long long
using namespace std;

int main()
{
	//cp_io;
	int t;
	string s;
	cin>>t;
	getchar();

	while (t--)
	{

		getline(cin, s);


		stack<char>st;
		//cout<<s.size()<<endl;


		if (s.size() % 2 == 1)cout << "No" << endl;
		else
		{


			for (int i = 0; i < s.size(); i++)
			{



				if (s[i] == '(' || s[i] == '[')
				{

					st.push(s[i]);
				}


				else if (!st.empty() && s[i] == ')' && st.top() == '(')
				{
					st.pop();
				}
				else if (!st.empty() && s[i] == ']' && st.top() == '[')
				{
					st.pop();
				}


				else {

					st.push(s[i]);
				}
			}

			if (st.empty()) cout << "Yes" << endl;
			else cout << "No" << endl;

		}

	}


	return 0;
}
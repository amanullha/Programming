#include<bits/stdc++.h>
#define cp_io ios_base::sync_with_stdio(0);cin.tie(0)
#define M 1000002
#define ll long long
using namespace std;

int main()
{
	cp_io;

	string s;
	long long i,j,n,l,f;
	cin >> n;
	getchar();
	while (n--)
	{

		getline(cin, s);
		 l = s.length();
		stack<char>st;


		if (l % 2 != 0)cout << "No" << endl;
		else
		{
				f=0;

			for ( i = 0; i < l; i++)
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


				else
				{
					cout<<"ama";
					st.push(s[i]);
				}
			}

			while(!st.empty()){cout<<st.top();st.pop();}

			if (st.empty()) cout << "Yes" << endl;
			else cout << "No" << endl;

		}

	}


	return 0;
}

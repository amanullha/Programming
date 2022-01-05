#include<bits/stdc++.h>
#define pb push_back

#define pr pair<int,int>


using namespace std;

void okkk()
{
	int p;
	cin >> p;
	int n;
	n = p;

	std::vector<pair<int, int>>vvv;
	vvv.clear();

	for (int i = 1; i <= n; i++)
	{
		int x; cin >> x;
		vvv.pb({x, i});

	}
	sort(vvv.begin(), vvv.end());


	/*
	for(int i=0;i<(int)vvv.size();i++)
	{
		cout<<vvv[i].first<<"  :  "<<vvv[i].second<<endl;
	}
	cout<<endl<<endl;
	*/

	if (vvv[0].first != vvv[1].first)
	{
		//cout<<"a1  ";
		cout << vvv[0].second << endl;
		vvv.clear();
		return;
	}

	for (int i = 2; i < n; i++)
	{

		if (vvv[i].first != vvv[i - 1].first && vvv[i].first != vvv[i + 1].first)
		{
		//cout<<"a2  ";

			cout << vvv[i].second << endl;
			vvv.clear();

			return;
		}
	}

	if (vvv[n - 2].first != vvv[n - 1].first)
	{		//cout<<"a3  ";

		cout << vvv[n - 1].second << endl;
		vvv.clear();

		return;
	}
	cout << "-1" << endl;
	vvv.clear();



}

int main()
{
	int t;
	cin >> t;
	while (t--)okkk();

	return 0;
}

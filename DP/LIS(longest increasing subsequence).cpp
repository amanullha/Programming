#include<bits/stdc++.h>
using namespace std;

//LIS-> O( N*N )
void LIS_N_Squire()
{
	int n;
	cin >> n;
	vector<int>v(n);
	vector<int>lis(n + 1, 1);

	for (int &x : v)cin >> x;

	int max_len = 1;

	for (int i = 1; i < n; i++)
	{
		int max_lis = 0;

		for (int j = 0; j < i; j++)
		{
			if (v[i] >= v[j])
			{
				max_lis = max(max_lis, lis[j]);
			}
		}

		lis[i] = max_lis + 1;

		max_len = max(max_len, lis[i]);
	}

	cout << max_len << endl;
}

//LIS-> O(N *Log(N) )
void LIS_N_Log_N()
{
	int n;
	cin >> n;

	vector<int>v(n);
	for (int &x : v)cin >> x;

	vector<int>lis;
	lis.push_back(v[0]);

	for (int i = 1; i < n; i++)
	{
		if (lis.back()< v[i]) lis.push_back(v[i]);
		else
		{
			int index = lower_bound(lis.begin(), lis.end(), v[i]) - lis.begin();

			lis[index] = v[i];
		}

	}

	cout << lis.size() << endl;
}

int main()
{
	//LIS_N_Squire();
	LIS_N_Log_N();

	return 0;
}

#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define M 10000
using namespace std;

int parent[M];
void Initial_parent(int n)
{
	for (int i = 0; i < n; i++)
		parent[i] = i;
}

int find_parent(int n)
{
	if (parent[n] == n)return n;

	parent[n] = find_parent(parent[n]);

	return parent[n];
	//return find_parent(parent[n]);
}

void set_union(int a, int b)
{
	int parent_of_a = find_parent(a);
	int parent_of_b = find_parent(b);

	if (parent_of_a != parent_of_b)parent[parent_of_a] = parent_of_b;
}


int main()
{
	int n, cd = 1, cholbe;

	cin >> n;
	Initial_parent(n + 2);
	vector<int>ar(n + 2), ak;

	cholbe = n;

	for (int i = 1; i <= cholbe; i++)
	{
		cin >> ar[i];
		set_union(i, ar[i]);
	}
	ak = ar;
	//unordered_map<int, bool>un;
	int c = 0;

	for (int i = 1; i <= n; i++)
	{
		cout << i << "  " << ar[i] << endl;
	}
	cout << endl;

	bool f = 0;
	int root = 0;
	for (int i = 1; i < n; i++)
	{

		if (i == parent[i] && f)
		{
			ar[i] = root;
			set_union(root, parent[i]);
		}
		else {
			f = 1;
			root = i;
		}


	}

	for (int i = 1; i <= n; i++)
	{
		cout << i << "  " << ar[i] << endl;
	}
	cout << endl;


	for (int i = 1; i < n; i++)
	{
		if(parent[i]!=parent[i+1])
		{
			set_union(i,i+1);
			ar[i]=i+1;
		}
	}







	cout << c << endl;
	//if(c==0)ar=ak;

	for (int i = 1; i < n; i++)
	{
		//cout << i << "  ";
		cout << ar[i] << " ";
	}
	cout << ar[n] << endl;



	return 0;
}

/*
int pa = find_parent(i);
		int pb = find_parent(i + 1);
		if (pa != pb)
		{
			c++;
			ar[i] = i + 1;
			parent[pa] = pb;
		}*/
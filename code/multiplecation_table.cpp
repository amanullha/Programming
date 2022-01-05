#include <iostream>
#include <stdio.h>
using namespace std;

#define sz 1000000

long long dp2[sz + 5];
long long dp5[sz + 5];

int main()
{
	int j;
	int x;
	int n;
	int r;
	int p;
	int q;
	int t;
	long long a;
	long long b;
	long long temp;
	long long two;
	long long five;

	dp2[1] = 0;
	dp5[1] = 0;
	for (int i = 2; i <= sz; i++) {
		j = i;
		
		temp = 0;

		while(j % 2 == 0) {
			temp++;
			j = j / 2;
		}

		dp2[i] = dp2[i-1] + temp;
			
		j = i;
		
		temp = 0;

		while(j % 5 == 0) {
			temp++;
			j = j / 5;
		}
		
		dp5[i] = dp5[i-1] + temp;
	
	}

	scanf("%d", &t);

	for (int cs = 1; cs <= t; cs++) {
		scanf("%d", &n);
		scanf("%d", &r);
		scanf("%d", &p);
		scanf("%d", &q);

		two = (dp2[p] - dp2[p-1]) * q;
		five = (dp5[p] - dp5[p-1]) * q;

		two += (dp2[n] - dp2[n-r]);
		five += (dp5[n] - dp5[n-r]);

		two = two - dp2[r];
		five = five - dp5[r];

		a = min(two, five);

		printf("Case %d: %lld\n", cs, a);
	}



}

/*
#include<bits/stdc++.h>
#define ll long long
#define M 100000000
using namespace std;
vector<int>s;


int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			s.push_back(i*j);
		}
	}


	int x=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cout<<s[x++]<<" ";
		}
		cout<<endl;
	}
cout<<endl;

	for(int i=0;i<(int)s.size();i++)
	{
		cout<<s[i]<<" ";
	}
	cout<<endl;


	sort(s.begin(), s.end());


	for(int i=0;i<(int)s.size();i++)
	{
		cout<<s[i]<<" ";
	}
	cout<<endl<<s[k-1]<<endl;
	return 0;
}
*/
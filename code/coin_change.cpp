#include<bits/stdc++.h>
using namespace std;

int s(int n)
{
	return (n * (n + 1)) / 2;
}


void binary(int n)
{

	int l = 1, h = n, m = 0,p=50;

	while (p--)
	{
		m = l + (h - l) / 2;
		//cout<<l<<"   "<<m<<"  "<<h<<"   "<<p<<endl;
		if (s(m) == n) {cout << m << endl; break;}
		if (s(m) < n)l = m;
		else h = m;



	}

	cout << l << endl;


}
int main()
{
	int n;
	cin >> n;
	cout<<"n "<<n<<endl;
	binary(n);



	return 0;
}

#include<bits/stdc++.h>

using namespace std;



int ar[]={9,8,7,6,5,4,3,2,1,0};
void solve()
{
	int n;
	cin>>n;

	int i=0;
	while(n--)
		{
			i%=10;
			cout<<ar[i];
			i++;
		}
		cout<<endl;

}

int main()
{ //fio;


	int t;
	cin >> t;
	//sf1(t);
	while (t--)solve();


	//pf("\n\n\n\n"); Time();
	return 0;
}

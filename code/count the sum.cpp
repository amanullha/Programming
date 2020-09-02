#include <bits/stdc++.h>
#define M 10000
using namespace std;
int phi[M];

void phi_fun()
{
	for(int i=0;i<M;i++)phi[i]=i;

		for(int i=2;i<M ;i++)
		{
			if(phi[i]==i)
			{
				for(int j=i;j<M;j+=i)
				{
					phi[j]-=phi[j]/i;
				}
			}
		}
}






int main()
{
phi_fun();
cout<<phi[8]<<endl;
int n;
cin>>n;
int s=0;
for(int i=1;i<n+1;i++)if(__gcd(i,n)==1)s+=i;
	cout<<s<<endl;
return 0;
}
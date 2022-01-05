#include <iostream>
#include<bits/stdc++.h>
#define M 1000000
using namespace std;
vector<bool>prime(M,1);
void pim()
{
	prime[0]=prime[1]=false;
	
	for(int i=2;i<M ;i++)
	{
		if(prime[i])
		{
			for(int j=i+i;j<M;j+=i)
				prime[j]=false;
		}
	}
}



int main() {
	pim();
	int q;
	cin>>q;
	int p=0;
	int np=0;
	while(q--)
	{
		int n;
		cin>>n;
		if(prime[n])p++;
		else np++;
	}
	if(p<=np)cout<<p<<endl;
	else
		cout<<np+((p-np)/2)<<endl;


	
	return 0;
}
/**
akane triboj ABC/ADE=AB^2/AD^2
and ABC mane holo ADE+BDEC
akon equation ta holo ADE+BDEC/ADE=AB^2/AD^2
oboy pokkhe squrt root kore pai sqrt_root(ADE+BDEC/ADE)=AB/AD
**/

#include <bits/stdc++.h>
#define ld long double
#define s scanf
using namespace std;
vector<int>v;
int main()
{
	int tc;
	s("%d",&tc);
	for(int tcc=1;tcc<=tc;tcc++)
	{
		double ab,ac,bc,ratio_of_ade_and_bdec;
		s("%lf%lf%lf%lf",&ab,&ac,&bc,&ratio_of_ade_and_bdec);

		double root_raatio=sqrt(ratio_of_ade_and_bdec)/sqrt(ratio_of_ade_and_bdec+1);
		root_raatio*=ab;
		printf("Case %d: ",tcc);
		cout<<setprecision(10)<<fixed<<root_raatio<<endl;


	}

return 0;
}
#include <bits/stdc++.h>
#define s scanf
#define p printf
#define ld long double

using namespace std;

void ab(ld n)
{
	int x = 80;
	// akane akta number b=n hole opor akta number a=n-a ;
	//jodhi a+b and a*b==n hoy tahole amder r loop chalanor drkr nai 
	// break kore dile e amra akta value pabo m thake 
	// ar akta pabo n thake m(mid)value minas korle

	ld l = 0.0, r = n, m = 0.0;
	while (x--)
	{
		m = l + (r - l) / 2;
		//cout<<" m "<<m<<endl;
		if (m * (n - m) ==n&&m+(n-m)==n){l=m;break;}
		
		if(abs((n)*(n-m))<=0.1){l=m;break;}

		if (m * (n - m) < n)
			r = m;
		else
			l = m;


	}

	cout << setprecision(9) << fixed << m;
	cout << " "<<setprecision(9) << fixed << n - m << endl;

}



int main()
{
	int tc;
	cin>>tc;
	//s("%d", &tc);
while(tc--){
	ld n;
	cin>>n;
	//s("%lf", &n);
	if (n >0 &&n<4)
	{
		//p("N\n");
		cout<<"N"<<endl;
	}
	else
	{
		//p("Y ")
		cout<<"Y ";
		ab(n);
	}
}
	return 0;
}
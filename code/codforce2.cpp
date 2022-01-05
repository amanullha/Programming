#include <bits/stdc++.h>
using namespace std;
int main()
{

	int a, b, v, c;
	cin >> a >> b >> v >> c;
	int f = 1;
	bool an=1;

	while (f)
	{
		if(a<=0&&b<=0)f=0;
		if (f & 1)
		{

			//for a
			if (v > c && v != 0) 
			{
				if(v<=0){an=0;break;}
				else
				{v--; a--;}
			}
			else if (v < c && c != 0) 
				{
					if(c<=0){an=0;break;}
					else{
					c--; a--;}
				}


		}
		else
		{
			if (v > c && c != 0) 
			{
				if(c<=0){an=0;break;}
				else{
				c--; b--;}
			}
			else if (v < c && v != 0) 
				{
					if(v<=0){an=0;break;}
					else{
					v--; b--;}
				}
		}

		f++;

	}

	if(an)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;


	return 0;
}
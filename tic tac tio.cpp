#include<bits/stdc++.h>
#define pf              printf
#define sf            	scanf
using namespace std;

int value[10];

void print()
{
	for (int i = 1; i < 10; i++)
	{
		cout << value[i];
		if (i % 3 != 0)cout << "|";
		if (i % 3 == 0)
		{
			cout << "---  ---  ---\n";
		}
	}
}

int main()
{
print();
cout<<"amn";


	return 0;
}

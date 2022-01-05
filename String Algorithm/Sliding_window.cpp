
#include<bits/stdc++.h>
using namespace std;

void sildeing_window()
{
	string text,pattern;
	cin>>text>>pattern;

	for(int i=0;i<(int)text.size();i++)
	{
		string sub_str=text.substr(i,pattern.size());
		if(sub_str==pattern)cout<<i<<" ";
	}

}

int main()
{
	sildeing_window();
	return 0;
}

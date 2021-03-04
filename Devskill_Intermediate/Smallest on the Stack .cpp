#include<bits/stdc++.h>
#include <iostream>
//#define cp_io ios_base::sync_with_stdio(0);cin.tie(0)
using namespace std;
int main()
{
	stack<pair<int,int> >st;
	int t;
	scanf("%d",&t);
	char com[10];
	while (t--)
	{
		scanf("%s",com);

		if(com[0] == 'P' && com[1] == 'U')
		{
			int x,p;
			scanf("%d",&x);

			if(!st.empty())
			{
			p= min(x,st.top().second);
			st.push(make_pair(x,p));
			}
			else st.push(make_pair(x,x));

			
			
		}
		
		else if(com[0] == 'M')
		{
			if(st.size()==0)printf("EMPTY\n");

			else
			printf("%d\n",st.top().second);
		}
		else 
		{
			if(st.size()==0)printf("EMPTY\n"); 

			else
			st.pop();

		}





	}


	return 0;
}
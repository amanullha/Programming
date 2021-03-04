#include<bits/stdc++.h>
#define Node 100
#define state 2

using namespace std;

vector<int>graph[Node];
int dp[Node][state];

void minimum_vertex_cover(int Current_node, int parent)
{
	int child_count = 0;

	// leaf node thake kaj start korte hobe . tai age leaf node ar value calculate korte hobe
	for (int child : graph[Current_node])
	{
		if (child != parent)
		{
			minimum_vertex_cover(child, Current_node);
			child_count++;
		}
	}

	if (child_count == 0)// child count zeor mane leaf node
	{
		dp[Current_node][true] = 1;
		dp[Current_node][false] = 0;
	}
	else// child count zero nah mane leaf node nah
	{
		
		dp[Current_node][true] = 1;// current node a jodhi guard boshai

		for (int child : graph[Current_node])
		{
			if (child != parent)
			{
				dp[Current_node][true]+=min(dp[child][true],dp[child][false]);// parent a guard boshale child a boshano jete o pare abr nah ooo. 
				
			}
		}


		dp[Current_node][false]=0;// current node a jodhi guard nah boshai

		for(int child:graph[Current_node])
		{
			dp[Current_node][false]+=dp[child][true];// parent a guard na boshale child a boshate hobe eeee.
		}

	}

}




int main()
{
	int total_node,edge;
	cin>>total_node>>edge;

	while(total_node--)
	{
		int u,v;
		cin>>u>>v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	int root=0;
	int root_parent=-1;

	minimum_vertex_cover(root,root_parent);

	int ans=min(dp[root][true],dp[root][false]);// root a guard boshano and nah boshanoro por minimum ta hobe final optimal answer

	cout<<ans<<endl;

	return 0;
}
#include<bits/stdc++.h>
#define M 10
using namespace std;

vector<int>g[M];
int node,edge;
bool vis[M];

int src=5;
/**
bool dfs(int s)
{

    for(int i=0; i<M; i++)vis[i]=false;

    vis[s]=1;

    queue<int>q;
    q.push(s);

    while(!q.empty())
    {

        int u=q.front();
        q.pop();


        for(int x:g[u])
        {
            if(!vis[x])
            {
            if(x==src)return true;
                vis[x]=true;
                q.push(x);
            }
        }

    }



return false;
}

*/

bool dfs(int n)
{
    if(n==src)return true;

    if(!vis[n])
    {
        vis[n]=1;
        for(int x:g[n])
        {
            dfs(x);
        }
    }


return false;
}

int main()
{


    // g={{0,1},{0,3},{0,4},{0,4},{1,2},{4,5},{5,6}};


    cin>>node>>edge;

    while(edge--)
    {
        int x,y;
        cin>>x>>y;

        g[x].push_back(y);
        g[y].push_back(x);
    }

    int source=0;

    for(int i=0; i<M; i++)vis[i]=false;

    if(dfs(source))

        cout<<endl<<endl<<src<<"  is in present this graph"<<endl;
    else

        cout<<src<<"  Not present in this graph"<<endl;

    /**
    10
    7
    0 1
    0 3
    0 4
    0 7
    1 2
    4 5
    5 6
    */



    return 0;

}

#include<bits/stdc++.h>
using namespace std;
vector<int>g[205];

char cl[205];

bool bfs(int s, int n)
{
    memset(cl,'w',sizeof(cl));
    queue<int>q;
    q.push(s);
    cl[s]='r';

    while(!q.empty())
    {

        int u=q.front();
        q.pop();

        for(int i=0; i<g[u].size(); i++)
        {
            int v=g[u][i];

            if(cl[v]=='w' && cl[u]=='r')
            {

                cl[v]='b';
                q.push(v);
            }
            else if(cl[v]=='w' && cl[u]=='b')
            {
                cl[v]='r';
                q.push(v);
            }
            else if(cl[u]==cl[v])
            {

               // cout<<" u "<<cl[u]<<"  v  "<<cl[v]<<endl;
                return false;
            }


        }
    }

   // for(int i=0; i<n; i++)
       // cout<<i<<"  : "<<cl[i]<<endl;
    return true;
}

int main()
{

    int node,edge;
    while(cin>>node, node!=0)
    {
        cin>>edge;

        while(edge--)
        {
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        if(!bfs(0,node))
            cout<<"NOT BICOLORABLE."<<endl;
        else
            cout<<"BICOLORABLE."<<endl;


        for(int i=0; i<204; i++)
        {
            g[i].clear();
        }
    }
    return 0;
}
/**9 8
0 1
0 2
0 3
0 4
0 5
0 6
0 7
0 8
3 2
0 1
1 2
3
3
0 1
1 2
2 0**/

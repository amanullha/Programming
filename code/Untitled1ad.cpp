#include <bits/stdc++.h>

#define MX 20500
#define ll long long
using namespace std;


int n, m;
long long AdjMat[10000][10000];

void floydWarshall()
{
    scanf("%d", &n);
    for (int i = 1; i <= n + 5; i++)
    {
        for (int j = 0; j <= n + 5; j++)
            AdjMat[i][j] = 0LL;
    }
    cout << "aman";
    //Input distaces;long long w;
    m = n - 1;
    ll w;
    int u, v;
    for (int i = 0; i < m; i++)
    {
        scanf("%d %d %lld", &u, &v, &w);
        AdjMat[u][v] = min(AdjMat[u][v], w);
        AdjMat[v][u] = min(AdjMat[v][u], w);
    }
    cout << "aman";
    //Algorithm ;
    for (int k = 1; k <= n; k++)
    {
        //k is theintermidiate node
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                AdjMat[i][j] = min(AdjMat[i][j], AdjMat[i][k] + AdjMat[k][j]);
            }
        }
    }
}
int main()
{ //test code;
    floydWarshall();
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            printf("%lld ", AdjMat[i][j]);
        printf("\n");
    }
    return 0;
}

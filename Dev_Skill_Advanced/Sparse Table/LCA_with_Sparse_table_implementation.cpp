#include <bits/stdc++.h>
#define ll long long
#define M 10000007
using namespace std;

vector<ll> Graph[M];
long long Depth[M];
ll parent_sparse[M][20]; //M is the totla node,and 50 is the power of 2.

void dfs_for_depth(ll u, ll parent)
{
    if (parent != -1)
        Depth[u] = Depth[parent] + 1;

    parent_sparse[u][0] = parent;

    for (ll v : Graph[u])
    {
        if (v != parent)
        {
            dfs_for_depth(v, u);
        }
    }
}

void generate_sparse_table(ll n)
{
    ll logN = log2(n) + 1; // 2 ar power long(N) porjonto cholbe
    for (ll u = 0; u < n; u++)
    {
        for (ll p = 1; p <= logN; p++) // 2 ar power 0 mane 1 . mene parent_sparse[node][0]ar value to age calculate kore hoise , tai 1 thake start kora hoise akane
        {
            if (parent_sparse[u][p - 1] != -1)
                parent_sparse[u][p] = parent_sparse[parent_sparse[u][p - 1]][p - 1];
            /*

            1<-2<-3 ( mane 3 ar parent 2 and 2 ar parent 1 and 3 ar parent ar parent 1 and 2 ar parent o 1)
            parent_sparse[3][1] = parent_sparse[2][0]        (parent_sparse[][0 to longN] ar mane 2 ar power and 0 holo immediate parent then 1 holo 2 ar power 1 mane 2th parent mane immediate parent ar parent)
                1                       1
                                = parent_sparse [ parent_sparse [[3] [0]] [0]
                                mane 3 ar immediate parent ar parent
            */
        }
    }
}

ll LCA_of_U_V(ll u, ll v, ll n)
{
    if (Depth[u] < Depth[v])
        swap(u, v);

    ll dif_depth = Depth[u] - Depth[v];

    /*
    // linear a difference ta same korbe 
    while(dif_depth--)
    {
        u=parent_sparse[u][0];// u assigne hobe u ar immediate parent
       // u ar depth v ar depth thake beshi bole tader ke soman korte hobe. difference joth to step agate hobe. 
    }
*/

    // logN a difference ta same korbe
    for (ll bit_on = 0; bit_on <= log2(n) + 1; bit_on++)
    {
        if (dif_depth & (1 << bit_on))
        {
            u = parent_sparse[u][bit_on];
            // dif_depth ar jei bit ta on oi bit porjonto u ar parent uporer dike asbe mane parent ar paren totho step porjonto uprer dike asbe
            // akane age big jump ta age calculate kora hoise. then small and going on
        }
    }

    if (u == v)
        return u;

    /*
    // linear a lowest common anchestor findout korbe
    while(parent_sparse[u][0] != parent_sparse[v][0])
    {
        u = parent_sparse[u][0];
        v = parent_sparse[v][0];
        // jotokkhon nah u and v ar parent same hocche totohkkhon porjonto u te u ar parent r v te v ar parent assigne kora hocche.
    }
*/

    // logN a lowest common anchestor findout korbe
    for (ll i = log2(n) + 1; i >= 0; i--)
    {
        if (parent_sparse[u][i] != parent_sparse[v][i])
        {
            // u and v ar parent same nah mane common node thake u and v dure ache. tai step agate hobe
            u = parent_sparse[u][i];
            v = parent_sparse[v][i];
        }
    }

    return parent_sparse[u][0]; // or return parent_sparse[v][0];
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll node, edge;
    cin >> node >> edge;
    while (edge--)
    {
        ll u, v;
        cin >> u >> v;
        Graph[u].push_back(v);
        Graph[v].push_back(u);
    }
    ll root = 0, parent_of_root = -1;
    dfs_for_depth(root, parent_of_root);

    cout << "Depth of all node from root node \n";
    for (int i = 0; i < node; i++)
    {
        cout << "node " << i << "  ->  " << Depth[i] << endl;
    }
    cout << endl
         << endl;

    generate_sparse_table(node);

    for (ll pow2 = 0; pow2 <= log2(node) + 1; pow2++)
    {
        cout << "Node theke " << pow(2, pow2) << "  length por parent\n";
        for (ll nod = 0; nod < node; nod++)
        {
            cout << nod << " : " << parent_sparse[nod][pow2] << endl;
        }
        cout << endl
             << endl;
    }
    cout << endl
         << endl;

    ll query;
    cin >> query;
    while (query--)
    {
        ll u, v;
        cin >> u >> v;

        cout << "LCA of " << u << " and " << v << " is : " << LCA_of_U_V(u, v, node) << endl;
    }

    return 0;
}
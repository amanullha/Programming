#include <bits/stdc++.h>
using namespace std;
#define MAX 100005
#define left st, (st + en) / 2, nd + nd
#define right (st + en) / 2 + 1, en, nd + nd + 1
int tree[4 * MAX + 5];
int n, arr[MAX + 5];

void build(int st, int en, int nd)
{
    if (st == en)
    {
        tree[nd] = arr[st];
        return;
    }
    build(left); /// left subtree
    build(right); /// right subtree
    tree[nd] = min(tree[nd + nd] ,tree[nd + nd + 1]);
}

int query(int st, int en, int nd, int L, int R)
{
    if (L <= st && en <= R) return tree[nd]; /// if the query segment is completely overlapping our tree segment/node.
    if (en < L || R < st) return 1000000009;
    return min(query(left, L, R) , query(right, L, R));
}

int main()
{

int n;
cin>>n;

for(int i=0;i<n;i++)cin>>arr[i];

    build(0,n-1,1);

int q;
cin>>q;
while(q--)
{
    int l,r;
    cin>>l>>r;
    cout<<query(0,n-1,1,l,r)<<endl;
}

    
    
    return 0;
}
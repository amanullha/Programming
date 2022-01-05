#include <bits/stdc++.h>
using namespace std;
#define MAX 100005
#define left st, (st + en) / 2, nd + nd
#define right (st + en) / 2 + 1, en, nd + nd + 1
//int tree[4 * MAX + 5];
int n, arr[MAX + 5];

struct info
{
    long long sum,count;

} tree[4*MAX+5];

void build(int st, int en, int nd)
{
    if (st == en)
    {
        tree[nd].sum = arr[st];
        if(tree[nd].sum%3==0)tree[nd].count=1;
        else tree[nd].count=0;
        return;
    }
    build(left);
    build(right);
    tree[nd].sum = tree[nd + nd].sum + tree[nd + nd + 1].sum;
    tree[nd].count=tree[nd+nd].count+tree[nd+nd+1].count;
}

int query(int st, int en, int nd, int L, int R)
{
    if (L <= st && en <= R)
    {
        
            return tree[nd].count;
    }
    if (en < L || R < st) return 0;

    return query(left, L, R) + query(right, L, R) ;
}

void update(int st, int en, int nd, int idx, int v)
{
    if (en < idx || idx < st) return;
    if (st == en && idx==st)
    {
        tree[nd].sum += v;
        if(tree[nd].sum%3==0)tree[nd].count=1;
        else tree[nd].count=0;
        return;
    }
    update(left, idx, v);
    update(right, idx, v);


    tree[nd].sum =  tree[nd + nd].sum + tree[nd + nd + 1].sum ;
    tree[nd].count =  tree[nd + nd].count + tree[nd + nd + 1].count ;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)arr[i] = 0;
    build(0, n - 1, 1);
    int Q;
    cin >> Q;
    while (Q--)
    {
        int com;
        cin >> com;
        if (com == 0)
        {
            int l, r;
            cin >> l >> r;
            for (int i = l; i <= r; i++)
            {
                update(0, n - 1, 1, i, 1);
                arr[i]+=1;

            }
        }
        else if (com == 1)
        {
            int L, R;
            cin >> L >> R;
            cout << query(0, n - 1, 1, L, R) << "\n";
        }
    }
    return 0;
}

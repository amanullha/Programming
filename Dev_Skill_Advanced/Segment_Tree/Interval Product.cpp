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
    tree[nd] = tree[nd + nd] * tree[nd + nd + 1];
}

int query(int st, int en, int nd, int L, int R)
{
    if (L <= st && en <= R) return tree[nd]; /// if the query segment is completely overlapping our tree segment/tree.
    if (en < L || R < st) return 1;
    return query(left, L, R) * query(right, L, R);
}

void update(int st, int en, int nd, int idx, int v)
{
    if (en < idx || idx < st) return;
    if (st == en)
    {
        tree[nd] = v;
        return;
    }
    update(left, idx, v);
    update(right, idx, v);
    tree[nd] = tree[nd + nd] * tree[nd + nd + 1];
}

int main()
{


    int Q;

    while ( scanf ("%d %d", &n, &Q) != EOF ) {
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 0)arr[i] = 0;
            else if (x > 0)arr[i] = 1;
            else arr[i] = -1;
        }
        build(0, n - 1, 1); /// O(4 * N)

        while (Q--)
        {
            char com;
            cin >> com;
            if (com == 'C') /// update
            {
                int idx, x, v;
                cin >> idx >> x;
                if (x == 0)v = 0;
                else if (x > 0)v = 1;
                else v = -1;


                idx--;
                update(0, n - 1, 1, idx, v);
            }
            else if (com == 'P') /// query
            {
                int L, R;
                cin >> L >> R;
                L--, R--;
                int qq = query(0, n - 1, 1, L, R);
                char ans;
                if (qq == 0)ans = '0';
                else if (qq > 0)ans = '+';
                else ans = '-';
                cout << ans;
            }
        }
        cout << endl;
    }
    return 0;
}
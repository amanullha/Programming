/*
#include <bits/stdc++.h>
using namespace std;
#define MAX 100005
#define ll long long int
#define left start,(start+end)/2,node+node
#define right (start+end)/2+1,end,node+node+1

struct type
{
    int max_first, max_second;
    type() { max_first = max_second = 0;}
};

int arr[MAX];
type tree[MAX * 4];

void update(int start, int end , int node, int idx, int value)
{
    if (start > idx || end < idx) return ;

    if (start == end && start == idx)
    {
        tree[node].max_first = value;
        return;
    }

    update(left, idx, value);
    update(right, idx, value);

    int boro1 = max(tree[node + node].max_first, tree[node + node + 1].max_first);
    int boro2 = min(tree[node + node].max_first, tree[node + node + 1].max_first);

    tree[node].max_first = boro1;
    tree[node].max_second = max({boro2, tree[node + node].max_second, tree[node + node + 1].max_second});

}

type query(int start, int end, int node, int l, int r)
{
    type a, b, temp;

    if (start > r || end < l)return temp;

    if (start >= l && end <= r)
    {
        return tree[node];
    }


    a = query(left, l, r);
    b = query(right, l, r);


    int boro1 = max(a.max_first, b.max_first);
    int boro2 = min(a.max_first, b.max_first);

    temp.max_first = boro1;
    temp.max_second = max({boro2, a.max_second, b.max_second});

    return temp;
}

int main()
{

    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        update(0, N - 1, 1, i, arr[i]);
    }
    int c = 0;
   // for (int i = 0; i < N; i++)cout << arr[i] << "  ";
    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        a--, b--;


        type x = query(0, N - 1, 1, a, b - 1);




        if (x.max_first == arr[a])c++;


    }

    cout << c << endl;




    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MAX 100005
#define infi -1e18+5
#define left st, (st + en) / 2, nd + nd
#define right (st + en) / 2 + 1, en, nd + nd + 1

ll tree[4 * MAX + 5];
ll arr[MAX + 5];

void build(ll st, ll en, ll nd)
{
    if (st == en)
    {
        tree[nd] = arr[st];
        return;
    }
    build(left); /// left subtree
    build(right); /// right subtree
    tree[nd] = max(tree[nd + nd] , tree[nd + nd + 1]);
}

ll query(ll st, ll en, ll nd, ll L, ll R)
{
    if (L <= st && en <= R) return tree[nd]; /// if the query segment is completely overlapping our tree segment/node.
    if (en < L || R < st) return infi;
    return max(query(left, L, R) , query(right, L, R));
}


int main()
{
    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        
    }
    build(0, N - 1, 1);

    int c = 0;
   // for (int i = 0; i < N; i++)cout << arr[i] << "  ";
    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        a--, b--;


        int x = query(0, N - 1, 1, a, b - 1);




        if (x == arr[a])c++;


    }

    cout << c << endl;







    return 0;
}
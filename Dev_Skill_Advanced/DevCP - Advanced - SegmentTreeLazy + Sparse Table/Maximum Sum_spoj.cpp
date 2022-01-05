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

    int boro1=max(tree[node + node].max_first, tree[node + node + 1].max_first);
    int boro2=min(tree[node + node].max_first, tree[node + node + 1].max_first);

    tree[node].max_first=boro1;
    tree[node].max_second=max({boro2,tree[node + node].max_second, tree[node + node + 1].max_second});

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


    int boro1=max(a.max_first, b.max_first);
    int boro2=min(a.max_first, b.max_first);

    temp.max_first=boro1;
    temp.max_second=max({boro2,a.max_second,b.max_second});

    return temp;
}

int main()
{

    int n;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        update(0, n - 1, 1, i, arr[i]);
    }

    int q;
    cin >> q;
   // getchar();
    while (q--)
    {
        char c;
        int l, r;
        cin >> c >> l >> r;
     //   getchar();
        if (c == 'U')
        {
            update(0, n - 1, 1, l-1, r);
        }
        else
        {
            type x = query(0, n - 1, 1, l-1, r-1);
            cout << x.max_first + x.max_second << endl;
        }
    }


    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD = 998244353;
ll M = 10000007;
#define ff first
#define ss second
#define pb push_back
#define VI vector<long long>
#define pr pair<long long, long long>
#define all(x) (x).begin(), (x).end()
#define endl "\n"
#define dbg(x) cout << #x << " = " << x << endl
#define INF 2e18
#define fio()                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

void solve()
{
    int n, l, r;
    cin >> n >> l >> r;

    map<int, int> ull, urr, ulll;

    for (int i = 0; i < l; i++)
    {
        int x;
        cin >> x;
        ull[x]++;
    }
    for (int i = 0; i < r; i++)
    {
        int x;
        cin >> x;
        urr[x]++;
       
    }
    for(auto xx:urr)
    {
        int x=xx.first;
         if(ull[x])
        {
            int mn=min(ull[x],urr[x]);
            
           
            if(ull[x]==mn)ull.erase(x);
            else ull[x]-=mn;
            if(urr[x]==mn)ull.erase(x);
            else  urr[x]-=mn;
        }
    }


    if (l < r)
    {
        swap(l, r);
        swap(urr, ull);
    }



    bool f = 0;
    int cg = 0;

    int big = (n / 2) - r;

    if (l > r)
    {

        while (big)
        {
            int b=0;
            for (auto x : ull)
            {

                int t1 = x.first;
                int t2 = x.second;
                if (t2 == 1)
                {
                    b++;
                    
                }
                if (t2 > 1)
                {
                    cg++;
                    big--;
                    t2--;
                    ull[t1] = t2;
                    if (urr[t1])
                        urr[t1]++;
                    else
                        urr[t1] = 1;
                }
            }
            if(b==ull.size())
                break;
        }
    }



    if (big)
    {

        int big = n / 2;
        big = big - urr.size();

        for (auto x : ull)
        {

            int t1 = x.first;
            int t2 = x.second;

            ull[t1] = 0;
            if (urr[t1])
                urr[t1]++;
            else
                urr[t1] = 1;
            big--;
            cg++;
            // ull.erase(t1);

            if (big == 0)
                break;
        }
    }


    int p = 0;

    for (auto xx : ull)
    {
        int x1 = xx.first;
        int x2 = xx.second;
        if (!x2)
            continue;

        if (urr[x1])
        {
            //  cout<<x1<<"   "<<abs(urr[x1] - x2)<<endl;
            if (urr[x1] >= x2)
            {
                urr[x1] -= x2;
            }
            else
            {
                int d = abs(urr[x1] - x2);
                p += d;
            }
        }
        else
        {
            //  cout<<"\n niche x1  "<<x1<<"   x2  "<<x2<<"  \n";
            p += x2;
        }
    }
  //  cout << endl
   //      << "Ans  ";
    cout << p + cg << endl;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    fio();
    ll t;
    cin >> t;
    for (int it = 1; it <= t; it++)
    {
        //cout << "Case" << it << ": ";
        solve();
    }
    return 0;
}

*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD = 998244353;
ll M = 10000007;
#define ff first
#define ss second
#define pb push_back
#define VI vector<long long>
#define pr pair<long long, long long>
#define all(x) (x).begin(), (x).end()
#define endl "\n"
#define dbg(x) cout << #x << " = " << x << endl
#define INF 2e18
#define fio()                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

void solve()
{

    int n, l, r;
    cin >> n >> l >> r;

    vector<int> hl(n + 1, 0), hr(n + 1, 0);

    for (int i = 0; i < l; i++)
    {
        int x;
        cin >> x;
        hl[x]++;
    }

    for (int i = 0; i < r; i++)
    {
        int x;
        cin >> x;
        hr[x]++;
    }
/*
    cout << "l " << endl;
    for (int i = 0; i <= n; i++)
        if (hl[i])
            cout << i << " ";
    cout << endl;
    for (int i = 0; i <= n; i++)
        if (hr[i])
            cout << i << " ";
    cout << endl;
*/
    for (int i = 0; i <= n; i++)
    {
        int mm = min(hl[i], hr[i]);
        if (mm)
        {
           // cout << "mathch " << i << "  hl " << hl[i] << "   hr " << hr[i] << endl;
            hl[i] -= mm;
            hr[i] -= mm;
            l -= mm;
            r -= mm;
        }
    }
    int cost = 0;
    if (l > r)
    {

        int big = n / 2 - r;
        for (int i = 0; i <= n; i++)
        {
            if (hl[i] <= 1)
                continue;
            else
            {
                int x;
                if (hl[i] & 1)
                    x = hl[i] - 1;
                else
                    x = hl[i];
                if (x / 2 == big)
                {
                    cost += big;
                    hl[i] -= x;
                    l -= x;
                    // r += x;
                }
                else if (x / 2 > big)
                {
                    cost += big;
                    hl[i] -= (big + big);
                    l -= (big + big);
                    // r += (big + big);
                }
                else
                {
                    big -= (x / 2);
                    l -= (x / 2);
                    //r += (x / 2);
                    cost += (x / 2);
                    hl[i] = 0;
                }
                if (big == 0)
                    break;
            }
        }
    }

    if (l < r)
    {
       // cout << " l " << l << " r " << r << endl;
        int big = (n / 2) - l;
        for (int i = 0; i <= n; i++)
        {
            if (hr[i] <= 1)
                continue;
            else
            {
                int x;

                if (hr[i] && hr[i] & 1)
                    x = hr[i] - 1;
                else
                    x = hr[i];

                if (x / 2 == big)
                {
                   // cout << "1aman" << endl;

                    cost += big;
                    hr[i] -= x;
                    // l += x;
                    r -= x;
                }
                else if (x / 2 > big)
                {
                   // cout << "2aman" << endl;
                    cost += big;
                    hr[i] -= (big + big);
                    // l += (big + big);
                    r -= (big + big);
                }
                else
                {
                    //cout << "x " << x << " big " << big << endl;
                  //  cout << "3aman" << endl;
                    big -= (x / 2);
                    // l -= (x / 2);
                    r -= x;
                    cost += (x / 2);
                    hr[i] = 0;
                }
                if (big == 0)
                    break;
            }
        }
    }
  //  cout << l << " " << r << endl;
    //cout << "\nans : ";
    int nn = min(l, r);
    int nnn = max(l, r);
    cout << cost + abs(nn - nnn) + nn << endl;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    fio();
    ll t;
    cin >> t;
    for (int it = 1; it <= t; it++)
    {
        //cout << "Case" << it << ": ";
        solve();
    }
    return 0;
}
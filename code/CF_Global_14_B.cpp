#include <bits/stdc++.h>
#define ll long long
#define M 1000000000
using namespace std;
#define all(x) (x).begin(), (x).end()

void solve()
{
    ll n;
    cin >> n;
    if(n<=1 && n&1)
    {
        cout<<"NO"<<endl;
        return ;
    }
    if(n==2 ||n==4)
    {
        cout<<"YES"<<endl;
        return ;
    }
   
    ll x = sqrtl(n/2);
    ll y = sqrtl(n/4);
    if (n%2==0 and x * x == n/2 || n%4==0 and y*y==n/4)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
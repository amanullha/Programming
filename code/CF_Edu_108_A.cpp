#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
   ll a,b,d;
   cin>>a>>b>>d;
   if(a==b)
   {

       cout<<"YES"<<endl;
       return ;
   }
   if(a>b)swap(a,b);

   while(a--)
   {
       int x=d+1;
       b-=x;
   }
   if(b<=0)
   cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
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
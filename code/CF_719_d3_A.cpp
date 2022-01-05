#include <bits/stdc++.h>
using namespace std;

void solve()
{
   int n;
   cin>>n;
   string s;
   cin>>s;
   unordered_map<char,bool>un;
  for(int i=0;i<s.size();i++)
  {
      if(un.find(s[i])!=un.end() && s[i]!=s[i-1])
      {
          cout<<"NO"<<endl;
          return ;
      }
      else un[s[i]]=true;
  }
  cout<<"YES"<<endl;

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
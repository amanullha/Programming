#include <bits/stdc++.h>
using namespace std;
int main() {
  int t,tc=1;
  cin>>t;
  while(t--)
  {
    cout<<"Case "<<tc++<<":\n";
    string s;
    cin>>s;
    int n=s.size();
    int q;
    cin>>q;
    while(q)
    {
      char dis;
      int l,r;
      cin>>dis;
      if(dis=='I')
      {
        cin>>l>>r;
        l--,r--;
        for(int i=l;i<=r;i++)
        {
          if(s[i]=='1')s[i]='0';
          else s[i]='1';
        }
      }
      else
      {
        cin>>l;
        l--;
        cout<<s[l]<<endl;
      }
    }
  }
}
/*
0011001100
6
I 1 10
I 2 7
Q 2
Q 1
Q 7
Q 5
*/
#include<bits/stdc++.h>
using namespace std;
int xx=1;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
  
     cout<<"Case #"<<xx++<<":";
    int pre;
  
    for(int i=0;i<n;i++)
    {
        if(i==0)pre=1;
        else if(s[i]>s[i-1]) pre++;
             
        else  pre=1;
        
        cout<<" "<<pre;
        
    }
cout<<endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

int t;
cin>>t;
for(int tt=1;tt<=t;tt++)
{
    solve();
}
    
return 0;
}

/*
Case #1: 1 2 1 2
Case #2: 1 2 1 2 3 1

*/
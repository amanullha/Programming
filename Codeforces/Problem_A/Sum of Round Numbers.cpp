#include<bits/stdc++.h>
#include<string>
#define ll long long
using namespace std;

void solve()
{

    string s,cp="",ans="";
    cin>>s;
    int st=s.size()-1;
    int c=0;
    vector<string>v;
    for(int i=st;i>=0;i--)
    {

        if(s[i]!='0')
        {
        c++;
        cp=s[i];
       // cout<<cp<<endl;
        for(int j=1;j<=st-i;j++)cp+='0';
        //cp+=(st-i);
       // cout<<cp<<endl<<endl;
        ans+=cp+" ";
        v.push_back(cp);

        }
    }
    cout<<c<<endl;
    cout<<ans<<endl;
   // for(string ss:v)cout<<ss<<" " ;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}

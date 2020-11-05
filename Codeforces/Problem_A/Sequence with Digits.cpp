#include <bits/stdc++.h>
#include <iostream>   // std::cout
#include <string>     // std::string, std::to_string
#include<string>
#define ll long long
using namespace std;

void solve()
{

    ll n,k;
    // string s;
    cin>>n>>k;

    for(int i=2; i<=k; i++)
    {
        string s = to_string(n);

        char x=s[0];
        char y=s[0];
        for(int i=1; i<s.size(); i++)
        {
            if(x<s[i])
                x=s[i];
            if(y>s[i])
                y=s[i];
        }
       // cout<<"x : "<<x<<"  Y  : "<<y<<endl;
        int minn=y-48;
        int maxx=x-48;
        if(minn==0 || maxx==0)
            break;
        //cout<<maxx<<"   "<<minn<<"  g  "<<minn*maxx<<endl;
        n=n+(minn*maxx);


    }
    cout<<n<<endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}

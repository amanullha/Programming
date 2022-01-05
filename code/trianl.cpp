#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{ int a,b,c;
    cin>>a>>b>>c;
    bool f=1;
    if(a+b>c)f=f&1;
    else if(a+c>b)f=f&1;
    else if(b+c>a)f=f&1;

    cout<<"f "<<f<<endl;
}

    return 0;
}

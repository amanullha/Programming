#include<bits/stdc++.h>
#define ull unsigned long long int

using namespace std;
int tt=1;
void solve()
{

ull n,k;
cin>>n>>k;

ull ans=1;


for(ull i=1;i<=k;i++)
{
cout<<"Case "<<tt++<<": ";
    ans=ans*n*n;
    ans/=i;
    n--;
}

cout<<ans<<endl;


}

int main()
{

    int t;
    cin>>t;
    while(t--)solve();

    return 0;

}

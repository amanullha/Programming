#include<bits/stdc++.h>
#define M 10002
using namespace std;
bool dig(int n)
{
    int ans=0;
    while(n>9)
    {
        ans+=n%10;
        n/=10;
    }
    ans+=n;
    if(ans==10)return true;
    else return false;
}



int main()
{
    vector<int>v(M);
    int k=1;
    for(int i=18; ; i++)
    {
        if(dig(i))v[k++]=i;
        if(k==M)break;
    }
    int n;
    cin>>n;
    cout<<v[n]<<endl;

   // for(int i=0; i<v.size(); i++)
    //    cout<<i+1<<"  :   "<<v[i]<<endl;

    return 0;
}

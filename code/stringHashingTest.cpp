#include<bits/stdc++.h>
#define MOD 1000000007
#define base 31
#define ll long long int
using namespace std;

vector<ll>hashVal;
vector<ll>powerOfBase;

void stringHash(string s)
{

    hashVal[0]=s[0]-'a'+1;

    powerOfBase[0]=1;
    for(int i=1; i<s.size(); i++)
    {
        int x=s[i]-'a'+1;
        hashVal[i]=((hashVal[i-1]*base)+x)%MOD;

        powerOfBase[i]=(powerOfBase[i-1]*base)%MOD;
    }
}


ll getSubStrHash(ll L,ll R)
{
    ll subHash=hashVal[R];

    if(L>0)subHash=(subHash-((hashVal[L-1]*powerOfBase[R-L+1])%MOD)+MOD)%MOD;

    return subHash;
}


ll subStringHash(string s)
{
    ll hashCount=0;
    for(char c:s)
    {
        hashCount=((hashCount*base)+c-'a'+1)%MOD;
    }
    return hashCount;
}



int main()
{
    cout<<'l'-'a'<<endl;
    string str="hello";
    string st="ll";
    int n=str.size();

    //cout<<"subStrHash: "<<subStringHash("ll")<<endl;

    hashVal.assign(n+5,0);
    powerOfBase.assign(n+5,1);

    stringHash(str);

    ll y=subStringHash(st);
    cout<<"res "<<getSubStrHash(2,3)<<endl;

    cout<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<hashVal[i]<<"  ";
    }
    cout<<endl;

    for(int i=0; i<=n-st.size(); i++)
    {

        long long x=getSubStrHash(i,i+st.size()-1);
        cout<<y<<" : "<<x<<endl;
        if(y==x)
        {
            return i;
        }
    }



    return 0;

}

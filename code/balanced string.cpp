#include<bits/stdc++.h>
using namespace std;

int MaxAmountofSplitBalancedStrings(string s)
{
    char x=s[0];
    int start=0;
    int c=0;
    for(int i=0; i<s.size(); i++)
    {

        if(s[i]==x)start++;
        else start--;
        if(!start)c++;
    }
    return c;
}

int main()
{
    while(1){
        string s;
        cin>>s;
        cout<<MaxAmountofSplitBalancedStrings(s)<<endl;
    }

    return 0;
}

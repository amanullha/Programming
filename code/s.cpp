#include<bits/stdc++.h>
using namespace std;
int main()
{
    ///  a b c d
    ///  0 1 2 3


    string str;
    cin>>str;
    int size=str.size();

    for(int i=0; i<size; i++)
    {
        cout<<endl<<"for " <<str[i]<<"   : ";
        for(int len=1; len<=size-i; len++)
        {

          cout<<substr(i,len)<<endl;
        }
    }



    return 0;
}

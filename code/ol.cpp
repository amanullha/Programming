#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string NumberEncoding(string str)
{

    string ans="";

    for(char x:str)
    {

        int decimalValue=(int)x;

        if(decimalValue>=97 && decimalValue<=122)
        {

            decimalValue-=96;
            ans+=to_string(decimalValue);
        }
        else
        {
            ans+=x;
        }

    }

    // code goes here
    return ans;

}

int main(void)
{
    while(1)
    {

        string a;
        getline(cin,a);
        cout<<NumberEncoding(a)<<endl;
    }
    return 0;

}

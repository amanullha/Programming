#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;


    stack<char>q;
    stack<char>qq;

    {
        for(int i=0; i<s.size(); i++)
        {        char c=s[i];
        if(s[i]!='#')q.push(c);
        else q.pop();
        }

    }
     {
        for(int i=0; i<t.size(); i++)
        {
        char c=t[i];
        if(t[i]!='#')qq.push(c);
        else qq.pop();
        }

    }if (q != qq) return false;
    else true;

    //cout<<q==qq;
   // if(q==qq)return true;
    //else return false;
    //cout<< q.size_type();



    return 0;
}

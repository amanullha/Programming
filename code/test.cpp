#include<bits/stdc++.h>
using namespace std;

void r(vector<int>&v,int l,int r)
{

    int last=v[r];

    for(int i=r; i>0; i--)
    {

        v[i]=v[i-1];
    }

    v[0]=last;


}


void f(vector<int>&v)
{

    for(int i=0; i<v.size(); i++)
    {

        if(!v[i])
        {

            r(v,0,i);
        }

    }

    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl<<endl;
}


int main()
{

    while(1)
    {

        int n;
        cin>>n;
        vector<int>v;
        while(n--)
        {
            int x;
            cin>>x;
            v.push_back(x);

            f(v);
        }


    }


    return 0;


}

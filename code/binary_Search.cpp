#include<bits/stdc++.h>
using namespace std;


int binary_src(vector<int>&v,int src)
{
    int n=v.size();
    int l=0,r=n-1;
    int cholbe=100;
    int mid;
    while(cholbe--)
    {

        mid=(l+r)/2;
        if(v[mid]>=src)

            r=mid;

        else l=mid;
    }
    return l;
}

int main()
{

    vector<int>v= {1,2,4,6,9,10,11,12,15,16,20};




    int src=11;


    cout<<"index of "<<src<<" is : "<<binary_src(v,src)<<endl;

    return 0;

}

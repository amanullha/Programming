#include<bits/stdc++.h>
using namespace std;


void Marge(vector<int>&v,int l,int mid,int r)
{

    int tot_size=r-l+1;


    vector<int>temp;

    int i=l;
    int j=mid+1;


    while(i<=mid && j<=r)
    {
        if(v[i]<v[j])temp.push_back(v[i++]);
        else temp.push_back(v[j++]);
    }

    while(i<=mid)temp.push_back(v[i++]);
    while(j<=r)temp.push_back(v[j++]);

    int idx=0;
    for(int k=l; k<=r; k++)
    {
        v[k]=temp[idx++];
    }


}



void Marge_sort(vector<int>&v,int l,int r)
{
    if(l>=r)return;

    int mid=(l+r)/2;

    Marge_sort(v,l,mid);
    Marge_sort(v,mid+1,r);

    Marge(v,l,mid,r);

}



int main()
{

    vector<int>v= {21,6,2,8,3,4,9,7,5,11,2,55};
    int n=v.size();
    cout<<"Before sorting" <<endl;
    for(int i:v)cout<<i<<", ";

    Marge_sort(v,0,n-1);

    cout<<"\n\nAfter sorting" <<endl;
    for(int i:v)cout<<i<<", ";

    return 0;

}

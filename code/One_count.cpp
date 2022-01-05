#include<bits/stdc++.h>
using namespace std;

int one_count(int n)
{
    string s="";
    s+=to_string(n);

    int c=0;
    for(char x:s)if(x=='1')c++;
    return c;
}


int main()
{

int n=1000000001;
int sum=0;
int s=0;
int t=0;
for(int i=0;i<n;i++)
{
    sum+=one_count(i);
    if(to_string(i).size()!=s)
    {
    cout<<i<<" : "<<sum<<"   ->  "<<sum-t<<endl;
    t=sum;
    s=to_string(i).size();
    }

}


    return 0;
}

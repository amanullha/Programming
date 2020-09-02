#include <bits/stdc++.h>

using namespace std;
int d[10000];
void div(int n)
{//cout<<"  N  "<<n<<endl;
 d[n]++;
    for(int i=2; i*i<=n; i++)
    {


        if(n%i==0){//cout<<i<<"  ";
            d[i]++;}

    }
    //cout<<endl;


}

int main()
{
    int n;
    cin>>n;
    int a[n];
    int g;
    int m=-1000000;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        div(a[i]);
        if(m<a[i])
            m=a[i];

    }
//for(int i=0; i<m; i++)cout<<d[i]<<"   ";
    for(int i=0; i<m; i++)
    {
        if(d[i]==n-1){cout<<endl<<"i   "<<i;break;}
    }
    return 0;
}



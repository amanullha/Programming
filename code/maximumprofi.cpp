#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nn;
    cin>>nn;
    int a[nn];
    for(int i=0; i<nn; i++)
    {
        cin>>a[i];
    }
    int p=0,m=0,n=0,k=0;

    for(int i=1; i<nn; i++)
    {
        if(a[i]>a[m])
            m=i;
        else if(a[i]<a[m])
        {


            int d=a[m]-a[n];

            p+=d;
            m=n=i;
        }


        cout<<"m :"<<m<<"  n  :"<<n<<endl;
        cout<<"am :"<<a[m]<<"  an  :"<<a[n]<<endl;
        cout<<"p  :"<<p<<endl;
    }
  if(a[nn-1]>a[nn-2])p+=a[m]-a[n];
    cout<<endl<<"p  :"<<p<<endl;


    return 0;
}

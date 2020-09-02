#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        int f=1, g=a[0];
        for(int i=1; i<n ; i++)
        {
            g=__gcd(g,a[i]);
            if(g>1)
            {
                f=0;
                break;
            }

        }
        if(f==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}

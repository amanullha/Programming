#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {


        int n,k;
        cin>>n;
        cin>>k;
        vector<int>v(n);

        for(int &x:v)cin>>x;
        int c=0;

        for(int i=0; i<n; i++)
        {
            int sum=0;
            for(int j=i; j<n; j++)
            {
                sum+=v[j];
                if(sum<k and sum){
                   // cout<<"i "<<i<<" j "<<j<<" sum "<<sum<<endl;
                    c++;
                }

            }

        }
        cout<<c<<endl;
    }


    return 0;
}

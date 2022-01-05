#include<bits/stdc++.h>
using namespace std;

/// Time complexity : sqrt(N)
void check_prime(int n)
{
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            cout<<"\nNot Prime"<<endl;
            return ;
        }
    }
    cout<<"\nPrime"<<endl;

}

int main()
{
cout<<sqrt(8)<<endl;
    cout<<"Enter Number : ";
    int n;
    cin>>n;
    check_prime(n);


    return 0;
}

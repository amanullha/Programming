#include<bits/stdc++.h>
using namespace std;
bitset<100000>isp;
voids()
{
    isp.reset();
    for(int i=2; i*i<+100000; i++)
    {
        if(!isp[i])
        {
            for(int j=i+i; j<=100000; j+=i)
                isp[j]=1;
        }
    }
    isp[1]=1;
}

int main()
{
    long long n,m,c=0;
    cin>>n>>m;
    if(n%2==0)
        n+=1;

    for(long long i=n; i+2<=m; i+=2)
    {
        if(p(i)==1&&p(i+2)==1)
            c++;
    }
    cout<<c;




}

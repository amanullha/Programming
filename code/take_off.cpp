#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t,n,p,h,c;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d%d%d%d",&n,&p,&h,&c);
        int pp=n*3;
        int hh=n*3;
        int cc=n/7;

        if(p>=pp && h>=hh && c>=cc)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}

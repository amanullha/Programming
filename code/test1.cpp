#include<bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

using namespace std;

int main()
{
 srand(time(0));
    vector<int>n= {1,2,10000,9999};
    vector<int>p= {0,1,30000,29999};
    vector<int>h= {0,1,30000,29999};
    vector<int>c= {0,1,30000,29999};


int t=0;

    for(int i:n)
    {
        for(int j:c)
        {
        int pp=2+rand()%29999;
        int q=2+rand()%29999;

      cout<<i<<" "<<pp<<" "<<q<<" "<<j<<endl;


            /*for(int p:h)
            {
                for(int q:c)
                {
                t++;
                cout<<i<<" "<<j<<" "<<p<<" "<<q<<endl;
                }
            }*/
        }
    }

    cout<<endl<<t<<endl;
    return 0;
}

#include<bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main()
 {
  int values[100];
  int a;
scanf("%d", &a);

  for(int i = 0; i < a; i++) {
     scanf("%d", &values[i]);
  }

  for(int i = 0; i < a; i++)
    {
        if(values[i]%5==0)
        {
            printf("%d\n", values[i]);
        }
        else
        if (values[i]%5==4)
        {
            values[i]=values[i]+1;
            printf("%d\n", values[i]);
        }
        if (values[i]%5==3)
        {
             values[i]=values[i]+2;
            printf("%d\n", values[i]);
        }
         if (values[i]%5==2)
        {
             values[i]=values[i]+3;
            printf("%d\n", values[i]);
        }
         if (values[i]%5==1)
        {
             values[i]=values[i]+4;
            printf("%d\n", values[i]);
        }

        






  }
  return 0;
}
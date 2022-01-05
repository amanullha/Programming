#include <stdio.h>

int main(){

float a,b;
    for( a=0;a<=2.1;a+=0.2)
    {
        for( b=1;b<=3;b++)
        {
            printf("I=%.1f J=%.1f\n",a,a+b);
        // cout << "I=" << a << " " << "J=" << a+b << "\n";

        }
    }

    return 0;
}

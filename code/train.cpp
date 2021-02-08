#include <iostream>
using namespace std;
int main(){


    for(float a=0;a<=2.1;a+=0.2)
    {
        for(float b=1;b<=3;b++)
        {
         cout << "I=" << a << " " << "J=" << a+b << "\n";

        }
    }


   /*

    float i = 0;
    float j = 1;
    while(i <= 2.1){
            cout << "I=" << i << " " << "J=" << j+i << "\n";
            cout << "I=" << i << " " << "J=" << j+1+i << "\n";
            cout << "I=" << i << " " << "J=" << j+2+i << "\n";
            i+= 0.2;

    } */
    return 0;
}

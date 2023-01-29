#include <iostream>

using namespace std;

int main()
{

    int h,m,s,n,x;
    double a,b,c;

    for(int i=1; i<70; i++)
    {
        n=i;
        x=i;


        h = n / 3600.0;
        //cout<<"h: "<<h<<endl;
        a = (n / 3600.0) - h;
        //cout<<"a: "<<a<<endl;
        b = a * 3600.0;
        //cout<<"b: "<<b<<endl;
        m = b / 60.0;
        //cout<<"m: "<<m<<endl;
        c = (b / 60.0) - m;
        //cout<<"c: "<<c<<endl;
        s = c * 60.0;
        //cout<<"s: "<<s<<endl;

//    printf("%d:%d:%d\n",h,m,s);


        int sum=(h*60)+(m*60)+s;
        if(sum!=x)
        {
             printf("\n\n%d:%d:%d\n",h,m,s);
            cout<<x<<"  : "<<sum<<endl;
        }
    }


        return 0;
    }

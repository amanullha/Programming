#include<bits/stdc++.h>
using namespace std;



int main()
{

    while(1)
    {



        string str,ans="";
        cin>>str;

        float weight=std::stof(str);

        float remainder;
        int whole;


        whole = weight / 1;



        remainder = weight - whole;
        if (remainder < 0.5)
            if (remainder >= 0.25)
                remainder = 0.5;
            else
                remainder = 0.0;
        else if (remainder >= 0.75)
            remainder = 1.0;
        else
            remainder = 0.5;



        if(!whole)
        {

            if(remainder==0.0)ans+="empty ";
            else if(remainder==0.5)ans+="half ";
            else ans+="full ";
            for(int i=1; i<=4; i++)ans+="empty ";
        }
        else
        {
            int baki=whole+1;

            for(int i=1; i<=whole; i++)ans+="full ";

            if(remainder==0.0 && baki<=5)ans+="empty ";
            else if(remainder==0.5 && baki<=5)ans+="half ";
            else if(remainder==1.0 && baki<=5) ans+="full ";



            while(baki<5)
            {
                ans+="empty ";
                baki++;
            }



        }



        cout<<ans<<endl;


    }



    return 0;
}








/**





#include<bits/stdc++.h>
using namespace std;



int main()
{

    string str;
    cin>>str;

    int p=1;
    long long decimal=0;

    for(int i=str.size()-1; i>=0; i--)
    {

        char x=str[i];

        if(x=='1')decimal+=p;
        p=p<<1;

    }


    cout<<decimal<<endl;


    return 0;

}








*/








/**

#include<bits/stdc++.h>
using namespace std;
int n=10004;


vector<int> seive()
{



    vector<bool> is_prime(n+1, true);

    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= n; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
    vector<int>primes;

    for(int i=0; i<=n; i++)
    {

        if(is_prime[i])primes.push_back(i);
    }
return primes;
}


int main()
{

vector<int>primes=seive();

while(1){
    int x;
    cin>>x;
    cout<<primes[x-1]<<endl;
}

    return 0;

}









*/














/**



#include<bits/stdc++.h>
using namespace std;


int FindGreatestCommonFactor(vector<int>v)
{

    if(v[0]>v[1])
    {
        int temp=v[1];
        v[1]=v[0];
        v[0]=temp;
    }

    int GCF=1;

    for(int i=2; i<=v[1]; i++)
    {

        if(v[0]%i==0 && v[1]%i==0)GCF=i;
    }

    return GCF;


}



int FindGreatestCommonFactor2 (vector<int>v)
{


    while (v[1])
    {
        v[0] %= v[1];
        swap(v[0], v[1]);
    }
    return v[0];

}



int main()
{

    while(1)
    {
        vector<int>v(2);
        cin>>v[0]>>v[1];

        printf("%d \n",FindGreatestCommonFactor(v));
        printf("%d \n\n",FindGreatestCommonFactor2(v));
    }

    return 0;

}





*/





















/**
#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s;


    getline(cin,s);

    cout<<s<<endl<<endl;



    for(char &x:s)
    {

        if(!((x>='a' && x<='z') || (x>='A' && x<='Z') ))continue;

        int p=(int)x;
        p+=1;
        p%=123;
        if(!p)p+=97;

        if(p==97 || p==101 || p==105 || p==111 || p==117)
        {
            p-=32;
        }

        char c=(char)p;
        x=c;



    }
    cout<<s<<endl;

    return 0;

}




*/

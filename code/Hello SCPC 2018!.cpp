#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("hello.in","r",stdin);
    int arr[12];
    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < 12 ; i++)
        {
            cin >> arr[i];
        }


        int i = 0;
        bool f = 0, q = 0;
        if (arr[i] < arr[i + 1] &&  arr[i + 1] < arr[i + 2] && arr[i + 2] < arr[i + 3])f = 1;

        int m=arr[0];
        for (int i = 1; i < 4; i++)if(arr[i]>m)m=arr[i];

        for (int i = 4; i < 11; i++)
        {
            if (arr[i] > m)q = 1;
        }
        if (f & q)
            cout << "yes" << endl;
        else
            cout << "no" << endl;

    }
    return 0;
}
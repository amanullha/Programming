#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n < 10)
    {
        cout << n << endl;
        return;
    }
    if (n == 10)
    {
        cout << n - 1 << endl;
        return;
    }
    if (n == 11)
    {
        cout << "10" << endl;
        return;
    }
    else
    {
        string str = to_string(n);
        int szz = str.size();

        int ans = (szz - 1) * 9;
        
        char a = str[0];
        int ii=(int)a;
        ans+=(ii-49);
        string cp="";
        while (szz--)
        {
           cp+=a;
        }
        if(str>=cp)ans++;

        cout<<ans<<endl;



    }
}

int main()
{

    int t;
    cin >> t;
    while (t--)

        solve();

    return 0;
}

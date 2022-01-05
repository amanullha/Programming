#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



void call()
{

    int n;
    cin >> n;
    double big = INT_MIN;
    double tot = 0;
    int by = n - 1;
    while (n--)
    {
        double x;
        cin >> x;
        tot += x;
        big = max(big, x);
    }
    cout << fixed << setprecision(9);
    cout << double(big + (tot - big) / by) << endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        call();


    }
    return 0;
}

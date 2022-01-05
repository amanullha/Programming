#include <bits / stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i] == '0')
            continue;

        if (a[i] == '0')
        {
            ans += 1;

            continue;
        }
        if (i - 1 >= 0 and a[i - 1] == '1')
        {
            //cout << i << endl;
            ans += 1;
            a[i - 1] = '2';
            continue;
        }
        if (i + 1 < n and a[i + 1] == '1')
        {
            ans += 1;
            a[i + 1] = '2';
            continue;
        }
    }
    cout << ans << endl;
}

int main()
{

    ll t;
    cin >> t;
    while (t--)

    {
        solve();
    }
    return 0;
}

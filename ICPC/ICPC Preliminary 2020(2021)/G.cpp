#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    //fast_io;

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<string> str(n);
        for (int i = 0; i < n; i++)
            cin >> str[i];

        string chk;
        cin >> chk;

        sort(str.begin(), str.end(), greater<>());
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == chk)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1) cout << 1 << endl;
        else
        {
            int c = 0, sum = 0;
            set<string> res;
            for (int i = 0; i < chk.size(); i++)
            {
                for (int len = 1; len <= chk.size() - i; len++)
                    res.insert(chk.substr(i, len));
            }

            for (auto i : res)
            {
                for (int j = 0; j < str.size(); j++)
                {
                    if (i == str[j])
                    {
                        c++;
                        sum += i.size();
                        break;
                    }
                }
            }
            
            if (sum == chk.size()) cout << c << endl;
            else cout << "impossible" << endl;
        }
    }

    return 0;
}
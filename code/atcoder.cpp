#include <iostream>
#include <vector>
#include <unordered_map>

//#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD = 998244353;
ll M = 1000005;
#define ff first
#define ss second
#define pb push_back
#define VI vector<char>
#define pr pair<long long, long long>
#define all(x) (x).begin(), (x).end()
#define endl "\n"
#define dbg(x) cout << #x << " = " << x << endl
#define INF 2e18
#define fio()                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

unordered_map<string, string> un;

void pre()
{
    un["BR"] = 'W';
    un["RB"] = 'W';
    un["BW"] = 'R';
    un["WB"] = 'R';
    un["WR"] = 'B';
    un["RW"] = 'B';
    un["BB"] = 'B';
    un["RR"] = 'R';
    un["WW"] = 'W';
}

string cal(string s)
{
    if (un.find(s) != un.end())
        return un[s];
    else
    {
        ll size = s.size();
        if (size % 2 == 0)
        {
            ll hf = size / 2;

            string s1 = s.substr(0, hf);
            string s2 = s.substr(hf - 1, 2);
            string s3 = s.substr(hf, hf);

            un[s1] = cal(s1);
            un[s2] = cal(s2);
            un[s3] = cal(s3);
/*
            cout << endl
                 << "even" << endl;
            cout << s1 << " : " << un[s1] << endl;
            cout << s2 << " : " << un[s2] << endl;
            cout << s3 << " : " << un[s3] << endl;
*/
            return un[s1 + s2 + s2] = un[s1] + un[s2] + un[s3];
        }
        else
        {
            ll hf = size / 2;

            string s1 = s.substr(0, hf + 1);
            string s2 = s.substr(hf, hf + 1);

            un[s1] = cal(s1);
            un[s2] = cal(s2);
          /*
            cout << endl
                 << "odd" << endl;
            cout << s1 << " : " << un[s1] << endl;
            cout << s2 << " : " << un[s2] << endl;
*/
            return un[s1 + s2] = un[s1] + un[s2];
        }
    }
}

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    while (s.size() != 1)
    {
        s = cal(s);
    }
    cout << s << endl;
   // cout << "\n\nans : " << s << endl;
  //  cout << endl
  //       << endl;
   // for (auto x : un)
    //    cout << x.first << " : " << x.second << endl;
   // cout << endl
     //    << endl;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    fio();
    pre();
  
        solve();

    return 0;
}
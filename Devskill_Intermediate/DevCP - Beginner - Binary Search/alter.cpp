#include <bits/stdc++.h>
using namespace std;
string s;
int n;

int main()
{
    cin >> n >> s;
    vector<int> v((int)s.size(), 0);

    v[0] = s[0] - '0';
    for (int i = 1; i <(int)s.size(); i++)
    {
        v[i] = v[i-1] + (s[i] - '0');
    }
    for(int i=0;i<(int)v.size();i++)
    {
        cout<<i<<"  "<<v[i]<<endl;
    }

    return 0;
}
/*
0  1
1  1
2  2
3  2
4  3
5  3
*/
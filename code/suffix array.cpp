#include<bits/stdc++.h>
using namespace std;
vector< pair<string, int> >v;
int main()
{
    string s = "mississippi";
    for (int i = 0; i < s.size(); i++)
    {
        v.push_back({s.substr(i), i});
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    cout<<endl;
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].second << " " << v[i].first << endl;
    }
    return 0;
}
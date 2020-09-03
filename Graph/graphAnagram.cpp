#include<bits/stdc++.h>
#include<map>
using namespace std;
int main()

{
    vector<string>strs;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string p;
        cin>>p;
        strs.push_back(p);
    }


    unordered_map<string,vector<string>>ump;

    for(string x:strs)
    {
    string t=x;
    sort(t.begin(),t.end());
    ump[t].push_back(x);

    }
     vector<vector<string>> anagrams;
        for (auto p : ump) {
            anagrams.push_back(p.second);
        }
         for (auto p : ump) {
            cout<<"   "<<p.second<<endl;


    return 0;
}

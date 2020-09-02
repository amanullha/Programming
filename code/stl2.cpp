#include<bits/stdc++.h>
#include<utility>
using namespace std;
int main()
{
    vector<int>v= {1,3,5,8,9,12};

auto it=upper_bound(v.begin(),v.end(),8);

cout<<*it<<endl;
cout<<distance(v.begin(),it);

        return 0;
}

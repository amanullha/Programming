#include<bits/stdc++.h>
using namespace std;
vector<int>stones;
int main()
{
int n;
cin>>n;
for(int i=0;i<n;i++)
{
int x;
cin>>x;
stones.push_back(x);
}
make_heap(stones.begin(), stones.end());

cout<<endl<<endl;
for(int x : stones)cout<<x<<"    ";

push_heap(stones.begin(),stones.end());

cout<<endl<<endl;
for(int x : stones)cout<<x<<"    ";

pop_heap(stones.begin(),stones.end());

cout<<endl<<endl;
for(int x : stones)cout<<x<<"    ";

    return 0;
}

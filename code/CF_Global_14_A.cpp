#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    int mn=INT_MAX;
    int tot=0;

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        mn=min(mn,v[i]);
        tot+=v[i];
    }
    if(tot==k)
    {
        cout<<"NO"<<endl;
        return ;
    }
    if(mn>k || tot<k)
    {
        cout<<"YES"<<endl;
        for(int x:v)cout<<x<<" ";
        cout<<endl;
        return ;
    }
    if(mn==k)
    {
        cout<<"YES"<<endl;
        for(int x:v)if(x!=mn)cout<<x<<" ";
        cout<<mn<<" ";
        cout<<endl;
        return ;

    }
    int sum=0;
    sort(v.rbegin(), v.rend());

    vector<int> ans1, ans2;

    for (int i = 0; i < n; i++)
    {
        if (sum + v[i] == k)
        {
            ans1.push_back(v[i]);
        }
        else
        {
            sum += v[i];
            ans2.push_back(v[i]);
        }
    }

    // 6,8
    // 1,7,2,6,3,9
   /// ans1=1,7,2,6
  // ans2=3,9,
  // 3,9,1,7,2,6
  // 3,12,13

    cout << "YES" << endl;
    for (int x : ans2)
        cout << x << " ";

    for (int x : ans1)
        cout << x << " ";
        cout<<endl;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
#include <bits/stdc++.h>
#define pr                        pair<int,string>

using namespace std;

bool camp(pr a,pr b)
{
    return a.second>b.second;
}

void solve()
{

    int n, d, k;
    cin >> n >> d >> k;
  vector<pr>v;
  int tot=0;
    for (int i = 0; i < n; i++)
    {
        string name,salary;
        cin>>name>>salary;
        v.push_back({salary,name});
        tot+=salary;
    }
    if (tot < d)
    {
        cout << "impossible\n";
        return;
    }

    sort(all(v),camp);
    cout<<k<<endl;
    for(int i=0;i<k;i++)
    {
        cout<<v[i].first<<", YOU ARE FIRED!"
    }


}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    solve();

    return 0;
}








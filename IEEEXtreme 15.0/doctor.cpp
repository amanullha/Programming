#include <bits/stdc++.h>
#define pr pair<int,int>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 

bool ola(pr a,pr b)
{
    return a.second<b.second;
}
bool comp(pr a, pr b)
{
	if (a.first < b.first)return true;
	else if (a.first > b.first)return false;
	else
	{
		if (a.second < b.second)return true;
		else return false;
	}

}
void solve()
{
    int n;
        cin >> n;

        unordered_map<int,bool>un;
        vector<pr>v;
        for (int i = 0; i < n; i++) 
        {
            int l, r;
            cin >> l >> r;
            v.push_back({l,r});
            
        }

        sort(v.begin(),v.end(),comp);
        vector<pr>ans;

        for(int i=0;i<v.size();i++)
        {
            pr x=v[i];

            for(int l=x.first;l<=x.second;l++)
            {
                if(un.find(l)==un.end())
                {
                    un[l]=true;
                    ans.push_back({l,i});
                    break;
                }
            }
        }


        
        for(int i=1;i<=n;i++)
        {
            if(un.find(i)==un.end())
            {
                cout<<"impossible"<<endl;
                return  ;
            }
        }

    sort(ans.begin(),ans.end(),ola);
    // for(int i=1;i<=n;i++)
    //     {
    //         cout<<i<<" ";
    //     }

    //     cout<<endl;

for(pr x:ans)
{
    cout<<x.second+1<<" ";
}cout<<endl;


}
int main()
{
    fast_io;
    #ifndef  ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
#endif

    int t;
    cin >> t;

    while (t--)
    {
        solve();



    }

    return 0;
}

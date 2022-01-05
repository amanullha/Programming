#include<bits/stdc++.h>
using namespace std;
void p(vector<string>&v)
{
    int n=v.size();
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
void fil(vector<string>&v)
{
    int n=v.size();
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            v[i][j]='1';
        }

    }
}
void solve()
{

    int n;
    cin>>n;
    vector<string>v,ck;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
        ck.push_back(s);
    }
   // p(v);
    fil(ck);
   // p(ck);

    int ans2=0;
    int ans1=INT_MAX;
    for(int i=0; i<n; i++)
    {
        bool f=1;
        for(int j=0; j<n; j++)
        {
            if(v[i][j]=='0')
            {
                f=0;
                break;
            }
        }

        if(f)
        {
            ans2++;
            int c=0;
            for(int j=0; j<n; j++)
            {
                if(v[i][j]=='.' && ck[i][j]=='1')
                {
                    ck[i][j]='X';
                    c++;
                }

            }
            ans1=min(ans1,c);
        }

    }

cout<<"f "<<ans1<<" "<<ans2<<endl;

     ans2=0;
    for(int i=0; i<n; i++)
    {
        bool f=1;
        for(int j=0; j<n; j++)
        {
            if(v[j][i]=='0')
            {
                f=0;
                break;
            }
        }

        if(f)
        {
            ans2++;
            int c=0;
            for(int j=0; j<n; j++)
            {
                if(v[j][i]=='.' && ck[j][i]=='1')
                {
                    ck[j][i]='X';
                    c++;
                }

            }
            ans1=min(ans1,c);
        }

    }

cout<<ans1<<" "<<ans2<<endl;
}


int main()
{
    int t;
    cin>>t;
    for(int tt=1; tt<=t; tt++)
    {
         //cout<<"Case #"<<tt<<": ";
        solve();
    }




    return 0;
}

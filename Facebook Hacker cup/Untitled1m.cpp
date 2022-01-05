#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD = 998244353;
ll M = 10000007;
#define ff first
#define ss second
#define pb push_back
#define VI vector<long long>
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



void solve()
{
    string s;
    cin>>s;
    if(s.size()==1)
    {
        cout<<"0"<<endl;
        return ;
    }

    unordered_map<char,int>un;

    for(char x:s)
    {
        un[x]++;
    }


    int v_mx=INT_MIN;
    int c_mx=INT_MIN;
    char v_c,c_c;

    for(auto xx:un)
    {
        int x=xx.second;
        char c=xx.first;

        if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        {
            if(v_mx<x)
            {
                v_mx=x;
                v_c=c;
            }
        }
        else
        {
            if(c_mx<x)
            {
                c_mx=x;
                c_c=c;
            }
        }


    }
    //cout<<"vmx: "<<v_mx<<" c : "<<v_c<<" cmx: "<<c_mx<<" c: "<<c_c<<endl;

    int vowels=un['A']+un['E']+un['I']+un['O']+un['U'];
    int consonants=s.size()-vowels;

    //cout<<"vowels : "<<vowels<<endl;
    // cout<<"consonants : "<<consonants<<endl;
    // cout<<"c : "<<c<<" un[c] : "<<un[c]<<" dt : "<<vowels-un[c]<<endl;

    // if(vowels==un[c])cout<<consonants<<endl;
    // else
    //    cout<<consonants+(vowels-un[c])*2<<endl;
    //cout<<"v: "<<vowels<<" c: "<<consonants;

    int vs=consonants+(vowels-un[v_c])*2;
   // cout<<"  mn "<<un[v_c]<<endl;
    int cs=vowels+(consonants-c_mx)*2;

   // cout<<"  v val: "<<vs<<"  c val : "<<cs<<" ans : ";
    cout<<min(vs,cs)<<endl;




}

int main()
{



    fio();
    ll t;
    cin >> t;
    for (int it = 1; it <= t; it++)
    {
        cout << "Case #" << it << ": ";
        solve();
    }
    return 0;
}

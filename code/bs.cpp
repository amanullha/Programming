#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(vector<int> s,int k)
{

    long long sum=0;

    int left=0,right=0,Count=0,n=s.size(),flag=false;

    while(right<n)
    {

        sum+=s[right];

        if(sum>=k)
        {
            flag=true;
        }

        if(flag)
        {
            while(sum>=k)
            {

                sum-=s[left++];
            }
            flag=false;
        }


            Count+=(right-left+1);

        right++;

    }

    return Count;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int &x:v)cin>>x;
        cout<<lengthOfLongestSubstring(v,k)<<endl;

    }




    return 0;
}

#include<bits/stdc++.h>
using namespace std;
 
int32_t main( )        {
 
    int k,nonzero=0;
    long long ans=0;
    string str;
 
    cin>>k;
    cin>>str;
 
    int n=str.size();
    int st[n+1];
    memset(st,0,sizeof(st));
 
    st[0]=1;
 
    for(int i=0;i<n;i++)   {
 
    	if(str[i]=='1') {
    		nonzero++;
    	}
    	if(nonzero>=k)  {
    		ans+=st[nonzero-k];
    	}
    	st[nonzero]++;
    }
    cout<<ans<<endl;
 
///main();
return 0;
}
 
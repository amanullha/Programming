class Solution {
public:
    string largestTimeFromDigits(vector<int>& Ar) {
        
        
        string ans="0";
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                for(int k=0;k<4;k++)
                {
                    if(i==j || j==k || k== i)continue;
                    
                    string hour=to_string(Ar[i]) + to_string(Ar[j]);
                    
                    string min=to_string(Ar[k]);
                    
                    int idx=idxx(i,j,k);
                    
                    
                    min+=to_string(Ar[idx]);
                    
                    string s=hour+min;
                    
                   // if(hour<"24" && min<"60" && s>ans )  ans=s;
                    if(cn(hour)<24 && cn(min)<60 && cn(s)>=cn(ans))ans=s;
                    
                    
                }
            }
        }
        
        
        
        
        
        
        
     string as="";
     if(ans.size()==4)
       {
        as=ans[0];
        as+=ans[1];
        as+=":";
        as+=ans[2];
        as+=ans[3];
       }
 

    return as;
        
    }
    
     int cn(string s)
    {
        stringstream geek(s); 
  
 
    int x = 0; 
    geek >> x;
         return x;
    }
    
    
    
    int idxx (int i,int j,int k)
    {
        vector<int>v={0,1,2,3};
        v[i]=-10;
        v[j]=-10;
        v[k]=-10;
        int r=0;
        for(int ii=0;ii<4;ii++)
        {
            if(v[ii]!=-10)
            {
                r=ii;
                break;
            }
        }
        return r;
    }
};
#include <bits/stdc++.h>
    #define quick ios_base::sync_with_stdio(false);cin.tie(NULL)
    using namespace std;
    int Upper_b(int &s,vector<int> &v, int &targate_val)
    {
    	int L = s, R = v.size(), M;
 
    	while (L < R)
    	{
    		M = L + (R - L) / 2;
    		if (v[M] <= targate_val)L = M + 1;
    		else R = M;
    	}
    	return L;
    }
 
    int Lower_b(int &s,vector<int> &v, int  &targate_val)
    {
    	int L = s, R = v.size(), M;
 
    	while (L < R)
    	{
    		M = L + (R - L) / 2;
    		if (v[M] < targate_val)L = M + 1;
    		else R = M;
    	}
    	return L;
    }
 
 
    int main()
    {
    	quick;
    	string s;
    	int k;
    	cin >> k >> s;
    	int l = s.length();
    	vector<int>v;
    	int one=0;
 
    	for (int i = 0; i < l; i++)
    	{
    		if (s[i] == '1')
    		{
    			one++;v.push_back(one);
    		}
    		else v.push_back(one);
    	}
 
 
    	long long count = 0;
    	for (int i = 0; i < l; i++)
    	{
    		if (s[i] == '1')
    		{
    			int x = k-1+v[i];
    			count += (Upper_b(i,v, x) - Lower_b(i,v, x));
 
    		}
    		else
    		{
    			int x = k +v[i];
    			count += (Upper_b(i,v, x) - Lower_b(i,v, x));
    		}
    	}
    	cout << count << endl;
 
    	return 0;
    }
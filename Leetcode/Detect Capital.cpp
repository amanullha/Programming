class Solution {
public:
    bool detectCapitalUse(string s) {
        
        bool f = 1;
	int cap = 0, facp = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')cap++;

	}
       // cout<<"cap : "<<cap<<endl;
	if (cap == s.size() || (s[0] >= 'A' && s[0] <= 'Z' && cap == 1) || cap == 0)return true;
	else return false;

        
    }
};
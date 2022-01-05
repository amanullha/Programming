#include<bits/stdc++.h>
using namespace std;
 vector<int >nums;
void moveZeroes()
{

    int z=0;
    for(int x:nums)cout<<x<< "     ";
    cout<<endl<<endl;

    for(int i=0; i<nums.size(); i++)
    {
        if(!nums[i])
        {

            nums.erase(nums.begin()+i);
            cout<<endl<<"e  "<<*nums.begin()<<endl;
            i=i-1;

            z++;
        }
    }
for(int x:nums)cout<<x<< "     ";
     cout<<endl<<endl<<z;
}

    int main()
    {

        int n;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            nums.push_back(x);
        }
        moveZeroes();

        return 0;
    }

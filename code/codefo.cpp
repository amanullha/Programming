#include<bits/stdc++.h>
#define M 10000000
#define ll long long
using namespace std;

int SubarrySum(int array[], int n, int sum)
{
    //Initialize current_sum = first element.Therefore, start_index =0
    int current_sum = array[0];
    int start_index = 0;
    
    //if current_sum > sum remove last element
    for(int i = 1; i <= n; i++)
    {
        while(current_sum > sum && start_index < i-1)
        {
            current_sum = current_sum - array[start_index];
            start_index++;
        }
        if(current_sum == sum)
        {
            cout<<"Subarray with given sum is between indexes "<<start_index<<" and "<<i-1<<endl;
            return 1;
        }
        //Add current element to current_sum
        if(i < n)
        {
          current_sum = current_sum + array[i];
        }
    }
    cout<<"No subarray found with given sum"<<endl;
    return 0;
}
 
//Main function
int main()
{
    int input_array[] = {1,3, 8, 9,11, 13, 17, 21};
    int N = sizeof(input_array)/sizeof(input_array[0]);
    int Sum = 28;
    SubarrySum(input_array,N,Sum);
    return 0;
}
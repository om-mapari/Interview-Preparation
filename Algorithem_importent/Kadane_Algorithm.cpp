#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int KadaneAlgorithm(vector<int> arr)
{
    int n=arr.size();
    int maxsum_till_now = 0;
    int curr_sum = 0;
    for(int i=0;i<n;i++)
    {
        curr_sum+=arr[i];
        maxsum_till_now = max(maxsum_till_now,curr_sum);
        if(curr_sum<0) curr_sum=0;
    }
    return maxsum_till_now;
}

int KadaneAlgorithm_Index_return(vector<int> arr)
{
    int n=arr.size();
    int maxsum_till_now = 0;
    int curr_sum = 0;
    int start_index,end_index;
    for(int i=0;i<n;i++)
    {
        if(curr_sum == 0) start_index = i;
        curr_sum+=arr[i];
        if(curr_sum>maxsum_till_now)
        {
            maxsum_till_now = curr_sum;
            end_index = i;
        }
        if(curr_sum<0) curr_sum=0;
    }
    cout<<"start = "<<start_index<<" to "<<"end = "<<end_index<<" & Max Sum = ";
    return maxsum_till_now;
}
int main()
{
    
    vector<int> v ={-2, -3, 4, -1, -2, 1, 5, -3};
    cout<<KadaneAlgorithm(v)<<endl; //  7
    cout<<KadaneAlgorithm_Index_return(v)<<endl;
    // start = 2 to end = 6 & Max Sum = 7

    return 0;
}

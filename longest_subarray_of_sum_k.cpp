#include<bits/stdc++.h>
using namespace std;

int main()
{

    // ********* When all the number are positive ***************
    vector<int> v={4,1,1,1,2,3,5};
    int i=0,j=0;
    int k = 5; 
    int sum = 0;
    int max1 = 0;
    while(j<v.size())
    {
        sum=sum+v[j];
        if(sum<k)
        j++;

        else if(sum==k)
        {
            max1=max(max1,j-i+1);
            j++;
        }
        else{
            sum = sum-v[i];
            i++;
            j++;
        }


    }

    cout<<"answer of the longest subarray is "<<max1<<endl;

    return 0;
}


***********************When negative numbers are also there************


class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        
        // going to stick to the basic 
        
        int sum = 0;
        int i=0;
        unordered_map<int, int> mp;
        int maxLen=0;
        while(i<N)
        {
            sum=sum+A[i];
            
            if(sum==K)
            maxLen=i+1;
            
            if(mp.find(sum)==mp.end())
            mp[sum]=i;
            
            if(mp.find(sum-K)!=mp.end())
            if(maxLen<(i-mp[sum-K]))
            maxLen=i-mp[sum-K];
            
            
            i++;
        }
        
        return maxLen;
    } 

};
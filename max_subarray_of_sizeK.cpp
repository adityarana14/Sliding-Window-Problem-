 
class Solution{   
    public:
        int maximumSumSubarray(int k, vector<int> &arr , int N){
 
 
        int i=0,j=0;
        int sum=0;
        int max1=INT_MIN;
        while(j<arr.size())
        {
            sum=sum+arr[j];
            if(j-i+1<k)
            {
                j++;
            }
            else if(j-i+1==k)
            {
                if(sum>max1)
                max1=sum;
                
                sum=sum-arr[i];
                i++;
                j++;
            }
            
        }
        
        return max1;
        
        
        
        
    }
};

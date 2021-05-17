class Solution
{
    public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        vector<int> answer;
        priority_queue<pair<int,int>> pq;
        
        
        int i=0;
        while(i<n)
        {
             pq.push({arr[i],i});
             i++;
             if(i>=k)
             {
           
                while(pq.top().second<(i-k))
                {
                    pq.pop();
                }
            answer.push_back(pq.top().first);

             }
        }
        
        return answer;
    }
};

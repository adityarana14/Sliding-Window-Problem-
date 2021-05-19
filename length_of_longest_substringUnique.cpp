class Solution{
    public:
    int longestUniqueSubsttr(string str){
        //code
        // int i=0;
        // int j=0;
        // unordered_map<int,int> mp;
        // int maxlen=0;
        
        // while(j<str.size())
        // {
        //     mp[str[j]]++;
            
        //     if(mp.size()==(j-i+1))
        //     {
        //         maxlen=max(maxlen,j-i+1);
        //         j++;
        //     }
            
        //     else
        //     {
        //         while(mp.size()!=(j-i+1))
        //         {
        //             mp[str[i]]--;
        //             if(mp[str[i]]==0)
        //             mp.erase(str[i]);
        //             i++;
        //         }
        //         j++;
        //     }
            
        // }
        
        // return maxlen;
        
        
        
        int N = str.size();
        vector<int> lastOccur(256, -1);
        
        int res = 0;
        
        int i = 0;
        for(int j = 0; j < N; j++)
        {
            i = max(i, lastOccur[str[j]] + 1);
            
            res = max(res, j - i + 1);
            
            lastOccur[str[j]] = j;
        }
        
        return res;
    }
};
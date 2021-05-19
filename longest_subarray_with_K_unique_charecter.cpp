class Solution{
    public:
    int longestKSubstr(string s, int k) {
    // your code here
    
    int i=0;
    int j=0;
    
    unordered_map<int,int> m;
    int maxLen=0;
    
    while(j<s.size())
    {
        m[s[j]]++;
        
        if(m.size()<k)
        j++;
        
        else if(m.size()==k)
        {
            maxLen=max(maxLen,j-i+1);
            j++;
        }
        
        else
        {
            while(m.size()!=k)
            {
                m[s[i]]--;
                if(m[s[i]]==0)
                m.erase(s[i]);
                i++;
            }
            j++;
            
        }
    }
    if(maxLen==0)
    return -1;
    
    return maxLen;
    
    }
};
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    int answer=0;
	    
	    int i=0,j=0;
	    
	    unordered_map<char,int> m;
	    
	    for(int k=0;k<pat.size();k++)
	    m[pat[k]]++;
	    
	    int k = pat.size();
	    
	    int count = m.size(); //we have done this so that we dont have to traverse the map again and again 
	    
	    while(j<txt.size())
	    {
	        m[txt[j]]--;
	        
	        
	        
	        if(j-i+1<pat.size())
	        {
	            j++;
	            
	        }
	        else if(j-i+1==k)
	        {
	            int flag = 0;
	           for(auto itr = m.begin();itr!=m.end();itr++)
	           {
	               if(((*itr).second)!=0)
	               {
	               flag=1;
	               break;
	               }
	           }
	           if(flag==0)
	           answer=answer+1;
	        
	        m[txt[i]]++;
	        
	                i++;
                    j++;
	        }
	        
	    }
	    return answer;
	}

};
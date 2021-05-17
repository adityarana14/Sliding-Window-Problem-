vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
                                                 
                                                 
                                                 
                                                 
                                                vector<long  long int> answer;
                                                list<long long int> l;
                                                long long int i=0,j=0;
                                                
                                                while(j<N)
                                                {
                                                    if(A[j]<0)
                                                    l.push_back(A[j]);
                                                    
                                                    if(j-i+1<K)
                                                    {
                                                        j++;
                                                    }
                                                    else if(j-i+1==K)
                                                    {
                                                        if(l.size()==0)
                                                        {
                                                            answer.push_back(0);
                                                        }
                                                        else
                                                        {
                                                            answer.push_back(l.front());
                                                        }
                                                        
                                                        
                                                        if(l.front()==A[i])
                                                        l.pop_front();
                                                        
                                                        
                                                        i++;
                                                        j++;
                                                    }
                                                    
                                                }
                                                
                                                return answer;
                                                 
 }
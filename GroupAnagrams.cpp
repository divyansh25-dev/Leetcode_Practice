class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string,vector<string>>checker;
         vector<vector<string>>y;
        
       
        for(auto &x : strs){
           string old = x;
            
    
            sort(x.begin(),x.end());
    
                checker[x].push_back(old);
                
                
            }
            
          for(auto &m : checker){
              y.push_back(m.second);
          }
       
        return y;     
        }
        
        
        
       
    
};


//O(n*k*logk) Approach
/*

sort the string
use the sorted string as a key and keep pushing the anagramsin the map


*/








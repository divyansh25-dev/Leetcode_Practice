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




class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        map<map<char, int>, vector<string>> mp;
        vector<vector<string>>ans;


         for(auto &x : strs){
        map<char,int>temp;
                for(auto &y:x){
                temp[y]++;
                }

                mp[temp].push_back(string);

         }        

for(auto &x : mp){
    ans.push_back(x.second);
}



        return ans;
        
    }
};


//O(nk) Approach

/*
In this approach the sort is replaced with map we keep the map as first part

*/
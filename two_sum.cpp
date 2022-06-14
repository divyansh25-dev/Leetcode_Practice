class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_set<int>x;
        vector<int>res;
        int a,b;
        for(int i=0;i<nums.size();i++){
            if(x.find(target-nums[i])==x.end())
            x.insert(nums[i]);
            else{
            a=nums[i];
            b=target-nums[i];
            }
        }
        
       int j;
       for(j=0;j<nums.size();j++){
           if(nums[j]==a)
           {res.push_back(j);
           break;}
       }
       

       for(int i=0;i<nums.size();i++){
           if(nums[i]==b && i!=j)
           {res.push_back(i);
           break;
       }
       }

return res;
        
    }
};


/*
Return Indices of the respectives

let the equation x+y = target
now if we have y while iterating and can find (target-y) in the unordered set
we will mark them and search for their indices 

*/
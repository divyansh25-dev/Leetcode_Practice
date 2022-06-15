/* Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.


Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]


*/

class Solution {
public:

int find_occur(vector<int>nums,int target,bool isFirst){

int lo = 0;
int hi = nums.size()-1;


while(lo<=hi){
int mid = (lo+hi)/2;

if(target < nums[mid]) hi=mid-1;

else if(target > nums[mid]) lo=mid+1;

else{

if(isFirst){
  if(lo==mid || target != nums[mid-1]){
    return mid;
  }
  hi = mid-1;
}
else{
   if(target!=nums[mid+1] || hi==mid){
    return mid;
  }
  lo = mid+1;
} 
}


}
return -1;

}



vector<int> searchRange(vector<int>& nums, int target) {
vector<int>res;     
int f=find_occur(nums,target,true);
if(f==-1){
  res.push_back(-1);
  res.push_back(-1);
return res;
}
int l=find_occur(nums,target,false);

res.push_back(f);
res.push_back(l);



return res;
    
        
    }
};


/*

Two Binary Searches

1st will find First occurence and last will ....

in fst occurence we check if current mid is same as it's left if yes then we discard right side of the array by hi=mid-1

in lst occurence we check if current mid is same as it's right if yes then we discard left side of the array by lo=mid+1


*/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
      
        int mid,l = 0;
        int r = nums.size()-1;
        
        while(l<=r){
            mid = (l+r)/2;
            if(nums[mid] == target){
                return mid;
            } else if(nums[mid] > target){
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        
        if(nums[mid]  > target){
            return mid;
        } else {
            return mid+1;
        }
        
    
    }
};
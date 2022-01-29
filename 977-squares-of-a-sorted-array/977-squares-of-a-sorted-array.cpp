class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int swap;
        
        for(int i=0;i<n;i++){
        nums[i] *= nums[i];
        }
        
        sort(nums.begin(),nums.end());
        return nums;
    }
};
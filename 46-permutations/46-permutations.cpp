class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> path;
        int n = nums.size();
        
        vector<bool> used(n, false);
        dfsWithBacktracking(nums, path, used, result, n);
        return result;
    }
    
    void dfsWithBacktracking(vector<int>& nums, vector<int>& path, vector<bool>& used, vector<vector<int>>& result, int numsSize){
        if(path.size() == numsSize){
            result.push_back(path);
            return;
        }
        
        for(int i=0; i<numsSize; i++){
            if(used[i]) continue;
            used[i] = true;
            path.push_back(nums[i]);
            dfsWithBacktracking(nums, path, used, result, numsSize);
            
            //backtrack
            used[i] = false;
            path.erase(path.end()-1);
        }
    }
};
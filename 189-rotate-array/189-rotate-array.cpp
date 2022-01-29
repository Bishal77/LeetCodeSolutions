class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    	// creating a temporary vector v
    vector<int> v(nums.size());
    
	
    for(int i=0;i<nums.size();i++){
		// creating a formula ( we know that n+2%n = 2) means if i+k>n the index will start from 0 
        v[(i+k)%nums.size()]=nums[i];
    }
    
    //copy v into nums vector
    nums=v;
}
    
};
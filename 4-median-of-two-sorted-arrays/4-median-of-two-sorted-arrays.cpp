class Solution {
private:
    vector<int> mergeSortedArrays(vector<int>& nums1, vector<int>& nums2){
        vector<int> ans;
        int n1 = nums1.size();
        int n2 = nums2.size();
        int i = 0;
        int j = 0;
        
        while(i<n1 && j<n2){
            if(nums1[i] < nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }
            else{
                ans.push_back(nums2[j]);
                j++;
            }
        }
        
        while(i<n1){
            ans.push_back(nums1[i]);
            i++;
        }
        
        while(j<n2){
            ans.push_back(nums2[j]);
            j++;
        }
        return ans;
    }
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merge = mergeSortedArrays(nums1,nums2);
        
        int n = merge.size();
        double median;
        if(n%2 == 1){
             median = merge[n/2];
        }
        else{
            double a = merge[n/2];
            double b = merge[(n/2)-1];
            median = (a+b)/2;
        }
        return median;
    }
};
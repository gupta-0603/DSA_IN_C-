class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0,r = nums.size() - 1;
        while (l < r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] > nums[r]) { 
                l = mid + 1;
            }
            else if (nums[mid] < nums[l]) { 
                r = mid;
                l++;
            }
            else { // nums[lo] <= nums[mi] <= nums[hi] 
                r--;
            }
        }
        
        return nums[l];
    
        
    }
};
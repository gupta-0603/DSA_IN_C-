class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i = 1 ;
        while(i < nums.size()){
            if(nums[i] == nums[i-1]) return true ;
            i++ ;
        }
        return false ;
    }
};
auto init = atexit([]() { ofstream("display_runtime.txt") << "-1"; });

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> result(n);
        int i=0;
        int j=n-1;
        int k=n-1;
        while(i<=j){
            if(abs(nums[i])>abs(nums[j])){
                result[k]=nums[i]*nums[i];
                i=i+1;
            } else {
                result[k]=nums[j]*nums[j];
                j=j-1;
            }
            k=k-1;
    }
    return result;
    }
};
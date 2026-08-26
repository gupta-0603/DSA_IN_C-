class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int maxarea=0;
        int left=0;
        int right=n-1;
        while(left<right){
            int width=right-left;
            int heigh=min(height[left],height[right]);
            maxarea=max(maxarea,(width*heigh));
            if(height[left]<height[right]) { left++;}
            else right--;
        }
        return maxarea;

        
    }
};
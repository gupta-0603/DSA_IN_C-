class Solution {
public:
    bool isPalindrome(int x) {
        int r=0;
        if(x<0) return false;
        int num=x;
        while(num!=0) {
            if(r>INT_MAX/10 || r<INT_MIN/10) return false;
            r=r*10+num%10;
            num=num/10;
        }
        return (r==x);
    }
    
};
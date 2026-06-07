class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int j= s.length()-1;
        while (i<j) {
            char left=s[i];
            char right=s[j];
            if(!isalnum(left)){
                i=i+1;
                continue;
            }
            if(!isalnum(right)){
                j=j-1;
                continue;
            }
            if(tolower(left)!=tolower(right)){ return false;}
        i=i+1;
        j=j-1;
        }
     
     return true;   
    }
   
};
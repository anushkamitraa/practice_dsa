class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false; 
        long long rev = 0;

        for(int i = x; i > 0; i /= 10){
            rev = rev * 10 + i % 10;
        }
        return rev == x;
    }
};

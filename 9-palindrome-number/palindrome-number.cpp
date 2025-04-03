class Solution {
public:
    bool isPalindrome(int x) {
        
        int duplicateNum = x;
        int lastDigit = 0;
        long revNum = 0;
        while (x > 0) {
            lastDigit = x%10;
            x = x/10;
            revNum = revNum*10 + lastDigit;
        }
        if(revNum == duplicateNum) {
            return true;
        } 
        else return false;
    }
};
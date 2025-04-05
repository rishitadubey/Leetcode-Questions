class Solution {
public:
    string strWithout3a3b(int A, int B) {
        int a = A, b = B;
        char ca = 'a', cb = 'b';
        
        if (A < B) {
            a = B;
            b = A;
            ca = 'b';
            cb = 'a';
        }
        
        string result = "";
        
        while (a > 0 || b > 0) {
            // If more a's are left, we can afford to place two
            if (a > 0) {
                result += ca;
                a--;
            }
            if (a > b) {
                result += ca;
                a--;
            }
            if (b > 0) {
                result += cb;
                b--;
            }
        }

        return result;
    }
};

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int ans = 0 ;
        for(int i=0;i<32;i++){
            if((1<<i)&n){
                ans = ans | (1<<(32-i-1));
            }
        }
        return ans;
    }
};
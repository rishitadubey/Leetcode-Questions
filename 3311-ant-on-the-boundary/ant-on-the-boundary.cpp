class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int total = 0,count = 0;
        for(int i = 0;i < nums.size();i++){
            total += nums[i];
            if(total == 0) count++;
        }
        if(count > 0) return count;
        else return 0;
    }
};
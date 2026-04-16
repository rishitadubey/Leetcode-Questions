class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        
        int n = static_cast<int>(nums.size());
        int left = 0;                 
        long long windowSum = 0;       
        int maxFreq = 1;    

        for (int right = 0; right < n; ++ right) {
            windowSum += nums[right];
            
            long long required = 1LL * nums[right] * (right - left + 1);
            
            while (required - windowSum > k) {
                windowSum -= nums[left++];
                required = 1LL * nums[right] * (right - left + 1);
            }

            maxFreq = max(maxFreq, right - left + 1);
        }

        return maxFreq;
    }
};
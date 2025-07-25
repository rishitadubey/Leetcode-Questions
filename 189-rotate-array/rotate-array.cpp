class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>newArr(nums);
        int n=nums.size();{
            for(int i=0; i<n; i++){
                int newIndex =(i+k)%n;
                nums[newIndex]= newArr[i];
            }
        } 

    }
};
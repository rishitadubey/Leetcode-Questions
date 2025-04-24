class Solution {
public:
    int searchInsert(vector<int>& nums, int tar) {
        int l=0;
        
        int r=nums.size();
    
            l=0;
           int h=nums.size()-1;
             while(h>=l){
               long  mid = (l+h)/2;
                if (tar<nums[mid]){
                    h= mid -1;
                }
                else if (tar>nums[mid]){

                    l=mid +1;
                }
                else return mid;

             }
             return l;
        
    }
};
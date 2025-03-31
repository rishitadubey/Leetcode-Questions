class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {// bool means return true or         false                                           and NOT cout<<"true" and false
        sort(nums.begin(),nums.end());        // sorting nums to get same elemente adjacently
       for (int i=1; i<nums.size(); i++){     // stating from 1st index as we      compare to [i-1] uptil last index(nums size minus one)
        if(nums[i]==nums[i-1]){         // checking if adjacent ele are equal
            return true;          // if Y return true
        }
        
    
       } 
       if(int i=0){
        if (nums[i]==nums[i+1])
        {
             {
                return true;
             }
        }
         }
        return false;                         // else false  
    }
};
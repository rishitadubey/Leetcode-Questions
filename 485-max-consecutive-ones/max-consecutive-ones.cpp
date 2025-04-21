class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n= nums.size();
         int count =0;   // 1 counting variable
        int Maxcount=0; // maximum window of consecutive 1s
        for(int i=0; i<n; i++){   // traversing
            if(nums[i]==1){ // if i th index is 1
                count++;     // put this info in count varable
            }
            else if(nums[i]!=1){  // if its not 1, 
                count =0;  //let count var bee 0
            }
             
            Maxcount= max(count,Maxcount); //  maxcount is the maximum value of consecutive 1s out of the two windows
            
           
                
        }
        return Maxcount; 
    }
};
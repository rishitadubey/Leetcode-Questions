class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
         unordered_map<int, int>mp;// integer and count

        for(int x:nums1){
            mp[x]++;

        }
        for(int x: nums2){
            if(mp[x]>=1){ 
                ans.push_back(x);
                mp[x]=0;
            }
        }
            return ans;
        }
    

    
};
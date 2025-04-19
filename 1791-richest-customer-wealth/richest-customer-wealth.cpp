class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int wealth=0;
         int maxwealth =0;
        for(int i=0; i<accounts.size() ; i++){
            int wealth = accumulate(accounts[i].begin(), accounts[i].end(),0); // "0" IS RAELLY IMP CAUSE WE START SUM FROM 0
              // THE ACCUMULATE is a function that adds up all elements in a range — like a //shortcut for a loop that sums values.


            maxwealth = max(maxwealth, wealth);
        }
        return maxwealth;
    }
};
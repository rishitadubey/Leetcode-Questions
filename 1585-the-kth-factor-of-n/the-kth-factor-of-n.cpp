class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int>ans;// make an ans array of alll factors
                for(int i=1 ; i<=n ;i++){//traverse ans array from 1 to n
        if(n%i==0){// if i is a factor of n
            ans.push_back(i);//push back i in our ans array of fsctors
        }
        
       if(ans.size()>=k){// ans arr is big enough for k,
            return ans[k-1];//  since our ans arr indexing starts w 0 so we print out the kth -1 index of thye areray
        }
        }
    return -1;
        }
};
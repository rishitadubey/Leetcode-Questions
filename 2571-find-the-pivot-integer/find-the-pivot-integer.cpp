class Solution {
public:
    int pivotInteger(int n) {
       int prefix_sum=0;
        int total_sum = n*(n+1)/2;
       for (int i =1; i<=n; i++){
         
         prefix_sum +=i;
       if((2*prefix_sum)==(total_sum+i)){
          return i;
       }
       }   
       return -1;
    }
};
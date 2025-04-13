class Solution {
public:
    bool isHappy(int n) {
         while(n>9){ // for   two and three digit numbers 
            int sum =0;// intialize sum as 0
            while(n>0){// postive h
                 sum = sum + (n%10) *(n%10);//sum me 10 se divide krke digit ka last no. milk jata h 
                     n/= 10; 
                 }
                  n=sum;
            }
             if(n==1 || n==7) return true;
             else return false;
         
    }
};
class Solution {
public:
    int fib(int n) {
        if (n==0) return 0;
    if(n==2 || n==1)  return 1;//bhai fuck u rishita
           
   return fib(n-1)+fib(n-2);//kaam
     
    
   
    }
};
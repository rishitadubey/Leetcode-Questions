class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>answer;// VECTOR OF STRING
        for (int i=1; i<=n; i++){  // since answer is indexed from 1
            if(i%3==0 & i% 5==0){
                answer.push_back("FizzBuzz"); // push fizzbuzz in our vector of strings
            }
            else if(i%3==0 & i%5!=0){
                answer.push_back("Fizz");
            }
            else if(i%3!=0 & i%5 ==0){
                answer.push_back("Buzz");
            }
            else  answer.push_back(to_string(i)); // if nit / by 5 or 3 then no. is pushed back into answer  vector of string by converting integer to string
             
        }
       return answer;

    }
};
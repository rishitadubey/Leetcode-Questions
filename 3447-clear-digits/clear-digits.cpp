class Solution {
public:
    string clearDigits(string s) {
       stack<char>st;
       
        // if(!st.empty()){
            // int a =s[i]-'0';     if a no. say a minus 0 gives a number in bw 0 and 9 then the number a is a numeric character
            // if(a>=0 && a<=9){
            //     st.pop();
            // }
        //     else {st.push(s[i]);
        //   }
        // }

        for (char c : s) {
            if (isdigit(c)) {
                if (!st.empty()) {
                    st.pop();
                }
            } else {
                st.push(c);
            }
        }

        string result;
        while (!st.empty()) {
            result.push_back(st.top());
            st.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
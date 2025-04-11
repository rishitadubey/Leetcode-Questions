class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;   // stack banaya
         for (int i=0; i<s.length(); i++){// traverse kia
            char ch = s[i]; // charraters ko string k index me likha
                if(ch=='('){ // string ka element agar ( hai
                    st.push(ch); // toh stack me push karde
                } 
                else{ // warna 
                    if(!st.empty() && st.top()=='('){ 
                      st.pop();   
                        
                    }
                    else {
                        st.push(ch);
                    }
                }
         }
                     return st.size();
                   
          }
    
    
    
};
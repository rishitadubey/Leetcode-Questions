class Solution {
public:
    bool isPalindrome(string s) {
        int left=0 ;
        int right =s.size()-1; // samller than string size
        while(left<right){ //left pointer smaller than right
      if(!isalnum (s[left])){  //L is not an alphanumeric
        left++;
      }
      else if(!isalnum(s[right])){//R  is not an alphanumeric
        right--;
      }
      else if(tolower(s[left])!= tolower(s[right])){                       //lowercase L &R pounters dont match
return false;
      }
      else
      { left++, //theyre alnum and equal move towards each other
      right--;
      }
    }

        return true; // true if palindrome
       } 

        
    
    
};
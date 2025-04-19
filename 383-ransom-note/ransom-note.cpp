class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       
       for(int i=0; i< ransomNote.length(); i++){
     char r= ransomNote[i];
    int matchingIndex =-1;

        
        for (int j=0; j<magazine.length(); j++){
             if (magazine[j] == r) {
                    matchingIndex = j;
                   
             }
        }
             if(matchingIndex==-1) return false;


            magazine.erase(matchingIndex, 1);

       }
       return true;
    }
};
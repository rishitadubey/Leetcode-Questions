class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
            vector<int>deg(edges.size()+2,0);

    

        
for(auto i: edges){
      deg[i[0]]++;
     deg[i[1]]++;
    
}

for(int i=1; i<edges.size()+2; i++){
    if(deg[i]==edges.size()) return i;
}
 return 0;
    }
};
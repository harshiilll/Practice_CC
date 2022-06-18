class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inter) {
       vector<vector<int>> mergedinter;
        
        if(inter.size()==0)
            return mergedinter;
        
        sort(inter.begin(),inter.end());
        vector<int> tempInter=inter[0];
        
        for(auto it:inter){
            if(it[0]<=tempInter[1]){
                tempInter[1]=max(it[1],tempInter[1]);
            }
            else{
                mergedinter.push_back(tempInter);
                tempInter=it;
            }
            
        }
             mergedinter.push_back(tempInter);
        return mergedinter;
    }
};
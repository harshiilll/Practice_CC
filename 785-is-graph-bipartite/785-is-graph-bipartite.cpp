class Solution {
public:
	bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> color(n, -1);
        
        for(int i=0; i<n; i++){
            if(!checkBipartiteDFS(i, color, graph)) return false;
        }
        return true;
    }
	
    bool checkBipartiteDFS(int i, vector<int>& color, vector<vector<int>>& adj){
        if(color[i] == -1) color[i] = 1;
        vector<int> t = adj[i];
        for(auto& num:t){
            if(color[num] == -1){
                color[num] = 1-color[i];
                if(!checkBipartiteDFS(num, color, adj)) return false;
            }
            else if(color[num] == color[i]) return false;
        }
        return true;
    }
};
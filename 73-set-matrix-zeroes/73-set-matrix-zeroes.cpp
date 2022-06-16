class Solution {
public:
void setZeroes(vector<vector<int>>& matrix) {
int rows=matrix.size();
int columns=matrix[0].size();

    unordered_set<int> r;
    unordered_set<int> c;
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            if(matrix[i][j]==0){
                r.insert(i);
                c.insert(j);
            }
        }
    }
    
    for(int j=0;j<columns;j++){
            if(!(c.find(j)==c.end())){
                for(int i=0;i<rows;i++){
                    matrix[i][j]=0;
                }
            }
    }
    
    for(int j=0;j<rows;j++){
            if(!(r.find(j)==r.end())){
                for(int i=0;i<columns;i++){
                    matrix[j][i]=0;
                }
            }
    }
    
}
};
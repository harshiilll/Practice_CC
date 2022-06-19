class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=0;
        int c=matrix[0].size()-1;
        
        bool found=false;
        
        while(r<matrix.size() && c>=0){
            if(matrix[r][c]==target)
                found=true;
            if(matrix[r][c]>target)
                c--;
            else
                r++;
        }
        
        
        if(found)
            return true;
        else
            return false;
    }
};
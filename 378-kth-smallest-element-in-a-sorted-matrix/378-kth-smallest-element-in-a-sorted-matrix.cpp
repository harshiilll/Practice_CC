class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> ans;
        int n=matrix.size();
        for(auto it:matrix){
            for(auto i:it){
                ans.push_back(i);
            }
        }
        sort(ans.begin(),ans.end());
        return ans[k-1];
    }
        
        
//         if(n<=1){
//             return matrix[0][0];
//             // return ans;
//         }
//         int st=k/n;
//         int en=0;
//         en=max(0,k-st*n-1);
        
//         ans=matrix[st];
//         int an=ans[en];
//         return an;
//     }
};
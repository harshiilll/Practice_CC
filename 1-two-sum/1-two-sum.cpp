class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            // int temp=nums[i];
            for(int j=0;j<n;j++){
                
                
                if(i!=j){
                // int temp2=nums[j]+temp;
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
                }
                
            }
        }
        return ans;
    }
};
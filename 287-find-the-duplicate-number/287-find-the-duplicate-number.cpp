class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            if(nums[i]==nums[i+1])
                return nums[i];
            else
                continue;
        }
        
        // for(int i=0;i<n;i++){
        //     int ank=nums[i];
        //     for(int j=0;j<n;j++)
        //     {
        //         if(i==j){
        //             continue;
        //         }
        //         if(nums[j]==ank)
        //             return ank;
        //         else
        //             continue;
        //     }
        // }
        return -1;
    }
};
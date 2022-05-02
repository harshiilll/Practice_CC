class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> even;
        vector<int> odd;
        
            for(int j=0;j<nums.size();j++)
            {
                if(nums[j]==0)
                    even.push_back(nums[j]);
                else if(nums[j]%2==0)
                    even.push_back(nums[j]);
                else if(nums[j]==1)
                    odd.push_back(nums[j]);
                else 
                    odd.push_back(nums[j]);
            }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        
        
        for(int i=0;i<odd.size();i++)
        {
            even.push_back(odd[i]);
        }
        return even;
    }
};
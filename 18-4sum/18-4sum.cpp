class Solution {
public:
vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        if(n<4)
            return {};
        vector<vector<int>>vec;
        
        for(int i=0;i<n-3;i++)
        {
            if(i>0&&nums[i]==nums[i-1]) continue;
            long long int k = nums[i]+nums[i+1];
            k = k+nums[i+2]+nums[i+3];
            if(k>target) break;
            k = nums[i]+nums[n-3];
            k = k + nums[n-2]+nums[n-1];
            if(k<target) continue;
            for(int j=i+1;j<n-2;j++)
            {
                if(j>i+1 &&nums[j]==nums[j-1]) continue;
                k = nums[i]+nums[j];;
                k = k + nums[j+1]+nums[j+2];
                if(k>target) break;
                k = nums[i]+nums[j];
                k = k + nums[n-2]+nums[n-1];
                if(k<target) continue;
                int a = j+1;
                int b = n-1;
                while(a<b)
                {
                    int sum = nums[i]+nums[j]+nums[a]+nums[b];
                    if(sum > target)
                        b--;
                    else if(sum < target)
                        a++;
                    else
                    {
                        vec.push_back({nums[i],nums[j],nums[a],nums[b]});
                        int low = nums[a];
                        int high = nums[b];
                        while(a<b && nums[a]==low)
                            a++;
                        while(a<b && nums[b]==high)
                            b--;
                    }
                }
            }
        }
        return vec;
    }
};
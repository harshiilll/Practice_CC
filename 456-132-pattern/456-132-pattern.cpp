class Solution {
public:
    //找当前最优的(s2,s3)对，实时更新s3的值，栈中存放所有满足的s2的值
    bool find132pattern(vector<int>& nums) {
        int len = nums.size();
        if(len<3) return false;
        int s3 = INT_MIN;
        stack<int> s;
        for(int i=len-1;i>=0;i--){
            if(nums[i]<s3) return true;
            while(!s.empty() && nums[i]>s.top()){
                s3 = s.top();
                s.pop();
            }
            s.push(nums[i]);
        }
        
        return false;
    }
};
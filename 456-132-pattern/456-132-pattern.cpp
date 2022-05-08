class Solution {
public:
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
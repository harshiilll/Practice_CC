class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int> > max;
        int maxi=INT_MAX;
        for(auto it: nums){
            max.push(it);
        }
        for(int i=0;i<k;i++){
            maxi=min(maxi,max.top());
            max.pop();
        }
        return maxi;
    }
};
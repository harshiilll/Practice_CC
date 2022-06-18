class Solution {
public:
    void dnf(vector<int> &nums){
        int low=0,mid=0;
        int size=nums.size();
        int high=size-1;
        
        while(mid<=high){
            if(nums[mid]==0)
            {
                int temp=0;
                temp=nums[low];
                nums[low]=nums[mid];
                nums[mid]=temp;
                low++;
                mid++;
            }
            
            else if(nums[mid]==1)
            {
                mid++;
            }
            
            else
            {
                int temp=0;
                temp=nums[mid];
                nums[mid]=nums[high];
                nums[high]=temp;
                
                high--;
            }
        }
    }
    
    void sortColors(vector<int>& nums) {
        dnf(nums);
    }
};
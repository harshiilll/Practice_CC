class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        vector<int> fin;
        for(int i=0;i<m;i++)
        {
            fin.push_back(nums1[i]);
        }
        
        for(int i=0;i<n;i++)
        {
            fin.push_back(nums2[i]);
        }
        
        sort(fin.begin(),fin.end());
        for(int i=0;i<m+n;i++)
        {
            nums1[i]=fin[i];
        }
    }
};
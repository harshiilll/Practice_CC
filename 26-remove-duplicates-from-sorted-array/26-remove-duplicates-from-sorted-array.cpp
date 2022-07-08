// #include<bits/stdc++.h>
// using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> res;
        for(auto n : nums)
        {
           res.insert(n);
            nums.pop_back();
        }
        for(auto n:res){
            nums.push_back(n);
        }
        
        return res.size();
        
    }
};
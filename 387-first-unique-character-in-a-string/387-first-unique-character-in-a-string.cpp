class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.size();
         vector<int> m(26,0);
        for(char a : s){
            m[a-'a']++;
        }
        int ans=-1;
        for(int i=0;i<n;++i){
            if(m[s[i]-'a']==1){
                ans=i;
                break;
            }
        }
        return ans;
    }
};
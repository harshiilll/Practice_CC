class Solution {
public:
    bool isAnagram(string s, string t) {
        int s1=s.size();
        int s2=t.size();
        if(s1!=s2){
            return false;
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return(s==t);
    }
};
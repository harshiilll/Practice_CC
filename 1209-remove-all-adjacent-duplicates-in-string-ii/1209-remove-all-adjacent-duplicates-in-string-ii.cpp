class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int> >A;
        string result="";
       for(int i=0;i<s.size();i++)
       {
           if(A.empty()) A.push(make_pair(s[i],1));
           else if(!A.empty())
           {
               if(A.top().first==s[i])
               {
                   A.top().second++;
               }
               else{
                   A.push(make_pair(s[i],1));
               }
           }
           if(k==A.top().second)
           {
                 A.pop();
           }
       }
        while(!A.empty())
        { 
            result.append(A.top().second,A.top().first);
            A.pop();
            }
        reverse(result.begin(),result.end());
        return result;
    }
};
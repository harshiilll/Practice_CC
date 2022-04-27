class Solution {
public:
   vector <int> parent;
   int getParent(int x){
      if(parent[x] == -1) return x;
      return parent[x] = getParent(parent[x]);
   }
   string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
      int n = s.size();
      parent = vector <int>(n, -1);
      string ret(n, '*');
      for(int i = 0; i < pairs.size(); i++){
         int u = pairs[i][0];
         int v = pairs[i][1];
         if(getParent(u) == getParent(v)) continue;
         parent[getParent(u)] = getParent(v);
      }
      vector < char > arr1[n];
      for(int i = 0; i < n; i++){
         arr1[getParent(i)].push_back(s[i]);
      }
      for(int i = 0; i < n; i++){
         sort(arr1[i].rbegin(), arr1[i].rend());
      }
      for(int i = 0; i < n; i++){
         ret[i] = arr1[getParent(i)].back();
         arr1[getParent(i)].pop_back();
      }
      return ret;
   }
};
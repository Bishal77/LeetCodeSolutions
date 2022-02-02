class Solution {
public:
  
     int lengthOfLongestSubstring(string s) {
        unordered_set<char> window;
        int first=0;
        int ans = 0;
        
        for (int i=0;i<s.size();i++)
        {
            while(window.find(s[i])!=window.end())
                  {
                      window.erase(s[first]);
                          first++;
                  }
            window.insert(s[i]);
            ans = max(ans,i-first+1);
        }
return ans;
        }   
   
};
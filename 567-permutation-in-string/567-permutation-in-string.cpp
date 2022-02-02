class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        bool flag=false;
        vector<int>ma(26,0), pa(26,0);
        int a = s1.size();
        int b = s2.size();
        int start=0,end=0;
        if(a>b) return false;
        for(int end=0; end<a; end++){
            pa[s1[end]-'a']++;
            ma[s2[end]-'a']++;
        }
        end=a-1;
        while(end<b){
            if(pa==ma){
               flag=true;
                break;
            }
            end++;
            if(end!=b){
                ma[s2[end]-'a']++;
            }
            ma[s2[start]-'a']--;
            start++;
        }
     if(flag) return true;
        else return false;
        
    }
};
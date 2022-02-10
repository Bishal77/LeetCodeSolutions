class Solution {
public:
	vector<string> ans;
	void recur(int idx,string &s){
		if(idx==s.size()){
			ans.push_back(s);
			return ;
		}
		if(isalpha(s[idx])){
			recur(idx+1,s);//without changing the case calling the fucntion

			s[idx]=s[idx]^(1<<5);//toggling the case of s[i]
			recur(idx+1,s);//after changing the case calling the function
			s[idx]=s[idx]^(1<<5);//making it back original
		}
		else
			recur(idx+1,s);//simply move forward if digit is encountered
	}
	vector<string> letterCasePermutation(string s) {
		recur(0,s);
		return ans;
	}
};
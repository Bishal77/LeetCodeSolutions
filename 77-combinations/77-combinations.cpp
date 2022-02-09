class Solution {
public:
   vector<vector<int>> combine(int n, int k) {
	int x = (1<<n) - 1;
	vector<vector<int>> res;
	if(k == n) {
		vector<int> v;
		for(int i=1; i<=n; i++) v.push_back(i);
		res.push_back(v);
		return res;
	}
	for(int i=1; i<x; i++) {
		if(__builtin_popcount(i) == k) {
			vector<int> v;
			int j = 0;
			while(j < n) {
				if(i & (1<<j)) v.push_back(j+1);
				j += 1;
			}
			res.push_back(v);
		}
	}
	return res;
}
};
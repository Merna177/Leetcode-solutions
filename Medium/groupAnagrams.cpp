class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> groups;
	    unordered_map<string, vector<string>> mp;
        for(int i=0;i<strs.size();i++){
            string key = strs[i];
            sort(key.begin(),key.end());
		    mp[key].push_back(strs[i]);
            
        }
        	for (auto it : mp) { groups.push_back(it.second); }
	    return groups;
    }
};

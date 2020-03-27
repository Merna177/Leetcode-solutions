class Solution {

public:
    unordered_set<string> mp;
    unordered_set<int> failed;
    bool wordBreak(string s, vector<string>& wordDict) {
          if(s.size()==0 || wordDict.size()==0)
           return false;
        for(int i=0;i<wordDict.size();i++){
            mp.insert(wordDict[i]);
        }
        return dp(s,0);
    }
     bool dp(string s,int index){
       if(index ==s.size())
           return true;
       if(failed.find(index) != failed.end())
             return false;
       for(auto it = mp.begin(); it != mp.end(); it++) {
		string found = *it;
        if(s.substr(index, found.size()) == found &&dp(s, index + found.size()))
            return true;
        
    }
          failed.insert(index);
        return false;
     }
};

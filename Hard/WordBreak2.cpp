class Solution {
    unordered_set<string> mp;
    unordered_map<int,vector<string>> dp;
public:
    vector<string> wordBreak(string s, vector<string>& wordDict) {
          for(int i=0;i<wordDict.size();i++){
            mp.insert(wordDict[i]);
        }
        return solve(0,s);
    }
    vector<string> solve(int index,string &s){
        //base case
        if(index==s.size())
            return vector<string>{""};
        //memorization condition 
        if(dp.count(index))
                return dp[index];
        
        dp[index]=vector<string>();
        string current = "";
         for(int i=index;i<s.size();i++){
             current+=s[i];
             if(mp.count(current)){
                 vector<string> temp  =solve(i+1,s);
                 for(int j=0;j<temp.size();j++){
                     if(index==0){
                         dp[index].push_back(current + temp[j]);
                         
                     }else
                         dp[index].push_back(" "+current + temp[j]);
                 }
             }
         }
        return dp[index];
    }
};

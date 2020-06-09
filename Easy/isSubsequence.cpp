class Solution {
public:
    bool isSubsequence(string s, string t) {
         if(s.size()==0)
            return true;
        if(t.size()==0||t.size()<s.size())
            return false;
        int indx=0;
        for(int i=0;i<t.size();i++){
            if(s[indx]==t[i])
                indx++;
            if(indx==s.size())
                return true;
        }
        return false;
    }
};

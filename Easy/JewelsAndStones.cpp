class Solution {
public:
    int numJewelsInStones(string J, string S) {
        bool isJewels[128]={false};
        int cnt=0;
        for(int i=0;i<J.size();i++)
            isJewels[J[i]]=true;
        for(int i=0;i<S.size();i++){
            if(isJewels[S[i]])
                cnt++;
        }
        return cnt;
    }
};

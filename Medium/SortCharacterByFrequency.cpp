class Solution {
public:
    static bool compare(const vector<int>& x, const vector<int>& y)
    {
        return x[1]>y[1];
    }
    string frequencySort(string s) {
        vector<vector<int>> mp(92,vector<int>{0,0});
        for(int i=0;i<s.size();i++){
            mp[s[i]-' '][0]=s[i];
            mp[s[i]-' '][1]++;
        }
        sort(mp.begin(),mp.end(),compare);
        int index=0;
        for(int i=0;i<92;i++){
            for(int j=0;j<mp[i][1];j++)
                s[index++]=(char)mp[i][0];
            
        }
        return s;
    }
   
};


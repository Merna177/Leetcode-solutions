class Solution {
public:
    int minSteps(string s, string t) {
       int arr[228]={0};
       for(int i=0;i<s.size();i++){
           arr[s[i]-'A']++;
       }
        for(int i=0;i<t.size();i++){
           arr[t[i]-'A']--;
       }
      int cnt=0;
        for(int i=0;i<228;i++){
            cnt+=abs(arr[i]);
        }
        return cnt/2;
    }
};

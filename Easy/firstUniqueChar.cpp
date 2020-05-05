class Solution {
public:
    int firstUniqChar(string s) {
        ///to map each character to its frequency
        int counter[26] ={0};
        //map characters
        for(int i=0;i<s.size();i++)
            counter[s[i]-'a']++;
        //check for first unique character
        for(int i=0;i<s.size();i++){
            if(counter[s[i]-'a']==1)
                return i;
        }
        return -1;
    }
};
///space complexity only O(constant)--> O(26)
//Time complexity O(n)

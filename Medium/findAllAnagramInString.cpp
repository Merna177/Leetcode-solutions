class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
     int counter[26]={0};
     vector<int> res;
     int unique=0;
     for(int i=0;i<p.size();i++){
         if(counter[p[i]-'a']==0)unique++;
         counter[p[i]-'a']++;
     }
     int start=0;
     for(int i=0;i<s.size();i++){
         if(counter[s[i]-'a']!=0){
             counter[s[i]-'a']--;
             if(counter[s[i]-'a']==0)
                 unique--;
         }else{
             while(counter[s[i]-'a']==0 && start<i){
                 if(counter[s[start]-'a']==0)
                     unique++;
                 counter[s[start++]-'a']++;
             }
             if(counter[s[i]-'a']==0)
                 start++;
             else{
                 counter[s[i]-'a']--;
                 unique--;
             }
         }
         if(unique==0){
             res.push_back(start);
             counter[s[start++]-'a']++;
             unique++;
         }
     }
        return res;
    }
    
};
/*
c b a e b a b a c d    p= abc   counter[1,1,1] unique=3
counter[0,0,1] unique=1
*/

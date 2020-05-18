class Solution {
public:
    bool checkInclusion(string s1, string s2) {
      int counter[26]={0};
     int unique=0;
     for(int i=0;i<s1.size();i++){
         if(counter[s1[i]-'a']==0)unique++;
         counter[s1[i]-'a']++;
     }
     int start=0;
     for(int i=0;i<s2.size();i++){
         if(counter[s2[i]-'a']!=0){
             counter[s2[i]-'a']--;
             if(counter[s2[i]-'a']==0)
                 unique--;
         }else{
             while(counter[s2[i]-'a']==0 && start<i){
                 if(counter[s2[start]-'a']==0)
                     unique++;
                 counter[s2[start++]-'a']++;
             }
             if(counter[s2[i]-'a']==0)
                 start++;
             else{
                 counter[s2[i]-'a']--;
                 unique--;
             }
         }
         if(unique==0){
           return true;
         }
     }
        return false;
    }
    
};
/*
s1= abc counter[1,1,1]  unique=2
*/

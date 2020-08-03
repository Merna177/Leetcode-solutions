class Solution {
public:
    bool isalpha(char c){ return ((c>='a'&&c<='z')||(c>='A'&&c<='Z'))?true:false;}
    bool isdigit(char c){return (c>='0'&&c<='9')?true:false;}
    char lowercase(char c){
        if(c>='A' && c<='Z')
            c +=32;
        return c;
    }
    bool isPalindrome(string s) {
      int i=0,j=s.size()-1;
      while(i<=j){
          while(i<j&&!isalpha(s[i])&&!isdigit(s[i]))i++;
          while(i<j&&!isalpha(s[j])&&!isdigit(s[j]))j--;
          if(lowercase(s[i])==lowercase(s[j])){
              i++;
              j--;
          }
          else
              return false;
      }
        return true;
    }
};

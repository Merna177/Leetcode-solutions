class Solution {
public:
    string removeKdigits(string num, int k) {
      stack<char> st;
      for(int i=0;i<num.size();i++){
          while(k && !st.empty() && num[i]<st.top()){
              st.pop();
              k--;
          }
          if(!st.empty() || num[i]!='0')
              st.push(num[i]);
      }
        
        while (k-- && !st.empty())
            st.pop();
        if(st.empty() )return "0";
        
        int finalLeng = st.size();
        while(!st.empty()){
            num[st.size()-1]=st.top();
            st.pop();
        }
        return num.substr(0,finalLeng);
        
    }
};
/*
1  4  3  2  2  1  9   k=0  output=1219
1 2 1 9
stack 1 2 1  9  
1 0 4     k=0
stack 0  4
*/

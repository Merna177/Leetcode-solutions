class Solution {
public:
    bool backspaceCompare(string S, string T) {
        int j=0,k=0;
       for(int i=0;i<S.size();i++){
           if(S[i]=='#')
           {
               j=max(0,j-1);
           }else{
            S[j++]=S[i];
           }
       }
          for(int i=0;i<T.size();i++){
           if(T[i]=='#')
           {
            k=max(0,k-1);

           }else{
               T[k++]=T[i];
           }
       }
        if(k!=j)return false;
        for(int i=0;i<k;i++){
            if(S[i]!=T[i])
                return false;
        }
        return true;
    }
};

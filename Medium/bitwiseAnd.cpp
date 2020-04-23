class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        int cnt=0;
        while(n!=m){
            n>>=1;
            m>>=1;
            cnt++;
            
        }
        return n<<cnt;
    }
    
    
};

class Solution {
public:
    vector<int> countBits(int num) {
     vector<int> ones;
     int index=0;
     ones.push_back(0);
     for(int i=1;i<=num;i++){
         if(!(i&(i-1)))
             index=0;
         ones.push_back(ones[index]+1);
         index++;
     }
        return ones;
    }
};
/*
0000  0   0
0001  1   2^0
0010  2   2^1
0011  3   
0100  4   2^2
0101  5   
0110  6   
0111  7
1000  8  2^3
1001  9  
1010  10
*/

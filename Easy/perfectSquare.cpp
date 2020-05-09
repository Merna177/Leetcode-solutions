class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 0 || num == 1) //base case
            return num;
      int left = 0,right = num/2;
      while(left<=right){
          long   mid = (left+right)/2;
          if(mid*mid==num)
              return true;
          else if(mid*mid<num){
              left=mid+1;
          }else
              right=mid-1;
      }
        return false;
    }
};

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
      int mx= INT_MIN, mn= INT_MAX, countmx=0,countmn=0, total=0;
      for(int i=0;i<A.size();i++){
          countmx = max(countmx+A[i],A[i]);
          mx = max(mx,countmx);
          countmn = min(countmn+A[i],0);
          mn = min(countmn,mn);
          total+=A[i];
      }
      return mx <0 ? mx : max(mx, total- mn);
    }
   
};
/*
example: 5 -3 5    answer=10   total = 7
example: 3 -2 2 -3 answer=3

1 -2 3 2  answer=5
mx=5    cnt= 5   max(cnt+arr[i] , arr[i])  

*/

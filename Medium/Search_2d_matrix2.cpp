class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
          if(matrix.size()==0)return false;
           int low=0;
           int high = matrix[0].size()-1;
            while(low >= 0 && high >= 0 && high < matrix[0].size() && low < matrix.size()){
                if(matrix[low][high]==target)
                return true;
               else if(matrix[low][high]>target)
                high--;
               else 
                low++;
            }
        return false;
    }
};

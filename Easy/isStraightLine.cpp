class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int deltay = coordinates[1][1]-coordinates[0][1];
        int deltax = coordinates[1][0]-coordinates[0][0];
        
        for (int i = 2; i < coordinates.size(); i++)
            if ((coordinates[i][0] - coordinates[1][0]) * deltay != (coordinates[i][1] - coordinates[1][1]) * deltax)
				return false;
  
        return true;            
    }
};

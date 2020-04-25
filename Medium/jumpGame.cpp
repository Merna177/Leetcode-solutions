class Solution {
public:
    bool canJump(vector<int>& nums) {
        int position=0;
        for(int i=0;i<nums.size();i++){
            if(i>position)
                return false;
            if(i+nums[i]>position){
                position=i+nums[i];
            }
            
            
            if(position>=nums.size()-1)
                return true;
        }
        return false;
    }
};

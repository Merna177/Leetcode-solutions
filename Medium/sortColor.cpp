class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int count0 = 0, count2 = nums.size()-1;
        while(count0<nums.size() && nums[count0]==0 )
        {
            count0++;
        }
        while(count2 >= 0 && nums[count2]==2 )
        {
            count2--;
        }
        
        int indx =count0;
        
        while(indx<=count2)
        {
            if(nums[indx] == 1)
            {
                indx++;
                continue;
            }
            else if(nums[indx]==0)
            {
                nums[indx]=nums[count0];
                nums[count0++]=0;
                if(indx<count0)
                    indx=count0;
            }
            else
            {
                nums[indx]=nums[count2];
                nums[count2--]=2;
            }
        }
        
    }
};

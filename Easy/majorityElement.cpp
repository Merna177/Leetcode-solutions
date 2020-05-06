class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int cnt=1;
      int majority=nums[0];
      for(int i=1;i<nums.size();i++)
      {
          if(nums[i]==majority)
              cnt++;
          else
              cnt--;
          if(cnt<0)
          {
              majority=nums[i];
              cnt=1;
          }
      }
        return majority;
  
    }
};

class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==0) 
             return -1;
        int start= find_min_value(nums);
        ///got the index of the start element  
        int left = start,right = (nums.size())+start-1,mid;
        int mod_number = nums.size();
        while(left<=right){
            mid = left  + (right-left)/2;
            if(nums[mid%mod_number]==target)
                return mid%mod_number;
            else if(nums[mid%mod_number]>target)
                right=mid-1;
            else 
                left = mid+1;
        }
        
         return -1;
        
        
    }
    //get index of start value
    int find_min_value(vector<int>& nums){
        if(nums[0]<=nums[nums.size()-1])
            return 0;
        int left =0,right=nums.size()-1,mid;
        while(left+1<right){
            mid  =left+(right-left)/2;
            //find min
            if(nums[mid-1]>nums[mid] && nums[mid+1]>nums[mid])
                return mid;
            
            else if (nums[mid]>nums[left] && nums[mid]<nums[right])
                right = mid;
            
            else if(nums[mid]>nums[left])
                left = mid;
            
            else if(nums[mid]<nums[right])
                right=mid;
            
            
        }
        if(nums[left]<nums[right])
            return left;
        else
            return right;
        
    }
};

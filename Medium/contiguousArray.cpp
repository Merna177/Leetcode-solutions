class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> mp;
        int cnt=0;
        int mx=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
                cnt--;
            else
                cnt++;
            if(mp.find(cnt)!=mp.end()){
              mx= max(mx,i-mp[cnt]);   
            }else
                mp[cnt]=i;
            if(cnt==0)
                mx=max(mx,i+1);
        }
        return mx;
    }
};

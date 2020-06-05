class Solution {
    vector<int> sums;
    int sum=0;
    
public:
    Solution(vector<int>& w) {
        for(int i=0; i<w.size(); i++)
        {
            sum=sum + w[i];
            sums.push_back(sum);
        }
    }
    
    int pickIndex() {
        int index = rand() % sum;
        int result = binarySearch(index+1);
        return result;
    }
    
    int binarySearch(int target)
    {
        int left=0,right=sums.size()-1;
        while(left<right)
        {
            int mid = left + (right-left)/2;
            if(target > sums[mid])
                left=mid + 1;
            else
                right=mid;
        }
        return left;
    }
};

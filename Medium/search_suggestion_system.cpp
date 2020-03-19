class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
     sort(products.begin(),products.end());
     vector<vector<string> > res;
     for(int i=1;i<=searchWord.size();i++){
         res.push_back (suggestmatch(products, searchWord, i));
     }
     return res;
    }
    vector<string> suggestmatch(vector<string>& products, string searchWord,int len){
        int left =0;
        int right = products.size()-1;
        vector<string> res;
        while(left<=right){
            int mid = (left+right)/2;
            if(left==right){
                if(searchWord.substr(0, len)!= products[mid].substr(0,len))
                    return res;
                break;
            }
            if(searchWord.substr(0, len)> products[mid].substr(0,len))
                left = mid+1;
            else 
                right=mid;
    
        }
        while(left<products.size()){
            if(searchWord.substr(0, len)!= products[left].substr(0,len) || res.size()==3)
                break;
            res.push_back(products[left]);
            left++;
        }
        return res;
    }
};

class Solution {
public:
    string largestTimeFromDigits(vector<int>& arr) {
        int mxTime=-1;
        sort(arr.begin(),arr.end());
        do{
            int hour = arr[0]*10 + arr[1];
            int min = arr[2]*10 + arr[3];
            if(hour<24 && min <60){
                int newTime = hour*60 + min;
                mxTime = max(newTime,mxTime);
            }            
        }while(std::next_permutation(arr.begin(), arr.end()));
        if(mxTime ==-1)
            return "";
        else{
            
             stringstream ss;  
  ss<<mxTime/60;
  string h;
  ss>>h;
                         stringstream mm;  

            if(mxTime/60 <10)
                h='0'+h;
           string m;
            mm<< mxTime %60;
            mm>>m;
            if(mxTime% 60 <10)
                m='0'+m;
            
            return h+":"+m;
    
        }
    }
};

class Solution {
public:
    vector<int> partitionLabels(string S) {
        int arr[26]={0};
        for(int i=0;i<S.size();i++){
            arr[S[i]-'a']=i;
        }
        vector<int> partitions;
        int ed=-1;
        int cnt=0;
          for(int i=0; i<S.size();i++){
        ed = max(ed, arr[S[i]-'a']);
        cnt++;
        if (i==ed){
            partitions.push_back(cnt);
            cnt = 0;
            ed = -1;
        }
    }
        return partitions;
    }
};

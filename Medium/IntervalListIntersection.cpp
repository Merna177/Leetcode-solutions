class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<vector<int> > intersect;
        int pt1=0,pt2=0;
        while(pt1<A.size() && pt2<B.size()){
            int start = max(A[pt1][0],B[pt2][0]);
            int finish = min(A[pt1][1],B[pt2][1]);
            if(start<=finish)
                intersect.push_back({start,finish});
            if(A[pt1][1]< B[pt2][1])
                pt1++;
            else
                pt2++;
        }
        return intersect;
    }
};

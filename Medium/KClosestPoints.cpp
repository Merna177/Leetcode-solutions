// Solution 1
class Solution {
public:
    int calculateDistance(vector<int> point){
        return point[0]* point [0] + point [1]*point[1];
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        priority_queue<pair<int,int>>q;
        for(int i=0;i<points.size();i++){
            int dis = calculateDistance(points[i]);
            if(i<K)
                q.push(make_pair(dis,i));
            else if(dis< q.top().first){
                q.pop();
                q.push(make_pair(dis,i));
            }
        }
        vector<vector<int>>res;
        while(!q.empty()){
            res.push_back(points[q.top().second]);
            q.pop();
        }
        return res;
    }
};
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Solution2
/*
class Solution {
public:
    int calculateDistance(vector<int> point){
        return point[0]* point [0] + point [1]*point[1];
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        if (K == 0 || points.size() == 0) {return {};}
        if (K >= points.size()) {return points;}
        Quicksort(points, 0, points.size()-1, K);
        vector<vector<int>> answer(points.begin(), points.begin()+K); 
        return answer;
     
    }
    void Quicksort(vector<vector<int> >& points,int low,int high,int K){
        //base Case
        if(low>=high)
            return;
         int mid = partition(points, low, high);
         int lengthClosest = mid-low+1;
        if(lengthClosest>K){
            Quicksort(points,low,mid-1,K);
        }else if(lengthClosest<K){
            Quicksort(points,mid+1,high,K-lengthClosest);
        }else
            return;
    }
    int partition(vector<vector<int>>& points,int low,int high){
        //take last element as a pivot 
        int pivot = calculateDistance(points[high]);
        int smallest = low-1;
        for(int i=low;i<=high;i++){
            if(calculateDistance(points[i])<pivot){
                smallest++;
                swap(points[i],points[smallest]);
            }
        }
        swap(points[++smallest],points[high]);
        return smallest;
    }
};
*/

class CustomStack {
private: 
      vector<int> st;
    int size; 
public:
     CustomStack(int maxSize) {
        size=maxSize;
    }
    
     void push(int x) {
        if(st.size()< size)
        {
            
            st.push_back(x);
        }
        
    }
    
     int pop() {
        int ret=-1;
        if(st.size()>0)
        {
            ret=st[st.size()-1];
            st.pop_back();
        }
        return ret;
        
    }
    
     void increment(int k, int val) {
        for(int i=0;i<min(k,(int)st.size());i++){
            st[i]=st[i]+val;
        }
    }
};



/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */

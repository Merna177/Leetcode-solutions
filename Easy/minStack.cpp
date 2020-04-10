class MinStack {
public:
    stack<pair<int,int>> data;
    MinStack() {
    }
    
    void push(int x) {
        if(data.empty())
           data.push(make_pair(x,x));
        else 
        {   int d = data.top().second;
            if(d>x)
             data.push(make_pair(x,x));
            else
             data.push(make_pair(x,d));

        }

    }
    
    void pop() {
        data.pop();
   
    }
    
    int top() {
        if(!data.empty()){
           return data.top().first;
        }else
            return -1;
    }
    
    int getMin() {
       return data.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

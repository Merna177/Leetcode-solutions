class LRUCache {
    int cap;
    list< pair<int,int> > lruList;     
    unordered_map< int, list<pair<int,int>>::iterator > lrumap; 
public:
    LRUCache(int capacity) {
        cap=capacity;
    }
    
    void gofront(int key,int value){
        lruList.erase( lrumap[key] ); 
        lruList.push_front( make_pair(key, value) );
        lrumap[key] = lruList.begin();
    }
    
    int get(int key) {
        //if not exist 
          if( lrumap.find(key) == lrumap.end() )
            return -1;
    
              //as we use iterator pointer 
          int val = (*lrumap[key]).second;
          gofront( key, val );
          return (*lrumap[key]).second;
          
    }
    
    void put(int key, int value) {
        if(lrumap.find(key)!=lrumap.end())
            gofront(key,value);
        else
        {
            lruList.push_front( make_pair( key, value ) );
            lrumap[key] = lruList.begin();
            if(lrumap.size()> cap)
            {
                lrumap.erase( lruList.back().first );
                lruList.pop_back();
            }
 
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */

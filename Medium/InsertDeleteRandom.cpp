class RandomizedSet {
public:
    vector<int> elements;
    map<int,int> Map;
    /** Initialize your data structure here. */
    RandomizedSet() {
        
    }
    

/** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
  bool insert(int val) {
    if(Map.find(val)!=Map.end())
        return false;
    Map[val]=elements.size();
    elements.push_back(val);    
    return true;
}

/** Removes a value from the set. Returns true if the set contained the specified element. */
bool remove(int val) {
     if(Map.find(val)==Map.end())
        return false;
    int index=Map[val];
    Map[elements.back()]=index;
    Map.erase(val);
    swap(elements[index],elements.back());
    elements.pop_back();
    return true;
}

/** Get a random element from the set. */
int getRandom() {
    int rand_index= rand() % elements.size();
    return elements[rand_index];
}
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */

class MyHashSet {
private:
    vector<int>hash;
public:
    MyHashSet() {
        int n = 1000001;
        hash.resize(n,-1);
    }
    
    void add(int key) {
        hash[key] = 1;
    }
    
    void remove(int key) {
        hash[key] = -1;
    }
    
    bool contains(int key) {
        if(hash[key]==1)return true;
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
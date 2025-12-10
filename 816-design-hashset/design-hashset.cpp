class MyHashSet {
    vector<bool> data;
public:
    MyHashSet() {
        this->data = vector<bool>(10'000'001, false);
    }
    
    void add(int key) {
        data.at(key) = true;
    }
    
    void remove(int key) {
        data.at(key) = false;
    }
    
    bool contains(int key) {
        return data.at(key);
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
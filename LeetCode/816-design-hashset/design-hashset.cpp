class MyHashSet {
public:
    unordered_map<int, bool> m;
    MyHashSet() {}

    void add(int key) { m[key] = 1; }

    void remove(int key) { m[key] = 0; }

    bool contains(int key) {
        if (m[key])
            return true;
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
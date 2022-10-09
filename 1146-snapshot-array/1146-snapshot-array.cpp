class SnapshotArray {
public:
    int n;
    map<int, int> mp;
    vector<map<int, int>> v;
    SnapshotArray(int length) {
        n = -1;
    }
    
    void set(int index, int val) {
        mp[index] = val;
    }
    
    int snap() {
        n++;
        v.push_back(mp);
        return n;
    }
    
    int get(int index, int snap_id) {
        return v[snap_id][index];
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */
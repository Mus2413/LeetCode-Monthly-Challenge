class NestedIterator {
public:
    vector<int> a;
    int ptr = 0;
    void getIntegers(vector<NestedInteger>& nestedList, int pos) {
        int n = nestedList.size();
        if(pos == n) {
            return;
        }
        if(nestedList[pos].isInteger()) {
            int val = nestedList[pos].getInteger();
            a.push_back(val);
            getIntegers(nestedList, pos + 1);
            return;
        }
        getIntegers(nestedList[pos].getList(), 0);
        getIntegers(nestedList, pos + 1);
    }
    NestedIterator(vector<NestedInteger> &nestedList) {
        getIntegers(nestedList, 0);
    }
    
    int next() {
        return a[ptr++];
    }
    
    bool hasNext() {
        if(ptr == (int) a.size()) {
            return false;
        }
        return true;
    }
};


/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */
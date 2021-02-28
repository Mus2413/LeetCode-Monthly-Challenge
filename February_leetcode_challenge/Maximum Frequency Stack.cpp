class FreqStack {
public:
    unordered_map<int, int> mp;
    unordered_map<int, stack<int>> mst;
    int maxf=0;
    FreqStack() {
        
    }
    
    void push(int x) {
        mp[x]++;
        maxf = max(maxf, mp[x]);
        mst[mp[x]].push(x);
    }
    
    int pop() {
         if(maxf<0) return -1;
        int top = mst[maxf].top();
        mst[maxf].pop();
        mp[top]--;
        if(mst[maxf].size()==0) {
            mst.erase(maxf);
            maxf--;
        }
        return top;
        
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 */
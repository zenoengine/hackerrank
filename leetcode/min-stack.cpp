class MinStack {
public:
    struct Node {
        int value = 0;
        int min = INT_MAX;
    };

    vector<Node> v;
    /** initialize your data structure here. */
    MinStack() : v(512) {
    }

    void push(int x) {
        Node n;
        n.value = x;
        n.min = x;
        int curMin = getMin();
        if (x > curMin) {
            n.min = curMin;
        }
        v.emplace_back(n);
    }

    void pop() {
        v.pop_back();
    }

    int top() {
        return v.rbegin()->value;
    }

    int getMin() {
        if (v.size() == 0){
            return INT_MAX;
        }

        return v.rbegin()->min;
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
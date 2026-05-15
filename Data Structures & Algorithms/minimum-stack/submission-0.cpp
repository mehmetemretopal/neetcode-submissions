class MinStack {
   private:
    stack<int> minStack;
    stack<int> mainStack;

   public:
    MinStack() { minStack.push(INT_MAX); }

    void push(int val) {
        mainStack.push(val);
        minStack.push(min(val, minStack.top()));
    }

    void pop() {
        minStack.pop();
        mainStack.pop();
    }

    int top() { return mainStack.top(); }

    int getMin() { return minStack.top(); }
};

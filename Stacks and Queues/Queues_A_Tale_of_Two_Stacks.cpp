class MyQueue {
   
    public:
        stack<int> stack_newest_on_top, stack_oldest_on_top;

        void push(int x) {
            stack_newest_on_top.push(x);
        }

        void pop() {
            if(stack_oldest_on_top.size() == 0) {
                // Reverse newest stack
                while(stack_newest_on_top.size() != 0) {
                    stack_oldest_on_top.push(stack_newest_on_top.top());
                    stack_newest_on_top.pop();
                }
            }
            stack_oldest_on_top.pop();
        }

        int front() {
            if(stack_oldest_on_top.size() == 0) {
                // Reverse newest stack
                while(stack_newest_on_top.size() != 0) {
                    stack_oldest_on_top.push(stack_newest_on_top.top());
                    stack_newest_on_top.pop();
                }
            }
            return stack_oldest_on_top.top();
        }
};
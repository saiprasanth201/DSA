class LinkedListStack {
private:    
    list<int>ll;
public:
    LinkedListStack() {
       
    }
    
    void push(int x) {
       ll.push_front(x);
    }
    
    int pop() {
       int topVal = ll.front(); 
       ll.pop_front();
       return topVal;
    }
    
    int top() {
       return ll.front();
    }
    
    bool isEmpty() {
      return ll.size() == 0;
    }
};
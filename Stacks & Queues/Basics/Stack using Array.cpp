class ArrayStack {
private:
   int arr[100];
   int topI;
public:
    ArrayStack() {
       topI = -1;
    }
    
    void push(int x) {
      topI++;
      arr[topI] = x;
    }
    
    int pop() {
      if(isEmpty()) return -1;
      return arr[topI--];
    }
    
    int top() {
      if(isEmpty()) return -1;
      return arr[topI];
    }
    
    bool isEmpty() {
       return (topI == -1);
    }
};
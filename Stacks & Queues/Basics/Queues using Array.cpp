class ArrayQueue {
private:
    int *arr;
    int front;
    int rear;
    int count;
    int cap;

public:
    ArrayQueue(int size = 1000) {
        cap = size;
        arr = new int[cap];
        front =0;
        rear = 0;
        count = 0; 
    }
    
    void push(int x) {
       if(count == cap) return;
       arr[rear%cap]=x;
       rear++;
       count++;
    }
    
    int pop() {
      if(isEmpty()) return -1;
      int val = arr[front];
       front++;
       count--;
       return val;
    }
    
    int peek() {
    if(isEmpty()) return -1;
    return arr[front];
    }
    
    bool isEmpty() {
      return count == 0;
    }
};
class MyCircularQueue {
public:
    int front=-1,rear=-1;
    int size=0;
    int arr[1002];
    MyCircularQueue(int k) {
       size=k;
        
    }
    
    bool enQueue(int value) {
        if((rear+1)%size==front)
            return false;
        if(rear==-1)
        {
            rear=0;
            front=0;
            arr[rear]=value;
        }
        else
        {
            arr[(rear+1)%size]=value;
            rear=(rear+1)%size;
            
        }
        return true;
    }
    
    bool deQueue() {
        if(front==-1)
        {
            return false;
        }
        else if(rear==front)
        {
            rear=-1;
            front=-1;
            return true;
        }
        else
        {
            front=(front+1)%size;
            return true;
        }
    }
    
    int Front() {
        if(front==-1)
            return -1;
        return arr[front];
    }
    
    int Rear() {
        if(rear==-1)
            return -1;
        return arr[rear];
    }
    
    bool isEmpty() {
        if(front==-1 && rear==-1)
            return true;
        else
            return false;
    }
    
    bool isFull() {
        if((rear+1)%size==front)
            return true;
        else
            return false;
    }
};

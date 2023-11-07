#include<iostream>
using namespace std;
class queue{
    public:
    int front = -1,back=-1,arr[5];
    void push(int x){
        if (back == 4){
            cout<<"Queue overloaded";
            return;
        }
        back ++;
        arr[back] = x;
        if(front == -1){
            front ++;
    }

    }
    void pop(){
        if (front == -1 || front >back)
        {
           cout<<"Queue is empty";
           return;
        }
        front ++;
        }
        
    
    void peek(){
        if (front == -1 || front >back)
        {
           cout<<"Queue is empty";
           return;
        }
        cout<<arr[front];
    }
    bool isEmpty(){
        return front == -1 || front>back;
    }

};

int main()
{
    queue q;
    q.push(5);
    q.peek();
    q.pop();
   
    q.peek();
    cout<<q.isEmpty();
    return 0;
}